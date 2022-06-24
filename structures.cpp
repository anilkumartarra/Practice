//structures
#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
    char x;
};
//}r1,r2,r3;
//struct rectangle r1,r2,r3;
int main() 
{
    struct rectangle r1={10,5};
    cout<<sizeof(r1)<<endl;
    r1.length=15;
    r1.breadth=9;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
	// your code goes here
	return 0;
}
