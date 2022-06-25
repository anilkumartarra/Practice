//pointer to structure
#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
int main() 
{
   /* rectangle r={10,5};
    cout<<r.length<<" ";
    cout<<r.breadth<<" ";
	// your code goes here
	rectangle *p=&r;
	cout<<p->length<<" "<<p->breadth<<" ";
	*/
	rectangle *p;
	p=(struct rectangle *)malloc(sizeof(struct rectangle ));//c
	//p=new rectangle;//c++
	p->length=30;
	p->breadth=20;
	cout<<p->length<<" "<<p->breadth;
	return 0;
}
