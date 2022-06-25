//structure and functions
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void intialize(struct rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r)
{
    return r.length*r.breadth;
}
void changelength(struct rectangle *r,int l)
{
    r->length=l;
}
int main() 
{
    int l=10,b=5;
    struct rectangle r;
    intialize(&r,l,b);
    area(r);
    changelength(&r,l);
	// your code goes here
	return 0;
}
// c to c++ class
#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void intialize(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    void changelength(int l)
    {
        length=l;
    }
    int main() 
    {
        int l=10,b=5;
        rectangle r;
        r.intialize(l,b);
        r.area(r);
        r.changelength(l);
    	// your code goes here
    	return 0;
    }
};
