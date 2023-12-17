// Write a function to print squares of first n natural numbers, taking n as argument to the function
#include <iostream>
using namespace std;
int square(int n){
    int sqr=1;
    for(int i=1;i<=n;i++){
        sqr=i*i;
    }
    cout<<endl;
    return sqr;
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    cout<<square(i);
}