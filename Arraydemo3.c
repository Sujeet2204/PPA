#include<stdio.h>  //address
int main()
{
    int Arr[3]={10,20,30};

    printf("addresss of Arr:%d\n",Arr);
    printf("address of &Arr:%d\n",&Arr);
    printf("address of &Arr[0]:%d\n",&Arr[0]);

return 0;
}