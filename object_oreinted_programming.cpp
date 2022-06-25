/*//structure and functions
#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void intialise(struct rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct rectangle r)
{
    int p=2*(r.length+r.breadth);
    return p;
}

int main()
{
    rectangle r={0,0};
    int l,b;
    cin>>l>>b;
    intialise(&r,l,b);
    int a=area(r);
    int b=perimeter(r);
    cout<<a<<" "<<b;
    return 0;
}
*/

//object oreinted programming
//using structure everthing inside is public
//using class everthing inside is private
#include<iostream>
using namespace std;

//struct rectangle
class rectangle
{
    private:
    int length;
    int breadth;

    public:
    void intialise(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    
    int perimeter()
    {
        int p=2*(length+breadth);
        return p;
    }
};
int main()
{
    rectangle r={0,0};
    int l,b;
    cin>>l>>b;
    r.intialise(l,b);
    int area=r.area();
    int peri=r.perimeter();
    cout<<area<<" "<<peri;
    return 0;
}

