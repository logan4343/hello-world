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
   //long mq_prio = sysconf(_SC_MQ_PRIO_MAX);
   //cout << "mq_prio = " << mq_prio << endl;
   cout << "argc = " << argc << endl;

   for (int i = 0; i < argc; i++)
   {
	   cout << "argv[" << i << "] = " << argv[i] << endl; 
   }

   struct mq_attr attr;
   
    cout << "the default mq_maxmsg:" << attr.mq_maxmsg << ", mq_msgsize:" <<  attr.mq_msgsize << endl;
   mqd_t mqd_id = mq_open(argv[1], O_RDWR|O_CREAT, 0600, &attr);
   if (mqd_id == ((mqd_t)-1) )
   {
	   cout << " mq_open error " << endl;
	   exit(EXIT_FAILURE);
   }

   getchar();
   int rc = mq_getattr(mqd_id, &attr);
   if (rc == -1)
   {
	   perror("mq_send");
	   exit(EXIT_FAILURE);
   }

    cout << " mq_send rc = " << rc <<  endl;
    cout << "mq_maxmsg:" << attr.mq_maxmsg << ", mq_msgsize:" <<  attr.mq_msgsize << endl;

    //void* ptr = malloc(attr.mq_msgsize);
    char* buff = new char[attr.mq_msgsize];
    unsigned int  mq_prio;
    rc = mq_receive(mqd_id, (char*)buff, attr.mq_msgsize, &mq_prio);


   if (rc == -1)
   {
	   perror("mq_receive");
	   exit(EXIT_FAILURE);
   }

    printf(" RECV prio: %d, bytes:%d\n", mq_prio, rc);

    //cout << " ptr = " << ptr << endl;
    cout << " buff = " << buff << endl;
    return 0;
}
