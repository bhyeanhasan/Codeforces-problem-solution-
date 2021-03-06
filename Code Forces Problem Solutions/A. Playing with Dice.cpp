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

    ll n,t,count=0,sum=0,result,i=0,j=0,a,b,k=0,m=0;
    bool is;
    string s;

    cin>>a>>b;

    for(i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
            j++;
        else if(abs(a-i)>abs(b-i))
            k++;
        else
            m++;
    }

    cout<<j<<" "<<m<<" "<<k<<endl;

    return 0;
}


