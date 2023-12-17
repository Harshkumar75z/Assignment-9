//Write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>
using namespace std;
float area(int r){
    float ar = 3.14*r*r;
    return ar;
}
int main()
{
    int r;
    cout<<"Enter Radius : ";
    cin>>r;
    cout<<area(r);
}