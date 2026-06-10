#include<iostream>
using namespace std;
int power(int& a, int b){
    // base case
    if(b == 1){
        return 1;
    }
    // odd
    if(b/2==0){
        a*((a^b/2)*(a^b/2));
        power(a,b/2);
    }
    else{
        // even
        (a^b/2)*(a^b/2);
        power(a,b/2);
    }
    
}

int main(){
  int a;
  int b;
  cin >> a >> b;
  power(a,b);
  cout << a ;
  return 0;
}