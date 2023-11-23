#include<iostream>

using namespace std;

int main()
{
cout<<"No of units = ";
int n;
int cost = 0;
cin>>n;
if(n>=50)
{
cost+=50;
n-=50;
}
if(n>=100)
{
cost+=2*100;
n-=100;
}
cost+=5*n;
cost+=50;
cout<<"\nElectricity bill is "<<cost<<" dollar";
return 0;
}

