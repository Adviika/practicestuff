#include<iostream>
#include<vector>
using namespace std;

int avg(vector<int>& sol){
    int x = 0 ;
    int avg;
    int d = sol.size();
    for(int i=1;i<d;i++)
    {
        x = x + sol.pop_back(i);
    }
    avg = x/d;
    cout<<avg;
}
int main()
{
    vector<int> res(5);
    for(int i=0;i<5;i++)
    {
        cout<<"enter numbers of array"<<endl;
        cin>>i;
        res.push_back(i);
    }
    avg(res);
}
