#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50],temp[50];
    cout<<"enter string"<<endl;
    gets(str);
    int j = strlen(str)-1;
    for(int i=0;i<(strlen(str)-1)/2;i++)
    {
        temp[i]= str[i];
        str[i]=str[j];
        str[j]=temp[i];
        j--;
    }
    cout<<str;

}
