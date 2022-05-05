#include <stdio.h>
#include <string.h>
#include "person.h"
#define MAX 100
//CRUD

//추가
int addPerson(Person p[],int count){
    int c = count;
    int temp=count;
    temp++;
    p[c].num = temp;

    printf("이름은? ");
    scanf("%s",p[c].name);

    getchar();
    printf("부서는? ");
    fgets(p[c].team,MAX,stdin);
    p[c].team[strlen(p[c].team)-1]='\0';

    printf("출근시간은? ");
    scanf("%d",&(p[c].start));

    printf("퇴근시간은? ");
    scanf("%d",&(p[c].leave));

    printf("\n=> 추가됨!\n");
    c++;

    return c;
}
//조회
void listPerson(Person p[],int count){
    printf("\n출퇴근 시간 조회\n");
    printf("================================\n");
    for(int i=0;i<count;i++){
        if(p[i].num<=-50) continue;
        printf("%d   %s   %s   %d   %d\n",p[i].num,p[i].name,p[i].team,p[i].start,p[i].leave);

}
//수정
int updatePerson(Person p[]){
    int num = 0;

    printf("\n번호는 (취소 :0)? ");
    scanf("%d",&num);

    if(num != 0){
        printf("새 이름은? ");
        scanf("%s",p[c].name);

        getchar();
        printf("새 부서는? ");
        fgets(p[c].team,MAX,stdin);
        p[c].team[strlen(p[c].team)-1]='\0';

        printf("새 출근시간은? ");
        scanf("%d",&(p[c].start));

        printf("새 퇴근시간은? ");
        scanf("%d",&(p[c].leave));     

        printf("=> 수정됨!\n");  
    }
    else if(num == 0) printf("=> 수정취소!\n");

    return 0;
}

//삭제
int deletePerson(Person p[],int num){
    p[num-1].num = -100;
    return 1;
}
