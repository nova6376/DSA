#include<iostream>
using namespace std;
void reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s++],v[e--])
    }
    return v;
}

void findArray(vector<int>& a,int n, vector<int>& b,int m){
    int i = n-1;
    int j = m-1;
    vertor<int> ans;
    int carry = 0;

    while(i>0 && j>0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = a[i] + b[j] + carry;
        sum = sum % 10;
        carry = sum/10;
        ans.pushback(sum);
        i--;
        j--;
    }
    while(i>0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum sum % 10;
        ans.pushback(sum);
        i--;
    }
    while(j>0){
        int sum = a[j] + carry;
        carry = sum / 10;
        sum sum % 10;
        ans.pushback(sum);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum % 10;
    }
    

}