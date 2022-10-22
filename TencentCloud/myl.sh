#!/bin/bash

echo " welcome to the myl world"
echo "Usage: myl                               #search project from /home/lighthouse/$USER by default"
echo "       myl /home/lighthouse/root/project #search project from specified DIR"

if [ $# == 0 ] ; then
    prjs=$(ls -l /home/lighthouse/${USER} |awk '/^d/ {print $NF}')
    dir=/home/lighthouse/${USER}
    
else
    prjs=$(ls -l $1 |awk '/^d/ {print $NF}')
    dir=$1
fi    

echo -e "prjs =\n$prjs "


echo "dir = $dir"


#1 create the project menu
index=0
array=(name1 name2)
echo " Path name list:"
for i in $prjs
   do
   let index=index+1
   echo "$index :  $dir$i"
    array[$index]=$i
done
echo " array[0] = ${array[0]}"
echo " array[1] = ${array[1]}"

echo " array[2] = ${array[2]}"
echo " array[3] = ${array[3]}"
echo " array[4] = ${array[4]}"

printf "\E[31mPlease choose the path_name_number or q / Enter to quit:\E[0m"


#2 choose the project
read key

if [ ! -z $key ] #if the key is not null
then
  if [ "$key" == "q" ]
  then
    exit 0
  else
     key=`echo $key | awk '{if($1 ~ /^[0-9]*$/) {print $1} else {print 0}}'`
     temp='this is a world'
     echo $key
     if [ $key -ne 0 ]
     then 
       echo "Enter the project ${array[$key]}"
       cd ${dir}/${array[$key]}

       echo " what project do you want to build"
       echo " "1:beamer"     --building beamer only"
       echo " "2:made"       --building made only"
       echo " "3:all"        --building beamer and made"
       echo " "4:pack"       --pack the beamer and made image into load"
     fi
   fi
fi

exit;

#1.2.Waiting selection	
read key
if [ ! -z $key ]
then
    if [ "$key" = "q" ]; then continue; fi

    key=$(echo $key | awk '{if($1 ~ /^[0-9]*$/) {print $1} else {print 0}}')

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


