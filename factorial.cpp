#include<iostream>
using namespace std;
int helper(int n){
    if(n==1) return 1;
    return n*helper(n-1);
}
int main(){
    cout << "Enter a number" << endl;
    int n ;
    cin>>n;
    int ans = helper(n);
    cout<< "Factorial of " << n << " is " << ans<<endl;
}