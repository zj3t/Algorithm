#include <stdio.h>

int calc_2017_price(int value){
        int one = 1;
        int two = 2;
        int three = 3;
        int four = 4;
        int five = 5;
        int six = 6;

        int money=0;

        if (value == 0){
                money = 0;
        }
        else if (value == one){
                money = 500;
        }
        else if(value <= one+two){
                money = 300;
        }
        else if(value <= one+two+three){
                money = 200;
        }
        else if(value <= one+two+three+four){
                money = 50;
        }
        else if(value <= one+two+three+four+five){
                money = 30;
        }
        else if(value <= one+two+three+four+five+six){
                money = 10;
        }
        else{
                money = 0;
        }
        return money;
}
int calc_2018_price(int value){
        int one = 1;
        int two = 2;
        int three = 4;
        int four = 8;
        int five = 16;

        int money=0;
        
        if (value == 0){
                money = 0;
        }
        else if (value == one){
                money = 512;
        }
        else if(value <= one+two){
                money = 256;
        }
        else if(value <= one+two+three){
                money = 128;
        }
        else if(value <= one+two+three+four){
                money = 64;
        }
        else if(value <= one+two+three+four+five){
                money = 32;
        }
        else{
                money = 0;
        }

        return money;
}
void price(int year2017, int year2018){
        int result2017=0;
        int result2018=0;

        if(year2017 <= 100){
                result2017=calc_2017_price(year2017)*10000;
        }
        if(year2018 <= 64){
                result2018=calc_2018_price(year2018)*10000;
        }
        printf("%d\n",result2017+result2018);
}
int main(){
        int count=0;
        int first=0;
        int second=0;

        scanf("%d",&count);
        if(count >= 1 && count <= 1000){
                for(int i=0; i<count; i++){
                        scanf("%d %d",&first,&second);
                        if(first >= 0 && second >= 0){
                                price(first,second);
                        }
                }
        }
        return 0;
}