#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <unistd.h>

using namespace std;

int main(int argc,  char* argv[])
{
   long mq_prio = sysconf(_SC_MQ_PRIO_MAX);
   cout << "mq_prio = " << mq_prio << endl;
   cout << "argc = " << argc << endl;

   for (int i = 0; i < argc; i++)
   {
	   cout << "argv[" << i << "] = " << argv[i] << endl; 
   }

   struct mq_attr attr;
   attr.mq_maxmsg = 10;
   attr.mq_msgsize = 1024;
   mqd_t mqd_id = mq_open(argv[1], O_RDWR|O_CREAT, S_IRUSR|S_IWUSR, &attr);
   if (mqd_id == ((mqd_t)-1) )
   {
	   cout << " mq_open error " << endl;
	   exit(EXIT_FAILURE);
   }

   getchar();
   char v[] = "logan";
   int rc = mq_send(mqd_id, (const char*)&v, sizeof(v), 32767);
   if (rc == -1)
   {
	   perror("mq_send");
	   exit(EXIT_FAILURE);
   }
   else
   {
	   cout << " mq_send rc = " << rc <<  endl;
   }


    return 0;
}
