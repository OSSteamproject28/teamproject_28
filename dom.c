#include <stdio.h>

int main(){
    double price = 1000;
    double etf;
    double inv;

    for(int i = 0; i< 12 ; i++){
        if((i+1)%2==1){
            etf = 1000 * 0.8;
            inv = 1000 * 1.2;
            printf("%d일차 ETF: %6f(-20.000000%)     INV:%6f(+20.000000%)\n", i+1, etf, inv);
        }else{
            etf = 1000 * 1.2;
            inv = 1000 * 0.8;
            printf("%d일차 ETF: %6f(+20.000000%)     INV:%6f(-20.000000%)\n", i+1, etf, inv);
        }
    }
    return 0;
}