#include<bits/stdc++.h>

using namespace std;
int main() {


    // v[i] == v.at();
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_front (30);
   // list<int>::iterator it = l.begin();
    for(list<int>::iterator it = l.begin();it!= l.end(); it++){
       //for(;it!=l.end();it++){
            cout<<*it<<" ";
    }
    cout<<endl;
    l.push_front (120);
    l.pop_back();
    l.pop_front();

    for( list<int>::iterator it = l.begin(); it!= l.end(); it++) {
        // for(;it!=l.end();it++){
                cout<<*it<<" ";
    }
    // reverse(v.begin(),v.end());
    // sort (v.begin(),v.end(), greater<int>();
    //1.reverse();
   // 1. sort();
    // cout<<1.empty()
    return 0;
}
