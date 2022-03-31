#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream out("page325",ios::out|ios::binary);
    if(!out){
        cout<<"Cannot open output file."<<endl;
        return 1;
    }
    double nums[4]={1.1,2.2,3.3,4.4};
    out.write((char *) &nums,sizeof(nums));
    out.close();

    ifstream in("page325",ios::in|ios::binary);
    if(!in){
        cout<<"Cannot open input file."<<endl;
        return 1;
    }
    in.read((char *)&nums,sizeof(nums));
    int i;
    for(i=0;i<4;i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    cout<<in.gcount()<< " characters read"<<endl;
    in.close();

return 0;}

