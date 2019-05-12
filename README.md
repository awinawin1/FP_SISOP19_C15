# FP_SISOP19_C15
## Penjelasan
1. membuat program yang dapat menyimpan semua karater ke dalam variable.

contoh : * * * * * /home/awin
menjadi 

        var1 = *

        var2 = *
        
        var3 = *
        
        var4 = *
        
        var5 = *
        
        var6 = /home/awin
        
Menghitung panjang karakter, setiap karakter yang menemukan spasi('/n') atau kata_akhir('/0') maka tersimpan dalam variable.disimpan secara manual. dan dia menghilangkan karater lainnya setelah space simpan di variable, dan melanjutkan susuai
urutan strln
```while (fgets(kata, MAXCHAR, fp) != NULL){
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
```
2. menyimpan waktu dengan mengambil localtime. menambil menit, jam, hari, tanggal, bulan yang disimpan di variable yang telah
dibuat, dengan menggunakan atoi. Ketika syarat-syarat telah terpenuhi atau sama dengn localtime di laptop. maka dapat mengeksekusi crontab.data yang telah disimpan
```

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
```
