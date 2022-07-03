
// ------------------simple recursive solution to the fibonacci problem-------------------

// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     if(n==1) return 0;
//     else if(n==2) return 1;
//     else{
//         int b= fibonacci((n-1)); int c= fibonacci((n-2));
//         return b+c;
//     }
// }

// int main(){
//     int n;cin>>n;
//     cout<< fibonacci(n);
//     return 0;
// }


// -----------------------------solution using dp----------------------------


// #include <iostream>
// using namespace std;

// int fibo(int dp[], int n){
//     for(int i=2;i<n;i++) dp[i]=dp[i-1]+dp[i-2];
//     return dp[n-1];
// }

// int main()
// {
//     int n;cin>>n;
//     int dp[n];
//     dp[0]=0;dp[1]=1;
//     cout<<fibo(dp,n);
//     return 0;
// }