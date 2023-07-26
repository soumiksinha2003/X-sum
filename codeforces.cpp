#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n,m ; cin>> n>> m;
    int a[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    vector<ll> v;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        ll sum=a[i][j];
        int end=max(n,m);
        int inc=1;
        while(inc<=end){
          if(i+inc<=n-1 && j+inc<=m-1){sum+=a[i+inc][j+inc];}
          if(i+inc<=n-1 && j-inc>=0){sum+=a[i+inc][j-inc];}
          if(i-inc>=0 && j+inc<=m-1){sum+=a[i-inc][j+inc];}
          if(i-inc>=0 && j-inc>=0){sum+=a[i-inc][j-inc];}
          v.push_back(sum);
          inc++;
        }
      }
    }
    cout<<*max_element(v.begin(),v.end());
    cout<<'\n';
  }
	return 0;
}




