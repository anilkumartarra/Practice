//array as parameter
#include <iostream>
using namespace std;
/*
void fun(int a[],int n)//(a[]=*a)
{
   //cout<<sizeof(a)/sizeof(int)<<endl; 
   //for(int x:a)//for each can't be used on pointers
   //cout<<x<<" ";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
}*/
int * fun(int size)
{
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
    return p;
}

int main() 
{
   /*
    int a[]={1,2,3,4,5};
    int n=5;
    fun(a,n);
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<sizeof(a)/sizeof(int)<<endl;
	// your code goes here
	*/
	
	int *ptr,n=10;
	ptr=fun(n);
	for(int i=0;i<n;i++)
	cout<<ptr[i]<<" ";
	return 0;
}
