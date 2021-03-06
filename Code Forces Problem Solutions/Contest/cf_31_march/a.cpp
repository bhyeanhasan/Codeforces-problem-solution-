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
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t,count=1,sum=0,result=0,i,j=0,k=0;
    bool is = false;
    string s;

    cin>>n;
    ll arr[n];

    fr(i,n)
    cin>>arr[i];

    sort(arr,arr+n);

    for(i=n-1;i>=0;i--)
    {
        if(arr[i]-count>0)
        {
            sum+=arr[i]-count;
            count++;
        }
    }

    cout<<sum<<endl;


    return 0;
}


