/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void solve(){
    string s;
    cin>>s;
    vector<pair<char,int>>v;
    for(char ch:s){
        if(ch>='a'&&ch<='z'){
            v.push_back(make_pair(ch,0));
        }
        else{
            int pi=v.size()-1;
            int count=v[pi].second*10+(ch-'0');
            v[pi].second=count;
        }
    }
    for(auto[ch,rpt]:v){
        if(rpt==0)rpt=1;
        while(rpt--) cout<<ch;
    }
}