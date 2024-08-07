#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    
    //db 사이즈 만큰 반복한다
    for (int ii = 0; ii < db.size(); ii++)
    {
        //db에서 아이디와 패스워드를 비교하여 
        //아이디와 패스워드 둘다 일치하면 login을 반환한다
        //아이디만 일치하면 wrong pw을 반환한다
        //일치하는게 없다면 fail을 반환한다
        if(db[ii][0] == id_pw[0] && db[ii][1] == id_pw[1])
        {
            answer = "login";
        }
        else if(db[ii][0] == id_pw[0] && db[ii][1] != id_pw[1])
        {
            answer = "wrong pw";
        }
        else if(db[ii][0] != id_pw[0] && db[ii][1] != id_pw[1])
        {
            answer = "fail";
        }
    }
    
    return answer;
}