#include<iostream>
using namespace std;
int main(){
    int array[] ,n, x;
    cout << "Enter the size of array :" ;
    cin >> n ; 
    for(int i=0; i<=n; i++){
        cin >> array[i];
    }
    cout << "enter the new element :";
    cin >> x;
    for(int i=n; i>0; i--){
        array[i]=array[i-1];
    }
    array[0]=x;
    n++;
}