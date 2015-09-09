#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define gc getchar
#define ll long long int
inline ll input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  ll ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    ll t,i;
    t=input();
    return 0;
}
