#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main() { 
    
    int answer,number,max,min;
    /* 設定亂數種子 */
    srand( time(NULL) );

    /* 產生亂數 */
    number=rand()%101; 
    
    printf("number: %d\n", number);
    min=1; // 設定最小邊界範圍為1 
    max=100; // 設定最大邊界範圍為100 
    
    do 
    { 
        printf("請在%d~%d猜一個數字:",min,max); 
        cin >> answer;
    
        if(answer>number && answer<max && answer>min) 
        { 
            max=answer; // 改變最大邊界範圍
            printf("%d~%d\n",min,max); 
        } 
        else if(answer<number && answer<max && answer>min) 
        { 
            min=answer; // 改變最小邊界範圍
            printf("%d~%d\n",min,max); 
        } 
        else if (answer!=number && answer>max || answer<min)
        {
            printf("Invalid input\n"); 
        }
    
    }while(answer!=number); 
    
    printf("You got it!\n"); 
    system("pause"); 
    
    
    return 0;
}



