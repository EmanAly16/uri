#include<iostream>
using namespace std;
int main ()
{
   int i, j;
   int n,m;
   cin>>m;
  while(m--){
        cin>>n;
       int a[n];
       for(i = 0; i<n; i++) {
       cin>>a[i];
    }
    int c=0;
    for(i = 0; i<n; i++) {
       for(j = i+1; j<n; j++)
       {
          if(a[j] < a[i]) {
            swap(a[i],a[j]);
             c++;
          }
       }
    }
       cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
  }
return 0;
}
