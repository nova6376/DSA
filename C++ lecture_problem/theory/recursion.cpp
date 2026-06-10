#include<iostream>
using namespace std;

int factorial(int n){
    /// base case 
    if(n == 0 || n == 1){
        int fact = 1 ;
        return fact;
    }

    // recrusive relation
    int fact = (n)*factorial(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << endl;
    int ans = factorial(n);
    cout << ans << endl;
    
    return 0;
}