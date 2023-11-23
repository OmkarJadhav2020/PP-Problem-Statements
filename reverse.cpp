#include<iostream>
using namespace std;

void reverse_str(string &a)
{
int l = 0,r=a.length()-1;
while(l<r)
{
swap(a[l],a[r]);
l+=1;
r-=1;
}
}

int main()
{
string a;
cin>>a;
reverse_str(a);
cout<<"Reverse string is = "<<a<<endl;
return 0;
}
