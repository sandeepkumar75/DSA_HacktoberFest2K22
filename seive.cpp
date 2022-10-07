#include <bits/stdc++.h>
typedef long long ll;
#define max 1000000
using namespace std;

vector<ll>isp(max,1);
void seive(){
    isp[0]=isp[1]=0;
    for(ll  i=2;i<=max;i++){
        if(isp[i]==1)
        {
            isp[i]=i;
            //primes.push_back(i);
            for(ll j=i *i ;j<=max;j+=i)
            {
                isp[j]=0;
            }
        }
    }
}

