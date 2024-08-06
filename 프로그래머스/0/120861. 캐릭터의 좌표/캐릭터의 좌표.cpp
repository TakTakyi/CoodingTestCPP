#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0, y = 0; // 좌표 계산을 위한 정수형 변수
    //board에 경우 0,0을 기준으로 +와 -가 있기에 반으로 나눈다
    int b_x = board[0]/2, b_y = board[1]/2; // board의 크기를 저장한 변수 
    
    //매개변수로 들어온 벡터의 사이즈만큼 반복
    for (int ii = 0; ii < keyinput.size(); ii++)
    {
        //문자열을 통해 이동할 좌표와 board의 사이즈를 벗어나는지 체크하여 좌표값을 이동한다
        if(keyinput[ii] == "left" && x > -b_x)
        {
            x -= 1;
        }
        else if(keyinput[ii] == "right" && x < b_x)
        {
            x += 1;
        }
        else if(keyinput[ii] == "up" && y < b_y)
        {
            y += 1;
        }
        else if(keyinput[ii] == "down" && y > -b_y)
        {
            y -= 1;
        }
    }
    
    //cout << x << y <<endl;
    //반복이 완료되면 x좌표부터 answer에 좌표값을 push_back 한다
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}