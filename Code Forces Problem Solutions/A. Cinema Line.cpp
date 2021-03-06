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

    ll n,t,count=0,sum1=0,sum2=0,sum3=0,result,i,j,k;
    bool is;
    string s;

    cin>>n;

    while(n--)
    {
        cin>>k;
        if(k==25)
        {
            sum1++;
        }
        if(k==50)
        {
            sum2++;
            sum1--;
        }
        if(k==100)
        {
            sum1--;
            sum2--;
            if(sum2<0 && sum1>=2)
            {
                sum1-=2;
                sum2++;
            }
        }
        if(sum1<0 || sum2<0){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;





    return 0;
}


