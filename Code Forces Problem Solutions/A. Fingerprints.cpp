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


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,x=1,d=1,n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>a>>b;
    ll arr[a],brr[b];

    for(i=0;i<a;i++)
        cin>>arr[i];
    for(i=0;i<b;i++)
        cin>>brr[i];

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(arr[i]==brr[j])
            {
                cout<<arr[i]<<" ";

            }
        }
    }


    return 0;
}

