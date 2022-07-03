// code works perfectly in online compiler but not here....
// shows error in line 26 for passing a variable as the size of an array
//...................................using bs function for binary search.................................//
// #include<iostream>
// using namespace std;

// int bs(int arr[],int n,int b){
//      int l=0,h=n-1,mid;
//      while(l<=h){
//          mid=(l+h)/2;
//          if(arr[mid]==b) return mid+1;
//          else if(l==h) l++;
//          else if(arr[mid]>b) h=mid-1;
//          else l=mid+1;
//      }
//      return -1;
// }
// int main(){
//     int n,b;
//     cin>>n>>b;
//     int a[n];
//     for(int i=0;i<n;i++) cin>>a[i];
//     cout<<bs(a,n,b);
//     return 0;
// }
//.................................................end....................................................//
//.....................................below code works fine with vector..................................//
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,b,d=0;
    cin>>n>>b;
    vector<int> a;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        a.push_back(c);
    }
    int l=0,h=n-1,mid;
     while(l<=h){
         mid=(l+h)/2;
         if(a[mid]==b){
          cout<<mid+1; 
          d=1;
          break;
          }
         else if(l==h) l++;
         else if(a[mid]>b) h=mid-1;
         else l=mid+1;
     }
     if(d==0) cout<<-1;

    return 0;
}
