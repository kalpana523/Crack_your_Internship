#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(int x,int y)
{
  return x>y;
 }
  
ll minCosttoBreakGrid(int n,int m,vector<ll>& vertical,vector<ll>& horizontal)
{
 
 sort(vertical.begin(),vertical.end(),cmp);
 sort(horizontal.begin(),horizontal.end(),cmp);
 
 int hz=1,vr=1,h=0,v=0;
 ll ans=0;
 while(h<horizontal.size() && v<vertical.size())
 {
  if(vertical[v]>horizontal[h])
  {
   ans+=vertical[v]*vr;
   hz++;
   v++;
  }
  else
  {
   ans+=horizontal[h]*hz;
   vr++;
   h++;
   }
   }
   while(h<horizontal.size() && v<vertical.size())
   {
   if(vertical[v]>horizontal[h])
   {
   ans+=vertical[v]*vr;
   hz++;
   v++;
   }
   else
   {
   ans+=horizontal[h]*hz;
   vr++;
   h++;
   }
   }
   while(h<horizontal.size())
   {
   ans+=horizontal[h]*hz;
   vr++;
   h++;
   }
   while(v<vertical.size())
   {
   ans+=vertical[v]*vr;
   hz++;
   v++;
   }
   return ans;
   }
 
int main() {
	// your code goes here
	int n;
	int m;
	vector<ll> vertical;
	vector<ll> horizontal;
	cin>>n>>m;
	for(ll i=0;i<vertical.size();i++)
	{
		ll j;
		cin>>j;
		vertical.push_back(j);
	}
	for(ll i=0;i<horizontal.size();i++)
	{
		ll j;
		cin>>j;
		horizontal.push_back(j);
	}
	ll minCosttoBreakGrid( n, m, vertical,horizontal)
	return 0;
}
