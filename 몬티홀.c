// ��ƼȦ ����

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int n,car,choice,open,i;
    int changed_win=0,changed_lose=0,win=0,lose=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        car = rand()%3; //�������� �� ��ġ
        choice = rand()%3;  //�÷��̾��� ����

        //������ �� ����
        open = car;
        while(open==car||open==choice) open = rand()%3;   //���� �� ���� ���ų� �ڵ����� �ڿ� �ִ� ���� ���� �ȵ�

        // ���� �ٲٱ�
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

        // ���� ��� 
        if(car==choice){
            changed_win++;
            lose++;
        }
        else{
            win++;
            changed_lose++;
        }
    }
    printf("%d�� �� \n������ �ٲ� ��� : %d�� %d�� �·� %lf%%\n",n,changed_win,changed_lose,(double)changed_win/n*100);
    printf("������ �ٲ��� ���� ��� : %d�� %d�� �·� %lf%%",win,lose,(double)win/n*100);
}
