#include<stdio.h>
#define ll long long int
ll pw(ll a, ll b,ll M){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}
int main()
{
ll n;
scanf("%lld %lld %lld",&a,&n,&m);
printf("%lld\n",pw(a,n,m));
return 0;
}
