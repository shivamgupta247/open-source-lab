#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
double avg=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    avg+=(arr[i]/(1.0*n));
}
cout<<avg;


return 0;
}
