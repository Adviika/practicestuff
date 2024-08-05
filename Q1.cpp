#include<iostream>
#include<vector>
using namespace std;

int avg(vector<int>& sol){
    int sum = 0;
    int d = sol.size();
    for(int i = 0; i < d; i++)
    {
        sum += sol[i];
    }
    int average = sum / d;
    return average;
}

int main()
{
    vector<int> res;
    for(int i = 0; i < 5; i++)
    {
        int num;
        cout << "Enter number for the array: ";
        cin >> num;
        res.push_back(num);
    }
    int result = avg(res);
    cout << "Average: " << result << endl;
    return 0;
}
