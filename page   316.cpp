#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout("page316.txt");
    if(!fout){
        cout<<"Cannot open output file."<<endl;
        return 1;
    }
    fout<<"Hello !"<<endl;
    fout<<100 <<" "<<hex<< 100<<endl;
    fout.close();

    ifstream fin("page316.txt");
    if(!fin){
        cout<<"Cannot open input file."<<endl;
        return 1;
    }
    char str{80};
    int i;

    fin >> str >> i;
    cout<<str <<" "<< i <<endl;

    fin.close();



return 0;}
