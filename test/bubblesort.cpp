#include<iostream>
using namespace std;
void bubble(int *a,int n,int i){
    if(i==n)
        return;
for(int j=0;j<n-1-i;j++)
{
    if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
}
return bubble(a,n,i+1);


}
int main(){
int n;cin>>n;int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
bubble(a,n,0);
cout<<"after sorting"<<endl;
for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}
