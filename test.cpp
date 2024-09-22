#include<iostream>
using namespace std;
double sum(doublt a,double d,int n){
    return (2*a+(n-1)*d)*n/2;
}
int main(){
   double a,d;
   int n;
   double res[101];
   cin>>a>>d;
   cin>>n;
   double Sum=sum(a,d,n);
   for(int i=1;i<=n;i++){
   	res[i]=a;
   	a+=d;
   	cout<<res[i]<<endl;
   }
   cout<<Sum<<endl;
   return 0;
}