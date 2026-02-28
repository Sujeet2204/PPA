#include <stdio.h>


int main() 

{

   
 char cvalue = 'S';

 int ivalue =11;

 float fvalue = 90.78f;

 double dvalue = 98.564323;
 

 printf("Size of character is : %d\n",sizeof(cvalue));
  
 printf("Size of integer is : %d\n",sizeof(ivalue));
 
 printf("Size of float is : %d\n",sizeof(fvalue));
 
 printf("Size of double is : %d\n",sizeof(dvalue));
                    
 return 0;   
 
}