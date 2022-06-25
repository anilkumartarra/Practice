//parameter passing methods
#include <iostream>
using namespace std;
/*int add (int a,int b)//call by value
{
    int c=a+b;
    cout<<c<<endl;
    return 0;
}*/
/*
void swap(int *x,int *y)//call by address
{
    int temp;
    temp=*x;
    *x=*y;
}
*/
void swap(int &x,int &y)//call by reference
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main() 
{
    /*   
    int n1=10,n2=20,sum;
    sum=add(n1,n2);//call by value
    cout<<n1<<endl;
    // your code goes here
    */
   /*
    int a=10,b=15;
    swap(&a,&b);//call by adress
    cout<<a<<" "<<b;
    */
    int a=10,b=20;
    swap(a,b);//call by reference
    cout<<a<<" "<<b;
	return 0;
}
