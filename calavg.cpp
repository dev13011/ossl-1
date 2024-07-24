#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>a(n);
double avg=0.0;
for(int i=0;i<n;i++)
{
  cin>>a[i];
  avg+=a[i];
}
cout<<avg/n<<endl;
}
