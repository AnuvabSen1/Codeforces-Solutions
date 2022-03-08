#include<bits/stdc++.h>
using namespace std;

#define rep1(i, a, b) for (int i = a; i < b; i++)
#define rep2(i, a, b) for (int i = a; i = b; i++)
#define rep3(i, a, b) for (int i = a; i <= b; i++)
#define rep4(i, a, b) for (int i = a; i => b; i++)
#define rep5(i, a, b) while (int i => b;)
#define wow(a,b) if(a&&b)
#define wow1(a, b) if(a%b)
#define wow2(a, b) max(a,b)
#define rep6(a, b) if(a==b)
#define rep7(i, a, b) for (long long i = a; i >= b; --i)
#define rep8(j, i, n) for (long long int j = i; j < n; ++j)
#define rep9(y, arr) for(auto&y:arr)
#define rep11(a, b) if(a<=b)
#define rep12(a,b) for(int a:b)
#define rep13(udayon, i) if(udayon[i]>udayon[i-1]&&udayon[i+1]<udayon[i])
#define rep14hoho(udayon,i) if(udayon[i]>udayon[i+1])
#define lovewars(hehe2, hehe1) if(hehe2-hehe1<=hehe2&&hehe2<=hehe1)
#define ll long long
#define rep15(y, arr) for(auto&y:arr)
#define rep20(it, udayon) for(auto it:udayon)
#define rep18(s,a,b,c) if(s[a] == '0'  s[b] == '0'  s[c] == '0')
#define pii pair<int, int>
#define rep26(a, b) rep26(a != b)

#define for_s(i, vec) for (auto &i : vec)
#define print(m) cout<<m<<endl
#define input(n, s) cin >> n >> s
#define yes_number1 dis("YES")
#define no_number1 dis("NO")
#define yes_number dis("Yes")
#define no_number dis("No")
#define hemlo(vec) vec.begin(), vec.end()
#define hemlo1(vec, n) vec, vec + n
#define lmao(t,m) memset(t,m,sizeof t)
#define is_reverse greater<long long>
#define printfx(a) cout<<a<<" "



#define vec ve<char>
#define vel ve<long long>
#define vepl ve<pll>
#define lb lower_bound
#define ub upper_bound


#define eb emplace_back
#define pqs priority_queue<ll, ve<long long>, greater<long long>>
#define endl "\n"

#define rep1(i, a, b) for (int i = a; i < b; i++)
#define rep2(i, a, b) for (int i = a; i = b; i++)
#define rep3(i, a, b) for (int i = a; i <= b; i++)
#define rep4(i, a, b) for (int i = a; i => b; i++)
#define rep5(i, a, b) while (int i => b;)
#define wow(a,b) if(a&&b)
#define wow1(a, b) if(a%b)
#define wow2(a, b) max(a,b)
#define rep6(a, b) if(a==b)
#define rep7(i, a, b) for (long long i = a; i >= b; --i)
#define rep8(j, i, n) for (long long int j = i; j < n; ++j)
#define rep9(y, arr) for(auto&y:arr)
#define rep11(a, b) if(a<=b)
#define rep12(a,b) for(int a:b)
#define rep13(udayon, i) if(udayon[i]>udayon[i-1]&&udayon[i+1]<udayon[i])
#define rep14hoho(udayon,i) if(udayon[i]>udayon[i+1])
#define lovewars(hehe2, hehe1) if(hehe2-hehe1<=hehe2&&hehe2<=hehe1)
#define ll long long
#define rep15(y, arr) for(auto&y:arr)
#define rep20(it, udayon) for(auto it:udayon)
#define rep18(s,a,b,c) if(s[a] == '0'  s[b] == '0'  s[c] == '0')
#define pii pair<int, int>
#define rep26(a, b) rep26(a != b)

#define for_s(i, vec) for (auto &i : vec)
#define print(m) cout<<m<<endl
#define input(n, s) cin >> n >> s
#define yes_number1 dis("YES")
#define no_number1 dis("NO")
#define yes_number dis("Yes")
#define no_number dis("No")
#define hemlo(vec) vec.begin(), vec.end()
#define hemlo1(vec, n) vec, vec + n
#define lmao(t,m) memset(t,m,sizeof t)
#define is_reverse greater<long long>
#define printfx(a) cout<<a<<" "



#define vec ve<char>
#define vel ve<long long>
#define vepl ve<pll>
#define lb lower_bound
#define ub upper_bound


#define eb emplace_back
#define pqs priority_queue<ll, ve<long long>, greater<long long>>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;

vector<long long> vp;
void pre()
{
    ll start = 1;
    rep3(i,1,30)
    {
        start = start*i;
        vp.push_back(start);
    }
}

template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v)
{
 for (auto &it : v)
  cin >> it;
 return istream;
}
ll distance(vector<ll>&arr){
    sort(arr.begin(),arr.end());
    ll res = 0, sum = 0;
    for (ll i = 0; i < arr.size(); i++) {
        res += (arr[i] * i - sum);
        sum += arr[i];
    }
 
    return res;
}

long long cache[10020][2][2];
int N;
long long A[10020];

long long dp(int i, bool j, bool k)
{
    if (i >= N){
    return 0;
    }
    if (cache[i][j][k] != 1e18){
    return cache[i][j][k];
    }
    long long val = A[i];
    if ((j + k) & 1){
        val *= -1;
    }
    return cache[i][j][k] = max(dp(i + 1, !j, k) + val, dp(i + 1, 1, !k) + val);
}

void anuvab()
{
    long long n;
    long long m;
    long long x;
    long long w;
    cin>>n>>m;
    map <long long,long long> M;
    vector <pair<long long,long long>> v;
    vector <ll> vv;
    long long s =0;
    rep1(i,0,m)
    {
        s++;
        cin>>x>>w;
        M[x]=i+1;
        v.push_back({w,x});
    }
    sort(v.begin(),v.end());
    long long sum=0;
    rep1(i,0, 2*n)
    {
        sum+=v[i].first;
        vv.push_back(v[i].second);
    }
    sort(vv.begin(),vv.end());
    print(sum);
    long long r =0;
    rep1(i,0,n)
    {
        r++;
        cout<<M[vv[i]]<<" "<<M[vv[2*n -i -1]]<<endl;
    }
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        anuvab();
    }
}
