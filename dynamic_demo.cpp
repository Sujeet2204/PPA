#include<iostream>
using namespace std;

int main()
{
int length =0;
int *Arr=NULL;

cout<<"Enter the no of elements :\n";
cin>>length;
//step 1: allocate the memory
Arr=new int[length];
if (Arr ==NULL)
{
    cout<<"unable to allocate memory\n";
}
else 
{
    cout<<"memory gets succesfully allocated\n";
}
//step 2:use the memory

//step 3: Deallocate the memory
delete [] Arr;

    return 0;
}