
#include <bits/stdc++.h>

using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
    auto it=a.begin();
    int count=0;
    vector<int> b=a;
    for(it;it!=a.end();it++){
        if(count<d){
        b.push_back(*it);
        b.erase(b.begin());
        count++;
        }
    }
    return b;

}