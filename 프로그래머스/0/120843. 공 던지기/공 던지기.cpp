#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

//자료구조 중 하나인 큐를 사용
queue<int> m_queue;

int solution(vector<int> numbers, int k) {
    int answer = 0; //결과값 변수
    int count = 0;  //공을 던질때 횟수를 세기위한 변수, k번까지 세는 변수
    
    for (int ii = 0; ii < numbers.size(); ii++)
    {
        m_queue.push(numbers[ii]); //큐 연산을 하기위해 매개변수로 들어온 numbers를 추가한다
    }
    
    //무한반복문
    while(1)
    {
        answer = m_queue.front(); //반복 할때마다 던진사람을 넣어준다
        count++;
        
        //큐의 특성상 자료를 추가해도 뒤에 추가되고 삭제는 맨앞에서 일어난다
        //이 특성을 이용해 공을 던진 사람이 맨 앞에서 부터 던진다
        //던진사람을 큐를 이용해 맨 뒤에 추가후 맨앞에서 삭제한다
        //이 계산을 두번 반복하면 문제에 제시된 한명을 건너뛴는 문제가 해결된다
        m_queue.push(m_queue.front()); 
        m_queue.pop();
        
        m_queue.push(m_queue.front()); 
        m_queue.pop();
        
        //k는 공을 던진 횟수를 의미
        //count가 k와 값이 같아지면 반복을 종료하고
        //answer를 반환한다
        if (count == k)
            break;
    }
    
    return answer;
}