#include <iostream>

using namespace std;

int main()
{
    int b;

    printf("輸入顯示層數\n");
    scanf("%d",&b);

    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=b-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int j=0;j<b/3;j++) {
        for(int i=0;i<b-2;i++)
        {
            printf(" ");//印出底座左邊的空白
        }
       for(int i=0;i<3;i++)
        {
            printf("*");//印出底座
        }
        printf("\n");
    }
}



