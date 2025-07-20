#include<iostream>
#include<string>
using namespace std;

int strStr(string haystack, string needle){
    int p1 = 0;
    int p2 = 0;
    for (p1=0;p1<haystack.size();p1++){
        if (haystack[p1]==needle[p2]){
            p2++;
            if (p2==needle.size()){
                return p1-needle.size()+1;
            }
        }
        else{
            p2 = 0;
        }
    }
    return -1;
}

int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    int result = strStr(haystack,needle);
    cout<<result<<endl;
    return 0;
}