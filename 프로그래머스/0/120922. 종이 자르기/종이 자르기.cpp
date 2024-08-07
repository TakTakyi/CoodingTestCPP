#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    
    //최소 가위질 횟수는 M-1이다
    //M-1이 가로 횟수라고 할때 
    //세로 횟수는 N-1 * M 이다
    //두횟수를 더하면 결과값이 나온다
    //(M-1) + ((N-1) * M)
    //M * N - 1
    answer = M * N - 1;
    
    return answer;
}