#include<bits/stdc++.h>

using namespace std;

template<class T>
T amax(T ara[], int sz,int n)
{
    vector<T>vec;
    for(int i=0;i<sz;i++)vec.push_back(ara[i]);
    sort(vec.begin(),vec.end());
    return vec[n-1];
}
int main()
{
    int ara1[10];
    for(int i=0;i<10;i++)ara1[i]=i+1;
    cout<<amax(ara1,10,5)<<endl;
    double ara2[10];
    ara2[0]=0.2933;
    ara2[1]=1.64346;
    ara2[2]=23.34738;
    ara2[3]=243.532465;
    ara2[4]=2.234;
    cout<<amax(ara2,5,2)<<endl;
    long long ara3[10];
    ara3[0]=3542;
    ara3[1]=653256;
    ara3[2]=545;
    ara3[3]=3346;
    ara3[4]=5356;
    cout<<amax(ara3,5,2)<<endl;
}
