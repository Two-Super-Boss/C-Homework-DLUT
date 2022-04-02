/*
	3. Write a program to input several grades from keyboard and convert to the corresponding GPAs. 
	   Use loop statement to do this operation several times, use switch statement to convert grade to GPA.
			we have 
			  grade>=90      gpa=4;
			  80<=grade<90   gpa=3;
			  70<=grade<80   gpa=2;
			  60<=grade<70   gpa=1;
			  score<60       gpa=0;

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int ChangeIntoGPA(int grade);//����gradeתGPA�ĺ���

int main(int argc, char const* argv[])
{
	int grades[101];//���grades
	int i = 0;//����ѭ��
	int loop = 0;//���ڼ�¼������Ч���ݵĸ���

	while (~scanf("%d", &grades[i])) {
		grades[i] = ChangeIntoGPA(grades[i]);
		loop = i;
		i++;
	}//��ȡ�ɼ�������ת��
	for (i = 0; i <= loop; i++) {
		printf("%d   ", grades[i]);
	}//���������

	return 0;
}

int ChangeIntoGPA(int grade) {
	int gpa = 0;

	switch (grade/10) {
	case 10:
		gpa = 4;
		break;
	case 9:
		gpa = 4;
		break;
	case 8:
		gpa = 3;
		break;
	case 7:
		gpa = 2;
		break;
	case 6:
		gpa = 1;
		break;
	default:
		gpa = 0;
	}

	return gpa;
}