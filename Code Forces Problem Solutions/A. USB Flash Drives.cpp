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

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;


    cin>>t>>n;

    ll arr[t];

    fr(i,t)
    {
        cin>>arr[i];
    }

    sort(arr,arr+t,greater<ll>());

    fr(i,t)
    {
        sum+=arr[i];
        count++;
        if(sum>=n)
        {
            break;
        }
    }

    cout<<count;







    return 0;
}

