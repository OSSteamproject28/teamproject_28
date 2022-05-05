typedef struct{
 char name[30];
 char team[100]; // 부서
 int start; // 출근 시간
 int leave; // 퇴근시간
 int num; //각 사람의 번호
}Person;

//CRUD
int addPerson(Person p[],int count);
void listPerson(Person p[],int count);
int updatePerson(Person p[]);
int deletePerson(Person p[],int num); 
