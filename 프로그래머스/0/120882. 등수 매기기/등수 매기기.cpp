#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> m_AVG;
    
    //성적을 합산한다
    //성적총값을 m_AVG에 삽입
    for (int ii = 0; ii < score.size(); ii++)
    {
        int avg = (score[ii][0] + score[ii][1]);
        m_AVG.push_back(avg);
    }
    
    //평균값을 벡터 사이즈 만큼 반복하면서 비교
    //m_AVG[ii] 값보다 큰값이 있을경우 rank를 증가시킨다
    //안쪽 반복문이 끝나면 rank값을 결과값에 삽입한다
    for (int ii = 0; ii < m_AVG.size(); ii++)
    {
        int rank = 1;
        for (int jj = 0; jj < m_AVG.size(); jj++)
        {
            if (m_AVG[ii] < m_AVG[jj])
            {
                rank++;
            }
        }
        
        answer.push_back(rank);
    }
    
    return answer;
}