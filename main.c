#include "manage.h"
#include "person.h"
//main.c

int main(){
    Product p[20];
    int count, menu;
    int num,temp;
    count = loadPerson(p);

    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        if (menu == 1){
            listPerson(p,count);
        } //조회
        else if (menu == 2){
            count = addPerson(p,count);
        } //제품추가
        else if (menu == 3){
            listPerson(p,count);
            updatePerson(p);
        } //수정
        else if (menu == 4){
            listPerson(p,count);

            printf("\n번호는 (취소 :0)? ");
            scanf("%d",&num);
            if(num != 0){
                printf("정말로 삭제하시겠습니까?(삭제 :1)");
                scanf("%d",&temp);
                printf("=> 삭제됨!\n");

                if(temp != 1) printf("=> 삭제취소!\n");

                else if(temp == 1){
                    deletePerson(p,num);
                }
    
            }
            else if(num ==0) printf("=> 삭제취소!\n");

        } //삭제

        else if (menu == 5){
            savePerson(p,count,num);
            printf("저장됨!\n");
        } //파일저장

        else if (menu == 6){
            searchStart(p,count);
        } //출근시간 검색

        else if (menu == 7){
            searchLeave(p,count);
        } //퇴근시간 검색

        else if (menu == 8){
            searchPerson(p,count);
        } //이름 검색

    }
    printf("종료됨!\n");
    return 0;
}
