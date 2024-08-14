#include <iostream>
#include <vector>
#include <utility>
#include <fstream>	

using namespace std;

template<class T>
void add(vector<T> &v,const initializer_list<T>& list){
    for(auto i : list) v.push_back(i); 
}

const string read(const string& file_name){
    // ifstream file{file_name};
    ifstream file;
    file.open(file_name);
    if(!file) return "None";
    string str;
    getline(file,str);
    if(file.good()){cout<<"GOOD"<<endl;}
    if(file.bad()){cout<<"BAD"<<endl;}
    if(file.fail()){cout<<"FAIL"<<endl;}
    
    cout<<str<<endl;
    file.close();
    return str;
}
void write(const string& file_name){
    ofstream file; // только запись
    file.open(file_name,ios_base::binary);
    file<<"Hallo World!"<<endl;             // символьная запись
    // file.write((char*) &a, sizeof(int)); // бинарная запись
    file.close();
}

int main(int argc, char** argv){
    // vector<int> vc;
    // vc.reserve(10);
    // add(vc, { 1, 2, 3, 4, 5});
    // for(auto i : vc){
    //     cout<< i << ", ";
    // }
    // cout<<endl;
    // pair<int,int> pr{1,2};
    // cout<<pr.first<<endl;
    // cout<<pr.second<<endl;

    
    write("test.txt");
    string str = read("test.txt");

    return 0;
} 