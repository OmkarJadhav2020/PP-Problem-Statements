#include<iostream>
using namespace std;

int main()
{
string a;
cin>>a;
string vowels = "";
string consonants = "";
for(int i = 0 ; i < a.length();i++)
{
if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
{
vowels+=a[i];
}
else
{
consonants +=a[i];
}
}
cout<<vowels+consonants;
}
