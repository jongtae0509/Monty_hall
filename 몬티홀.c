// 몬티홀 문제

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int n,car,choice,open,i;
    int changed_win=0,changed_lose=0,win=0,lose=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        car = rand()%3; //랜덤으로 차 배치
        choice = rand()%3;  //플레이어의 선택

        //열어줄 문 고르기
        open = car;
        while(open==car||open==choice) open = rand()%3;   //내가 고른 문을 열거나 자동차가 뒤에 있는 문을 열면 안됨

        // 고른거 바꾸기
        if(choice==0){
            if(open==1) choice = 2;
            else choice = 1;
        }
        else if(choice==1){
            if(open==0) choice = 2;
            else choice = 0;
        }
        else {
            if (open == 1) choice = 0;
            else choice = 1;
        }

        // 승패 기록 
        if(car==choice){
            changed_win++;
            lose++;
        }
        else{
            win++;
            changed_lose++;
        }
    }
    printf("%d번 중 \n선택을 바꾼 결과 : %d승 %d패 승률 %lf%%\n",n,changed_win,changed_lose,(double)changed_win/n*100);
    printf("선택을 바꾸지 않은 결과 : %d승 %d패 승률 %lf%%",win,lose,(double)win/n*100);
}
