#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[10];
    char str2[10];
    char str3[10];
    int len;

    cout<<"Enter the 1st string: ";
    cin.getline(str1,10);
    cout<<"Enter the 2nd string: ";
    cin.getline(str2,10);

    strcpy(str3,str1);
    cout<<"\nstrcpy(str3,str1): "<<str3<<endl;

    strcat(str1,str2);
    cout<<"\nstrcat(str1,str2): "<<str1<<endl;
    
    len=strlen(str1);
    cout<<"\nstrlen(str1): "<<len<<endl;
};