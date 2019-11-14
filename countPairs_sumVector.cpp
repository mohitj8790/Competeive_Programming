#include<bits/stdc++.h>
using namespace std;

int pairsCount(vector<int> vec,int n)
{
    int count=0;
    map<int,int> mp;
    
    for(int i=0;i<n;i++)
    {
        mp[vec[i]]++;
    }
    
    map<pair<int,int>,int> pairs;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(mp[vec[i]+vec[j]]>0 && pairs[{vec[i],vec[j]}]==0)
            {
                count++;
            }
            
            
            pairs[{vec[i],vec[j]}]++;
            pairs[{vec[j],vec[i]}]++;
        }
    }
    
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    vector<int> vec(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    
    cout<<pairsCount(vec,n);
    return 0;
}