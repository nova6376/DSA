#include <iostream>
using namespace std;

void reverseArray(ans){
 s = 0;
 e = ans.size()-1;
    while (s<e){
        swap(ans[i],ans[e])
    }
}


vector<int> ans;

int n-1;
int m-1;
int carry = 0;
while(i>0 && j>0){
    int val1 = a[i];
    int val2 = b[j];
    int sum = val1 + val2 + carry;
     
     carry = sum/10;
     sum = sum%10;
     ans.push_back(sum)
     i--;
     j--;

}
  /// first case 
  while(i>=0){
     int val1 = a[i];
     int sum = val1 + carry;
     carry = sum/10;
     sum = sum%10;
     ans.push_back(sum)
     i--;

  }
    /// second case 
  while(i>=0){
     int val1 = b[j];
     int sum = val2 + carry;
     carry = sum/10;
     sum = sum%10;
     ans.push_back(sum)
     j--;
  }