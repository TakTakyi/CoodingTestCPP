#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0; //결과값 변수
    
    for (int ii = 0; ii < array.size(); ii++) //array의 크기 만큼 반복
    {
        if (array[ii] == n) //array배열 요소중 매개변수 n과 같으면 true
        {
            answer++; //결과값에 1을 더한다
        }
    }
    return answer; //결과값을 리턴한다
}
