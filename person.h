typedef struct{
 char name[30];
 char team[100]; // 부서
 int start; // 출근 시간
 int leave; // 퇴근시간
 int num; //각 사람의 번호
}Person;

//CRUD
int addPerson(Person p[],int count); // 제품을 추가
void listPerson(Person p[],int count); // 전체 등록된 제품 리스트 출력(조회)
int updatePerson(Person p[]); //제품 수정하는 함수
int deletePerson(Person p[],int num); //제품 삭제하는 함수
