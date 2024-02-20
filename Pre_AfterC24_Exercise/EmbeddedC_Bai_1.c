#include <stdio.h>

int main() 
{
    int n;
    // Xét điều kiện n 
    do
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);

        if (n <= 0 || n > 16) 
        {
            printf("Gia tri n khong hop le. Yeu cau nhap lai.\n");
        }

    } while (n <= 0 || n > 16);

    // Thực hiện nhập giá trị cho từng phần tử từ bàn phím
    int array[n];
    printf("Khoi tao mang int arr[%d]\n",n); 
    printf("Nhap gia tri tung phan tu: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("arr[%d] = ",i);
        scanf("%d", &array[i]);
    }

    // In ra terminal giá trị của từng phần tử đã nhập
    printf("arr[] = {");
    for (int i = 0; i < n; i++) 
    {
        printf(" %d",array[i]);
    }
    printf(" }\n");

    // In ra terminal địa chỉ của từng phần tử trộng mảng đó.
    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&arr[%d] = %p\n", i, &array[i]);
    }
    return 0; 
}