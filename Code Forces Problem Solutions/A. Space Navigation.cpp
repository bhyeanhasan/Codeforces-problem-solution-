/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
/*===========================================================================================**/
/*============================================
    move line           Alt+up/Alt+down
    Duplicate line      Ctrl + D
    Swap line above 	Ctrl + T
    Line cut.	        Ctrl + L
    Line copy.      	Alt + c
    Line delete.	    Ctrl + Shift + L
/*=============================================*/
    #include<bits/stdc++.h>
    #define pi acos(-1)
    #define jor_even(i) (!(i & 1))
    #define bijor_odd(i) (i & 1)
    #define gcd(a, b) __gcd(a,b)
    #define lcm(a, b) (((a)/gcd(a,b))*b)
    #define binaryToDecimal(str) stoi(str,nullptr,2)
    #define octalToDecimal(str) stoi(str,nullptr,8)
    #define hexaToDecimal(str) stoi(str,nullptr,16)
    #define fil(arr,value) memset(arr,value,arr.size())
    #define vfill(v,value)  v.assign(v.size(),value)
    #define pb(x) push_back(x)
    #define ll long long int
    #define vc vector<ll>
    #define show(arr) for( auto &it : arr ) cout<<it<<" "
    #define input(arr) for( auto &it : arr ) cin>>it
    #define fr(i,n) for(ll i=0;i<n;i++)
    #define srt(a) sort(a.begin(),a.end())
    #define print(x) cout<<x<<endl
    #define in(a) scanf("%lld",&a)
    #define yes cout<<"YES"<<endl
    #define no cout<<"NO"<<endl
    #define FILE_io freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #define tc ll test; cin>>test; for(ll T=1;T<=test;T++)
    #define START ll n,a,b,c,x,y,z,i,j,k,sum=0,t=0,count=0,flag=0,place=-1; string s,s1,s2,s3; bool is = false; double Sum=0;
    #define READY ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);

using namespace std;
    string sss;
    long long arr[100009];

int main()
{
    READY;
    START;
    tc
{
/*===========================================================================================*/

    cin>>a>>b;
    cin>>s;

    ll l=0,r=0,u=0,d=0;

    for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='L')l++;
            else if(s[i]=='R')r++;
            else if(s[i]=='U')u++;
            else if(s[i]=='D')d++;
        }
        if(a>=0 && b>=0)
        {
            if(r>=a && u>=b)yes;
            else no;
        }
        else if(a<=0 && b>=0)
        {
            if(l>=abs(a) && u>=b)yes;
            else no;
        }
        else if(a<=0 && b<=0)
        {
            if(l>=abs(a) && d>=abs(b))yes;
            else no;
        }
        else if(a>=0 && b<=0)
        {
            if(r>=abs(a) && d>=abs(b))yes;
            else no;
        }

/*===========================================================================================*/
} return 0; }


