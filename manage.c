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
