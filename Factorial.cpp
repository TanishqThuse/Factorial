#include <iostream>
using namespace std;

int factorial ;
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        std::cout<<"Invalid Input"<<std::endl;
        return 0;
    }
    factorial = fact(n-1) * n;
    return factorial;
}

int main()
{
    int a;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>a;

    std::cout<<fact(a)<<std::endl;
    return 0;
}