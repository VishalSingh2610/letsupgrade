#include<bits/stdc++.h>
using namespace std;

string reverseString(string& str){
    int left=0;
    int right=str.size()-1;
    while(left<right){
        char temp = str[left];
        str[left++]=str[right];
        str[right--]=temp;
    }
    return str;
};

int main(){
    
    string str;
    cout<<"Enter any String: "<<endl;
    getline(cin,str);

    cout<<"The String Before Reversing: "<<str<<endl;
    cout<<"The String After Reversing: "<<reverseString(str)<<endl;
    return 0;
}