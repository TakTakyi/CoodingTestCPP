#include <string>
#include <vector>

using namespace std;

//10으로 계속해서 나누고 나머지값을 버리는게 
//아니라 나머지값을 계속해서 계산에 
//결과값에 영향이 없게 하는게 중요점
//간단한 문제 이지만 생각할게 많은 문제

int solution(int chicken) {
    int answer = 0;
    int n = 0; //나머지 값 저장용
    
    //10으로 나누어 더이상 나누지 못할때 까지 반복하기 위해 무한 반복문을 사용
    while(1)
    {
        if (chicken < 10)
        {
            break; //매개변수로 들어온 치킨 수가 10으로 나누어 지지 않기에 반복을 종료
        }
        
        n = chicken % 10; //나눈 나머지 값을 저장하기 위한 계산
        chicken = chicken / 10; //치킨쿠폰이 10장 마다 1마리 이기에 10으로 나눈 몪을 저장
        
        answer = answer + chicken; // 결과값인 서비스 치킨의 수를 더하여 저장
        
        chicken = chicken + n; //10으로 나눈 나머지와 남은 치킨을 더해서 저장한다
    }
    
    return answer;
}