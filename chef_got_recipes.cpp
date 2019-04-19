#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>
#include<set>
#include<math.h>
using namespace std;
unordered_map<string,int>mp;
void find_subset(char *set, int set_size) 
{   
    string s;
    unsigned int pow_set_size = pow(2, set_size); 
    int counter, j; 
    for(counter = 1; counter < pow_set_size; counter++) 
    { 
        for(j = 0; j < set_size; j++) 
        { 
        /* Check if jth bit in the counter is set 
            If set then print jth element from set */
             if(counter & (1 << j)) 
                 s=s+set[j];
        } 
        if(mp.find(s)==mp.end())
            mp[s]=0;
        else
            mp[s]++;
        s.clear();
    } 
} 
int main()
{
    long int t,n;
    string s;
    cin>>t;
    char s1[]={'a','e','i','o','u'};
        find_subset(s1,5);
        //cout<<mp.size()<<endl;
    for(long int i=0;i<t;i++)
    {
        cin>>n;
        vector<string>v(n);
        
        for(long int j=0;j<n;j++)
        {
            cin>>s;
            v[j]=s;
        }
        long int no=0;
        vector<string>v1;
        for(long int j=0;j<n;j++)
        {
            int f1=0,f2=0,f3=0,f4=0,f5=0;
            string s2=v[j];
            char s3[6],s4[6];
            for(int k=0;k<s2.length();k++)
            {
                if(s2[k]=='a')
                    f1=1;
                else if(s2[k]=='e')
                    f2=1;
                else if(s2[k]=='i')
                    f3=1;
                else if(s2[k]=='o')
                    f4=1;
                else f5=1;
                if((f1==1)&&(f2==1)&&(f3==1)&&(f4==1)&&(f5==1))
                    break;
                
            }
            int k=0,l=0;

            if((f1==1)&&(f2==1)&&(f3==1)&&(f4==1)&&(f5==1))
                no++;
            else
            {
            if(f1==1) s3[k++]='a'; else s4[l++]='a';
            if(f2==1) s3[k++]='e'; else s4[l++]='e';
            if(f3==1) s3[k++]='i'; else s4[l++]='i';
            if(f4==1) s3[k++]='o'; else s4[l++]='o';
            if(f5==1) s3[k++]='u'; else s4[l++]='u';
            s3[k]='\0'; s4[l]='\0';
            find_subset(s3,k);
            string s5(s4);
            v1.push_back(s5);
            }
        }
        long int total=0;
        if(n==1){
            cout<<total<<endl; continue;}
       for(long int j=0;j<v1.size();j++)
        {
            auto it=mp.find(v1[j]);
            if(it!=mp.end())
                total+=it->second;
        }
        total=total/2;
        total+=((n-1)*no)-(no*(no-1))/2;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            it->second=0;
        }
        
       cout<<total<<endl;
    }
    return 0;
}
            
            
