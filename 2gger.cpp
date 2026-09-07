#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> nigger_set = {"苦","丹"};
vector<string> nigger_1stchar = {"に","ニ","ﾆ","二","仁","児","爾","似","煮","丹","荷","尼","ni"};
vector<string> nigger_2ndchar = {"我","画","賀","雅","牙","瓦","駕","蛾","餓","が","ガ","ｶﾞ"};

int main(){
    string s;
    getline(cin,s);

    for(int i=0;i<nigger_set.size();i++){
        auto res = s.find(nigger_set[i]);
        if(res != string::npos){
            cout<<"nigger detected!!!: "<<nigger_set[i]<<endl;
            return 0;
        }
    }

    for(int i=0;i<nigger_1stchar.size();i++){
        auto res = s.find(nigger_1stchar[i]);
        if(res != string::npos){
            for(int j=0;j<nigger_2ndchar.size();j++){
                auto ress = s.find(nigger_1stchar[i]);
                if(ress != string::npos){
                    cout<<"nigger detected!!!: "<<nigger_1stchar[i]<<nigger_2ndchar[j]<<endl;
                    break;
                }               
            }
        }
    }

    return 0;
}
