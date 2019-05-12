#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>
#include <syslog.h>
#include <string.h>
#include <time.h>
#include <sys/sysmacros.h>

#include<pthread.h>
#define MAXCHAR 1000


pthread_t tid1, tid2;
    char do1[20];
	char do2[20];
	char do3[20];
	char do4[20];
	char do5[20];
	char do6[20];
	char do7[20];
	char do8[20];
	char do9[20];
	char do10[20];
	char do11[20];
	char do12[20];
	char do13[20];
	char do14[20];
	char do15[20];
	char do16[20];
	char do17[20];

 void* crontab(void *arg){
            char all = '*';
            time_t rawtime;
            struct tm * timeinfo;

            time ( &rawtime );
            timeinfo = localtime ( &rawtime );
          
            int minute = atoi(do1);
            int day = atoi(do5);
            int date = atoi(do3);
            int month = atoi(do4);
            int hour = atoi(do2);
            int terpenuhi = 0;

            //printf("%d : %d \n",minute,timeinfo->tm_min);
            
                if (hour == timeinfo->tm_hour|| do2[0] == all)
                    {
                        terpenuhi = terpenuhi+1;
                    }
                if (minute == timeinfo->tm_min || do1[0]== all )
                    {
                        terpenuhi = terpenuhi+1;
                    }
                if (day == timeinfo->tm_wday || do5[0]== all)
                    {
                        terpenuhi = terpenuhi+1;
                    }
                if (month == timeinfo->tm_mon + 1 || do4[0] == all)
                    {
                    terpenuhi = terpenuhi+1;
                    }
                if (date == timeinfo->tm_mday || do3[0]== all)
                    {
                        terpenuhi = terpenuhi+1;
                    }
                if(timeinfo->tm_sec == 0){
                    terpenuhi = terpenuhi + 1;
                }

            printf("Terpenuhi = %d\n",terpenuhi);
             if(terpenuhi == 6){
                 printf("Terpenuhi \n");

            if(fork()==0){
             char *argv[4] = {do6,do7,do8,NULL};
             execv(do6,argv); }
            }
        terpenuhi=0;
            //printf("%d \n",terpenuhi);

            }
int main(void *arg) {
  pid_t pid, sid;

  pid = fork();

  if (pid < 0) {
    exit(EXIT_FAILURE);
  }

  if (pid > 0) {
    exit(EXIT_SUCCESS);
  }

  umask(0);

  sid = setsid();

  if (sid < 0) {
    exit(EXIT_FAILURE);
  }

  if ((chdir("/")) < 0) {
    exit(EXIT_FAILURE);
  }

  close(STDIN_FILENO);
  close(STDOUT_FILENO);
  close(STDERR_FILENO);

  while(1) {


    FILE *fp;
    char kata[MAXCHAR];
    char* filename = "/home/awin/fp/crontab.data";
        int counter=0;
	int con1=0;
	int con2=0;
	int con3=0;
	int con4=0;
	int con5=0;
	int con6=0;
	int con7=0;
	int con8=0;
	int con9=0;
	int con10=0;
	int con11=0;
	int con12=0;
	int con13=0;
	int con14=0;
	int con15=0;
	int con16=0;
	int con17=0;


   fp = fopen(filename, "r");

    while (fgets(kata, MAXCHAR, fp) != NULL){
      int len= strlen(kata)-1;
      for(int x=0;x<len;x++){
         //printf("%c",kata[x]);


          int space =' ';
        	int kosongkan ='\0';

            if (kata[x] == space)
            {
                counter=counter+1;
            }
            else{
            		int ka = kata[x+1] == kosongkan;
					int ki = kata[x+1] == space;
					int urutankata=kata[x];
                if(counter==0){
                     do1[x]=urutankata;

                 if(ki|| ka)
                             do1[x+1]=kosongkan;
                             }

                else if(counter==1){

                    do2[con1]=urutankata;
                    con1=con1+1;
                        if(ki|| ka)
                        do2[con1]=kosongkan;

                        }
                else if(counter==2){

                    do3[con2]=urutankata;
                    con2=con2+1;
                        if(ki|| ka)
                        do3[con2]=kosongkan;
    
                        }
                else if(counter==3){

                    do4[con3]=urutankata;
                    con3=con3+1;
                        if(ki|| ka)
                        do4[con3]=kosongkan;

                        }
                 else if(counter==4){

                    do5[con4]=urutankata;
                    con4=con4+1;
                        if(ki|| ka)
                        do5[con4]=kosongkan;

                        }
                else if(counter==5){

                    do6[con5]=urutankata;
                    con5=con5+1;
                        if(ki|| ka)
                        do6[con5]=kosongkan;

                        }

                else if(counter==6){

                    do7[con6]=urutankata;
                    con6=con6+1;
                        if(ki|| ka)
                                do7[con6]=kosongkan;
                            }
                else if(counter==7){

                    do8[con7]=urutankata;
                    con7=con7+1;
                        if(ki|| ka)
                        do8[con7]=kosongkan;
                        }
                 else if(counter==8){

                    do9[con8]=urutankata;
                    con8 = con8+1;
                        if(ki|| ka)
                        
                                do9[con8]=kosongkan;

                        }
                else if(counter==9){

                     do10[con9]=urutankata;
                     con9 = con9+1;
                         if(ki)
                         do10[con9]=kosongkan;
                             if(ka){
                                 do10[con9]=kosongkan;
                             }
                         }
				  else if(counter==10){

                     do11[con10]=urutankata;
                     con10 = con10+1;
                         if(ki)
                         do11[con10]=kosongkan;
                             if(ka){
                                   do11[con10]=kosongkan;
                             }

                         }
                  else if(counter==11){

                   do12[con11]=urutankata;
                     con11 = con11+1;
                         if(ki)
                         do12[con11]=kosongkan;
                             if(ka){
                                  do12[con11]=kosongkan;
                             }

                         }
                  else if(counter==12){

                     do13[con12]=urutankata;
                     con12 = con12+1;
                         if(ki)
                         do13[con12]=kosongkan;
                             if(ka){
                                 do13[con12]=kosongkan;
                             }

                         }

                }
        }
    counter = 0;
    con1=0;
    con2=0;
    con3=0;
    con4=0;
    con5=0;
    con6=0;
    con7=0;
    con8=0;

    //crontab();
     pthread_create(&(tid1), NULL, crontab, NULL);
    //sleep(1);

    pthread_join(tid1, NULL);
        printf("%s \n",do1);
        do1[0]='\0';
    	printf("%s \n",do2);
        do2[0]='\0';
        printf("%s \n",do3);
        do3[0]='\0';
        printf("%s \n",do4);
        do4[0]='\0';
        printf("%s \n",do5);
        do5[0]='\0';
        printf("%s \n",do6);
        do6[0]='\0';
        printf("%s \n",do7);
        do7[0]='\0';
        printf("%s \n",do8);
        do8[0]='\0';
   




    }
    fclose(fp);




sleep(1);

  }
  
  exit(EXIT_SUCCESS);
}
