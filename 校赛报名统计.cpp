#include <iostream>
#include <set>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout("test.out");
    ifstream fin1("/Users/a123/Desktop/填表.txt");
    ifstream fin2("/Users/a123/Desktop/报名.txt");
    string s, sq, sph;
    int cnt1 = 0, cnt2 = 0, cnt12 = 0;
    map<string, string> mq, mph;
    set<string> se1, se2;
    while (fin1 >> s) {
        fin1 >> sq >> sph;
        mq[s] = sq;
        mph[s] = sph;
        se1.insert(s);
    }
    while (fin2 >> s) {
        se2.insert(s);
    }
    
    for(auto i: se1){
        if(se2.count(i) == 0){
            cnt1++;
            printf("填表未报名 %s  qq: %s  电话%s\n",i.c_str(),mq[i].c_str(),mph[i].c_str());
        }
    }
    
    cout << "------------------------------------------------------------\n";
    for(auto i: se2){
        if(se1.count(i) == 0){
            cnt2++;
            printf("报名了未填表 %s\n",i.c_str());
        }
    }
    
    printf("填表人员 %d\n已报名%d\n", se1.size(), se2.size());
    printf("填表人员未报名 %d\n", cnt1, se2.size());
    
    return 0;
}
