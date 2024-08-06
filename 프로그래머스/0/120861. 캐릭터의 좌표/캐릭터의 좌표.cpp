#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0, y = 0;
    int b_x = board[0]/2, b_y = board[1]/2;
    
    for (int ii = 0; ii < keyinput.size(); ii++)
    {
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
    
    cout << x << y <<endl;
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}