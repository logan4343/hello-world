#!/bin/bash

echo "Usage: myz                              #search project from /var/fpwork/user-name by default"
echo "       myz /var/fpwork/xiaoxiyi/project #search project from specified DIR"

if [ $# -eq 0 ] ; then
    prjs=$(ls -l /home/lighthouse/${USER} |awk '/^d/ {print $NF}')
    dir=/var/fpwork/${USER}
    
else
    prjs=$(ls -l $1 |awk '/^d/ {print $NF}')
    dir=$1
fi    

echo  "prjs = $prjs "


echo "dir = $dir"
exit 0

#1.1.Create project menu
index=0
array=(name1 name2)
echo "Path_name List:"
for i in $prjs
  do
  let index+=1
  echo "    "$index:$i
  array[$index]=$i
done
printf "\E[31mPlease Choose (q or Enter:quit or path_name index):\E[0m"
    
#1.2.Waiting selection	
read key
if [ ! -z $key ]
then
    if [ "$key" = "q" ]; then continue; fi

    key=`echo $key | awk '{if($1 ~ /^[0-9]*$/) {print $1} else {print 0}}'`

    if [ $key -ne 0 ]
    then
        echo $key:${array[$key]}
        echo "Enter to /var/fpwork/${USER}/"${array[$key]}
        cd ${dir}/${array[$key]}
		
		#2.1.Create building menu
		echo "    "1:beamer"    --buiding beamer only"
		array_type[1]=beamer
		echo "    "2:made"      --buiding made only"
		array_type[2]=made
		echo "    "3:all"       --buiding beamer and made"
		array_type[3]=all		
		echo "    "4:pack"      --pack the beamer and made image into load"
		array_type[4]=pack		
		printf "\E[31mPlease Choose (q or Enter:quit or build type index):\E[0m"		
		
		#2.2.Waiting selection
		read key
		if [ "$key" == "q" ]; then return; fi	
		
		#2.3.Process the selection of building
		if [ "$key" != "" ]
		then		
			if [ ${array_type[$key]} == "beamer" ];then
				echo "Start beamer building"
				source seesetenv RFSW_ZEUS
				PROJECT=beamer_ecpri
				source build.env stratix10-aeqb
				bitbake swup-multivariant
			elif [ ${array_type[$key]} == "made" ];then
				echo "Start made building"
				source seesetenv RFSW_ZEUS
				PROJECT=dfe_ecpri
				source build.env made
				bitbake swup-multivariant 
			elif [ ${array_type[$key]} == "all" ];then
				echo "Start beamer+made building"
				source seesetenv RFSW_ZEUS
				PROJECT=beamer_ecpri
				source build.env stratix10-aeqb
				bitbake swup-multivariant
				cd ..
				source seesetenv RFSW_ZEUS
				PROJECT=dfe_ecpri
				source build.env made
				bitbake swup-multivariant
			elif [ ${array_type[$key]} = "pack" ]; then
				./run_multipack -c
			fi
		fi
    fi
fi


