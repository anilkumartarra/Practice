//pointers
#include <iostream>
using namespace std;
 
// int main() 
// {
//     int a=10;
//     int *p;
//     p=&a;
//     cout<<a<<" "<<*p<<" "<<&a<<" "<<p;
// 	// your code goes here
// 	return 0;
// }
 
/* int main()
 {
     int a[5]={1,2,3,4,5};
     int *p;
     p=a;
     for(int i:a)
     {
        cout<<i<<" ";
     }
     return 0;
 }*/
 int main()
 {
    /*int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=10;
    p[1]=20;
    p[2]=30;  
    p[3]=40;  
    p[4]=50;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    */
    int *p;
    p=new int[5];
    p[0]=10;
    p[1]=20;
    p[2]=30;  
    p[3]=40;  
    p[4]=50;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    delete []p;//c++
//    free(p);//c
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
    //cout<<p;
 }
