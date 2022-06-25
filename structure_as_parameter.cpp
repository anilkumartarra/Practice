//structure_as_parameter
#include <iostream>
using namespace std;

struct rectangle
{
    int l;
    int b;
};
/*
void fun(struct rectangle r)
{
    r.l=20;
    cout<<r.l<<" "<<r.b<<endl;
}
void fun(struct rectangle *p)
{
    p->l=20;
    cout<<p->l<<" "<<p->b<<endl;
}
int main() 
{
    struct rectangle r={10,5};
    //fun(r);//call by value
    fun(&r);//call by address
    cout<<r.l<<" "<<r.b;
	// your code goes here
	return 0;
}
*/
struct rectangle *fun()
{
    struct rectangle *p;
    p=new rectangle;
   // p=(struct rectangle *)malloc(sizeof(struct rectangle));//c
   p->l=15;
   p->b=7;
   return p;
}
int main()
{
    struct rectangle *ptr=fun();
    cout<<ptr->l<<" "<<ptr->b;
    return 0;
}

