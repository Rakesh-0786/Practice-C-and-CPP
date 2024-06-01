#include<iostream>
using namespace std;
int main()
{
    string a="mensi didi";
    string v="";
    string c="";
    int i=0;
    while(i<a.size())
    {
        char ch=a[i];
        if(ch!='a'&&ch!='e' &&ch!='i' &&ch!='o' &&ch!='u')
        c+=ch;
        else 
        v+=ch;
        i++;
    }
    cout<<"vowel: "<<v<<endl<<"consonant: "<<c<<endl;
    }

