#include <stdio.h>
#include <string.h>
#include "person.h"
#define MAX 100

//검색기능
int searchStart(Person p[], int count); // 출근시간 검색 (검색 기능1)
int searchLeave(Person p[], int count); // 퇴근시간 검색 (검색 기능2)
int searchPerson(Person p[], int count); // 이름 검색 (검색 기능3)
int loadPerson(Person p[]);//데이터 저장
int savePerson(Person p[], int count, int num);//데어터 불러오기

//메뉴 선택
int selectMenu();
