#include<iostream>
using namespace std;
void reverse(string& s,int i,int j){
    // base case 
    if(i>j){
        return ;
    }

    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);

}
int main(){
    string str = "abcde";
    reverse(str,0,str.length()-1);
    cout << str << endl;
    
    return 0;
}