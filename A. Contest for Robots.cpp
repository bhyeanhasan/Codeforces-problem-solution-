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
#define fr(n) for(ll i=0;i<n;i++)
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t=0,count=0,sum=0,result=0,i,j=0,k=0;
    bool is;
    string s;

    cin>>n;

    ll arr[n],brr[n];
    fr(n)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    fr(n)
    {
        cin>>brr[i];
        count+=brr[i];
    }

    if(n==1 && arr[0]==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    fr(n)
    {
        if(arr[i]==1 && arr[i] != brr[i])
        {
            result++;
        }
        else if(arr[i]==brr[i])
        {
            k++;
            if(arr[i]==1)
                t++;

        }
        if(arr[i]==0)
        {
            j++;
        }
    }

    if(k==n || j==n || t==sum)
        cout<<-1<<endl;
    else{

    sum = count - sum;
    if(result != 0)
    sum= (sum+result)/result;
    else
        sum= (sum+result);
    sum++;
    cout<<sum<<endl;



    }


    return 0;
}


