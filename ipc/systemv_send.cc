#include <stdio.h>
#include <stdlib.h>
#include <sys/msg.h>
#include <iostream>


typedef struct s_msgbuf{
    long mtype;
    int v;
} p_msgbuf;

using namespace std;

int main(int argc, char* argv[])
{
    int v = 100;
    if ( argc == 2)
    {
       v = atoi(argv[1]);
       cout << " set v = " << v << endl;
    }

    int msgid = msgget(11, IPC_CREAT);
    if(msgid == -1)
    {
	 perror("msgget");
	 exit(1);
    }

    cout << " msgid = " << msgid << endl;

    p_msgbuf msg;
    msg.mtype = 1;
    msg.v = v;

    int rc = msgsnd(msgid, &msg, sizeof(msg.v), IPC_NOWAIT);

    if(rc == -1)
    {
	 perror("msgsnd");
	 exit(1);
    }

    cout << " rc = " <<  rc << endl;
    return 0;
}
