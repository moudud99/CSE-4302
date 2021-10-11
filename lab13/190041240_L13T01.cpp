#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ara[10],i,n,j=0;
    set<int> st;
    vector<int>vec(10);
    for(i=1;i<=10;i+=2)ara[j++]=i;
    for(i=2;i<=10;i+=2)st.insert(i);
    merge(ara,ara+5,st.begin(),st.end(),vec.begin());
    for(i=0;i<vec.size();i++)cout<<vec[i]<<" ";cout<<endl;
}
