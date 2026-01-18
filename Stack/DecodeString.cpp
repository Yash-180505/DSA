#include<bits/stdc++.h>
using namespace std;

string decodeString(string s) {
    stack<int> countStack;
    stack<string> stringStack;
    string curr = "";
    int k = 0;

    for(char c : s){
        if(isdigit(c)){
            k = k*10 + (c - '0');
        }
        else if(c == '['){
            countStack.push(k);
            stringStack.push(curr);
            k = 0;
            curr = "";
        }
        else if(c == ']'){
            int times = countStack.top(); 
            countStack.pop();
            string temp = stringStack.top(); 
            stringStack.pop();

            while(times--){
                temp += curr;
            }
            curr = temp;
        }
        else{
            curr += c;
        }
    }
    return curr;
}

int main(){
    string s = "3[a2[c]]";
    cout << decodeString(s);
    return 0;
}
