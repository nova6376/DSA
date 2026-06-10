#include<iostream>
#include<vector>
using namespace std;
int Compress(vector<char>& chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    
    while (i<n)
    {
        int j = i+1;
        while (j<n && chars[i] == chars[j])
        {
            j++;
        }

        // oldChar ko store karo 
        chars[ansIndex++] = chars[i];
        int count = j-i;

        if(count > 1){
            string cnt = to_string(count);
            for(char ch : cnt){
                chars[ansIndex++] = ch;
            }
        }
        i = j;   
    }
    return ansIndex; 
}

int main(){
    vector<char> v = {'a','a','a','a','b','b','c','d','d'};
    
    char newLength = Compress(v);

    // Print the compressed version
    cout << "Compressed Output: ";
    for (int i = 0; i < newLength; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "New Length: " << newLength << endl;
    return 0;

}


 

// #include <iostream>
// #include <vector>
// using namespace std;

// int Compress(vector<char>& chars) {
//     int i = 0;
//     int ansIndex = 0;
//     int n = chars.size();

//     while (i < n) {
//         int j = i + 1;
        
//         // Count occurrences of the current character
//         while (j < n && chars[i] == chars[j]) {
//             j++;
//         }

//         // Store the character
//         chars[ansIndex++] = chars[i];

//         int count = j - i;
        
//         // If count > 1, convert it to a string and store the digits
//         if (count > 1) {
//             string cnt = to_string(count);
//             for (char ch : cnt) {
//                 chars[ansIndex++] = ch;
//             }
//         }

//         i = j;  // Move to the next new character
//     }

//     return ansIndex;  // Return the new length of the array
// }

// int main() {
//     vector<char> v = {'a', 'a', 'a', 'a', 'b', 'b', 'c', 'd', 'd'};

//     int newLength = Compress(v);

//     // Print the compressed version
//     cout << "Compressed Output: ";
//     for (int i = 0; i < newLength; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     cout << "New Length: " << newLength << endl;
    
//     return 0;
// }
