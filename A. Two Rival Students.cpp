/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define vc vector<ll>
#define in(a) scanf("%d",&a)
#define srt(a) sort(a.begin(),a.end())
#define fr(i,n) for(ll i=0;i<n;i++)


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t,count=0,sum=0,result,i,j,k;
    ll swp,x,y;
    bool is;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>swp>>x>>y;

        ll difference = abs(x-y);

        ll ok = difference+swp;

        if(ok<n)
            cout<<ok<<endl;
        else
            cout<<n-1<<endl;

    }






    return 0;
}
