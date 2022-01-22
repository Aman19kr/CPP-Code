/* Program to check whether a string is palindrome or not.
   This is a efficient solution.
   It takes O(n) time and O(1) auxiliary space. 
*/

#include <iostream>
using namespace std;

/* Function to check whether a string is palindrome or not.
   This function will boolean value,
   true for palindrome and false for not.
*/
bool isPalindrome(string &str){
    int start = 0;
    int end = str.length() - 1;
    while (start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string str = "ABBCDCBBA";
    if(isPalindrome(str)){
        cout<<"This is Palindrome"<<endl;
    }
    else{
        cout<<"This is not Palindrome"<<endl;
    }
    return 0;
}
