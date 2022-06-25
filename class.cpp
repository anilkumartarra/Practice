#include <iostream>
using namespace std;
class rectangle
{
    private:
        int length;
        int breadth;
    public:
        rectangle()
        {
            length=breadth=1;
        }
        rectangle(int l,int b)
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
            return 2*(length+breadth);
        }
        int getlength()
        {
            return length;
        }
        void setlength(int l)
        {
            length=l;
        }
        ~rectangle()
        {
            cout<<"destructor"<<endl;
        }
};
int main() 
{
    rectangle r{10,5};
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setlength(30);
    cout<<r.getlength()<<endl;;
	// your code goes here
	return 0;
}
