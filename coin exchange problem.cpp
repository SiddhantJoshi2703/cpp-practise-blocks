#include <iostream>
using namespace std;

int coinchangeproblem(int a[],int sum){
    int dp[6][sum+1];
    for(int i=0;i<6;i++){
        for(int j=0;j<=sum;j++){
            if(j==0) dp[i][j]=1;
            else if(i==0) dp[i][j]=0;
            else dp[i][j]=0;
        }
    }
    for(int i=1;i<6;i++){
        for(int j=1;j<=sum;j++){
            if(a[i-1]<=j)
                dp[i][j]= dp[i][j-a[i-1]]+ dp[i-1][j];
            else 
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[5][sum];
}


int main(){
    int a[5]={1,2,3,4,5};
    int sum;cin>>sum;
    cout<<coinchangeproblem(a,sum);
    return 0;
}
