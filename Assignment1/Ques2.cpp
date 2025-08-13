#include <iostream>
using namespace std;
int C_to_F(float temp)
{
    return ((9*temp)/5+32);
}
int main()
{
    float temp;
    cout<<"Enter the Temprature in Celcious:";
    cin>>temp;
    temp=C_to_F(temp);
    cout<<"Temprature in Farenhite:"<<temp;
    return 0;
}