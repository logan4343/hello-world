#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sys/msg.h>
typedef struct s_msgbuf{
    long mtype;
    int v;

} p_msgbuf;

using namespace std;


int main(int argc, char* argv[])
{
  int msgid = msgget(11, IPC_CREAT);

  if (msgid == -1)
  {
   cout << " msgget error" << endl;
   exit(-1);
  }
  else
  {
    cout << " msgid = " << msgid << endl;
  }
 
   p_msgbuf msg;
   int rc = msgrcv(msgid, &msg, sizeof(msg.v), 1, IPC_NOWAIT) ;
 
  if (rc == -1)
  {
   cout << " msggrcv error" << endl;
   exit(-1);
  }
  else
  {
    cout << " rc = " << rc << endl;
    cout << " msg.mtype = " << msg.mtype << ",  v = " << msg.v << endl;
  }


  return 0;
}
