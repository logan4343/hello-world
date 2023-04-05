进程间通信
 
在linux上，命令 ipcs 可以显示当前的信号队列，共享内存以及信号量
 ipcrm  可以删除掉信号


对于消息队列，有systemV ,这个起源于UNIX AT&T 公司的systemV系统
                POSIX,   这个是IEEE标准委员会指定的更加轻小灵活的消息队列方法


编译posix方式的代码时候要加上 -lrt
             g++ posix_send.cc -o posix_send --std=c++11 -lrt
             g++ posix_rec.cc -o posix_rec --std=c++11 -lrt

执行的命令:
       cat /dev/mqueue/mq_test
       ./posix_send /mq_test
     
       cat /dev/mqueue/mq_test

       ./posix_rec /mq_test
       cat /dev/mqueue/mq_test
