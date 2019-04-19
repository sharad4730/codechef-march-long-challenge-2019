#include<iostream>
#include<vector>
#include<algorithm>
typedef long long int llu;
using namespace std;
int main()
{
    int t,rem,d;
    llu n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>d;
        vector<int>v;
        while(n!=0)
        {
            rem=n%10;
            v.push_back(rem);
            n=n/10;
        }
        reverse(v.begin(),v.end());
        v.push_back(d);
        int j=0,x=v.size();
        while(j!=(x-1))
        {
            if(v[j+1]<v[j])
            {
                for(int k=j;k<(x-1);k++)
                    v[k]=v[k+1];
                v[x-1]=d;
                j=0;
            }
            else
                j++;
        }
        llu m=v[0];
       for(j=1;j<(x-1);j++)
           m=m*10+v[j];
       cout<<m<<endl;
    }
    return 0;
}
            
