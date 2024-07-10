#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    int cnt=2;  //소인수분해를 하기 위한 소수, 제일 작은 값인 2부터
    
    //이중 반복문
    //무한반복 사용 while(1)
    while(1)
    {
        bool check=false; 
        //한번이라도 나누어진적이 있는지 소수로 나누었졌는지 확인하는 변수
        
        while(1)
        {
            if(n%cnt==0) // 소인수 분해 가능
            {
                n/=cnt; //나누고 몪을 변수에 대입
                check=true; // 한번이라도 나누어졌기에 true
            }
                
            else if(n%cnt!=0 && check) //cnt로 더이상 나누어지지 않을때
            {
                answer.push_back(cnt); //결과값 입력
                break;//반복종료
            }
            
            else if(n%cnt!=0 && !check) break; //소수와 2와 3의 배수를 제외 하기위한 조건문 반복종료
        }
        
        if(n==1) break; //n이 1이 되면 소인수분해가 완료된것이기에 반복 탈출
        
        cnt++; // +1 자기자신으로만 나누어지는 수를 찾기 위해(소수)/2345순서로 나누기 위해
    }
    
    return answer;
}