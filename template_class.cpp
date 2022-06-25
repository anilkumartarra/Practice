//template class
#include <iostream>
using namespace std;
template <class T>
class arthametic
{
    private:
        T a;
        T b;
    public:
        arthametic(T a,T b);
        T add();
        T sub();
};
template <class T>
arthametic<T>::arthametic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template <class T>
T arthametic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template <class T>
T arthametic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}
int main() 
{
    arthametic<int> ar(10,5);
    cout<<ar.add();
    arthametic<float> ar1(3.2,4.6);
    cout<<ar1.add();
	// your code goes here
	return 0;
}
