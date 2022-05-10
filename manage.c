#include <stdio.h>
#include <string.h>
#include "manage.h"

//메뉴 선택
int selectMenu()
{
    int menu;
    printf("\n*** 메뉴 선택 ***\n");
    printf("1. 조회\n");
    printf("2. 출퇴근 시간 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 파일 저장\n");
    printf("6. 출근 검색\n");
    printf("7. 퇴근 시간 검색\n");
    printf("8. 이름 검색\n");
    printf("9. 부서 검색\n");
    printf("0. 종료\n\n");

    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

//검색기능

// 출근 시간 검색 (검색 기능1)
int searchStart(Person p[], int count){
    int n;

    printf("검색할 출근 시간은? ");
    scanf("%d",&n);

    for(int i=0; i<count; i++){
        if(p[i].start == n){
            printf("\n검색 결과\n");
            printf("================================\n");
            printf("%d   %s   %s   %d   %d\n",p[i].num,p[i].name,p[i].team,p[i].start,p[i].leave);
        }
    }
    return 1;
}

int searchLeave(Person p[], int count){
    int n;

    printf("검색할 퇴근 시간은? ");
    scanf("%d",&n);

    for(int i=0; i<count; i++){
        if(p[i].leave == n){
            printf("\n검색 결과\n");
            printf("================================\n");
            printf("%d   %s   %s   %d   %d\n",p[i].num,p[i].name,p[i].team,p[i].start,p[i].leave);
        }
    }
    return 1;
}

int searchPerson(Person p[], int count){
    char n[10];

    printf("검색할 이름은? ");
    scanf("%s", n);
   
    for(int i=0; i<count; i++){
        if(strcmp(p[i].name, n)==0){
            printf("\n검색 결과\n");
            printf("================================\n");
            printf("%d   %s   %s   %d   %d\n",p[i].num,p[i].name,p[i].team,p[i].start,p[i].leave);
        }
    }
    return 1;
}

int searchTeam(Person p[], int count){
    char n[10];

    printf("검색할 부서는? ");
    scanf("%s", n);
   
    for(int i=0; i<count; i++){
        if(strcmp(p[i].team, n)==0){
            printf("\n검색 결과\n");
            printf("================================\n");
            printf("%d   %s   %s   %d   %d\n",p[i].num,p[i].name,p[i].team,p[i].start,p[i].leave);
        }
    }
    return 1;
}

int loadPerson(Person p[]){
    int count = 0, i = 0;
    FILE *fp;
    fp = fopen("person.txt", "r");
    if(fp == NULL){
        printf("파일없음!\n");
        return 0;
    }else{
    
        for(int i=0; i < 100; i++){
        if(feof(fp))break;
        fscanf(fp, "%d   %s   %s   %d   %d\n", &p[i].num,p[i].name,p[i].team,&p[i].start,&p[i].leave);
        printf("%d   %s   %s   %d   %d\n",p[i].num,p[i].name,p[i].team,p[i].start,p[i].leave);

    }
    
    fclose(fp);
    printf("=> 로딩완료!\n");
    return i;
    }
}

int savePerson(Person p[], int count, int num){
    FILE *fp;
    fp = fopen("person.txt", "wt");

    for(int i = 0; i < count; i++){
        if(p[i].num == -1)continue;
        fprintf(fp, "%d   %s   %s   %d   %d\n", p[i].num,p[i].name,p[i].team,p[i].start,p[i].leave);
    }
    fclose(fp);
    printf("=> 로딩완료! \n");
}
