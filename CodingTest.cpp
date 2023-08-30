#include "bits/stdc++.h"
#include <iostream>
using namespace std;

long long get(string n){
    long long odd = 0, even = 0;
    for(int i =0;i<n.size();i++){
        if(i%2==1){
            even += (n[i]-'0');
            // cout<<n[i]<<" ";
        }
        else{
            odd += (n[i]-'0');
        }
    }
//     cout<<odd<<" "<<even<<" sum:"<<odd*even<<endl;
    return odd * even;
}

vector<string> arr;
void generate(int l,string cur){
    if(cur.size()>=l) return;
    for(int i=0;i<10;i++){
        cur += to_string(i-0);
        if(cur.size()==l)arr.emplace_back(cur);
        generate(l,cur);
        cur = cur.substr(0,cur.size()-1);
    }
    return;
}

int main() {
    string a = "dasdad";
    sort(a.begin(),a.end());
    cout<< a;


    return 0;
}
// 64 位输出请用 printf("%lld")




