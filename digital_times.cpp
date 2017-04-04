#include <iostream>
#include <vector>
#include <map>

typedef int DIGITAL;
typedef int APPEAR_TIMES;  //出现次数
using namespace std;
int main(){
    int x;
    map<DIGITAL,APPEAR_TIMES> all;
    while(cin>>x &&cin.get()==','){
       all[x]++;
    }
    map<DIGITAL,APPEAR_TIMES>::iterator iter;
    for(iter=all.begin();iter!=all.end();iter++){
        cout<<iter->first<<"("<<iter->second<<")"<<endl;
    }
    return 0;
}