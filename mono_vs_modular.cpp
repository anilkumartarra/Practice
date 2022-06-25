//monolithic
#include <iostream>
using namespace std;

int main() 
{
    int length=0,breadth=0;
    cin>>length>>breadth;
    int area=length*breadth;
    int peri=2*(length+breadth);
    cout<<area<<" "<<peri;
	// your code goes here
	return 0;
}

//modular program
#include<iostream>
using namespace std;

int area(int length,int breadth)
{
    return length*breadth;
}
int perimeter(int length,int breadth)
{
    int p=2*(length+breadth);
    return p;
}
int main()
{
    int length=0,breadth=0;
    cin>>length>>breadth;
    int a=area(length,breadth);
    int b=perimeter(length,breadth);
    cout<<a<<" "<<b;
    return 0;
}
