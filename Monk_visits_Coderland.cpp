    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll unsigned long long int
     
    ll cost(ll c[],ll l[],ll n)
    {
        ll cost=0;
        ll i;
        ll m=c[0];
        for(i=0;i<n;i++)
        {
            cost+=m*l[i];
            if(m>=c[i+1])
            {
                m=c[i+1];
            }
        }
        
        return cost;
    }
     
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        ll t;
        cin>>t;
        while(t>0)
        {
            ll n,i;
            cin>>n;
            ll c[n],l[n];
            for(i=0;i<n;i++)
            {
                cin>>c[i];
            }
            
            for(i=0;i<n;i++)
            {
                cin>>l[i];
            }
            
            cout<<cost(c,l,n)<<"\n";
            t--;
        }
        
        return 0;
    }