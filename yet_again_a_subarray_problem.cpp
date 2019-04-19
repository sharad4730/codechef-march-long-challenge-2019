#include<bits/stdc++.h>
using namespace std;
typedef long int li;
int main()
{
    li t,n,k,value;
    cin>>t;
    for(li i=0;i<t;i++)
    {
        cin>>n>>k;
        vector<li>v(n+1),m(n+1);
        for(li j=1;j<=n;j++)
        {
            cin>>value;
            v[j]=value;
        }
        for(li j=n;j>=1;j--)
        {
            if(j>=k)
                m[j]=1;
            else if(k%j==0)
                m[j]=k/j;
            else m[j]=k/j+1;
        }
        /*for(li j=1;j<=n;j++)
        {
            map<li,li>mp;
            vector<li>v1(2001);
           for(li l=j;l<=n;l++)
           {
               li x=m[l-j+1];
               mp[v[l]]++;
               v1[v[l]]++;
               li y=0,z;
               for(auto it=mp.begin();it!=mp.end();it++)
               {
                   y+=(it->second)*x;
                   if(y>=k)
                   {
                       z=it->first;
                       break;
                   }
               }
                   z=v1[z];
                   if(v1[z]>0)
                       count++;
            }
            //mp.clear();
            //v1.erase(v1.begin(),v1.end());
        }*/
        int total=0;
        map<li,li>mp;
        vector<li>v1(2001);
        vector<int>c(n+1);
        multiset<int>set1;
        for(int j=1;j<=n;j++)
        {
            int x=m[j];
            mp[v[j]]++;
            v1[v[j]]++;
            int count=0;
            li y=0;
            auto it=mp.begin();
            int flag=0;
            while(it!=mp.end())
            {
                if(it->second==1)
                {
                    y+=x;
                    count++;
                    if(y>=k)
                        break;
                }
                else
                {
                    int z=it->second;
                    while(z!=0)
                    {
                        y+=x;
                        count++;
                        if(y>=k)
                        {
                            flag=1;
                            break;
                        }
                        z--;
                    }
                }
                if(flag==1)
                    break;
                it++;
            }
            c[j]=count;
            int z=it->first;
            z=v1[z];
            if(v1[z]>0)
                total++;
        }
        for(int j=2;j<=n;j++)
        {
            map<int,int>set1;
            v1.assign(2001,0);
            int z;
            for(int k=j;k<=n;k++)
            {
                set1[v[k]]++;
                v1[v[k]]++;
                int q=k-j+1;
                if(q==1)
                {
                    z=v[k];
                    if(v1[v1[z]]>0)
                        total++;
                    continue;
                }
                auto it=--(set1.end());
                //int x=set1.size();
                int p=it->second;
                
                if((c[q]==c[q-1])&&(v[k]>z)&&(q>1)){
                    if(v1[v1[z]]>0)
                    total++; continue;}
                    
                
                    
                //cout<<p<<endl;
                while((q-p)>=c[q]){
                   // cout<<(*it)<<" ";
                it--;
                p+=it->second;
                }
                //cout<<endl;
                z=it->first;
                if(v1[v1[z]]>0)
                    total++;
            }
        }
                
        cout<<total<<endl;
    }
    return 0;
}
        
            
