#include <stdio.h>
#include <stdint.h>

 struct infor 
{
    char name[32];
    char mssv[8];
    uint8_t course_c;
};

void infor_input(struct infor *stu_infor) 
{
    printf("Nhap ho ten cua nguoi code: ");
    scanf("%[^\n]s", stu_infor->name);

    printf("Nhap mssv cua nguoi code: ");
    scanf("%s", stu_infor->mssv);

    printf("Nhap so thu tu khoa C da tham gia: ");
    scanf("%hhu", &stu_infor->course_c);
}
void infor_print(struct infor *stu_infor) 
{
    printf("\n***Thong tin nguoi code***\n");
    printf("Ho ten: %s\n", stu_infor->name);
    printf("MSSV: %s\n", stu_infor->mssv);
    printf("So thu tu khoa: C%hhu\n", stu_infor->course_c);
}
int main() 
{
    struct infor student_info;
    infor_input(&student_info);
    infor_print(&student_info);
    return 0;
}