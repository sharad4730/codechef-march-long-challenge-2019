#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n,value;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        vector<int>v(n);
        for(int j=0;j<n;j++)
        {
            cin>>value;
            v[j]=value;
        }
        int count1=0,count2=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]>=0)
                count1++;
            else
                count2++;
        }
        if(count1==n)
            cout<<count1<<" "<<count1<<endl;
        else if(count2==n)
            cout<<count2<<" "<<count2<<endl;
        else if(count1<=count2)
            cout<<count2<<" "<<count1<<endl;
        else
            cout<<count1<<" "<<count2<<endl;
    }
    return 0;
}
