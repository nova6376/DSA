#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> stack;
    stack.push(20);
    stack.push(30);
    stack.push(10);
    stack.push(42);
  int sum = 0;  
 /*  if (stack.empty())
        cout << true ;
        
    else {
    cout << false << endl;
   /*  sum = sum + stack.top();
     stack.pop();
   cout << sum ;
 */   
   

while (!stack.empty() ){
 sum = sum + stack.top();
    stack.pop();}
   cout << sum ;
   return 0;
}
