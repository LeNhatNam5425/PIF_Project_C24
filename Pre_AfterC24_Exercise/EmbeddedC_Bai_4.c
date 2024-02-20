#include <stdio.h>

int main() 
{
    int n;
    // Xét điều kiện n > 5
    do
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);

        if (n <= 5)
        {
            printf("Gia tri n khong hop le. Yeu cau nhap lai.\n");
        }

    } while (n <= 5);

    int array[n];
    printf("Khoi tao mang int arr[%d]\n",n); 
    printf("Nhap gia tri tung phan tu: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("arr[%d] = ",i);
        scanf("%d", &array[i]);
    }
    
    printf("arr[] = {");
    for (int i = 0; i < n; i++) 
    {
        printf(" %d",array[i]);
    }
    printf(" }\n");

    /*printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&arr[%d] = %p\n", i, &array[i]);
    }*/
   
    /* int min = array[0];
    int max = array[0];
    for (int i = 0; i < n; i++) 
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (array[i] > max) 
        {
            max = array[i];
        }
    }
    printf("**Xet min max cua phan tu trong mang**\n");
    printf("Phan tu nho nhat: %d\n", min);
    printf("Phan tu lon nhat: %d\n", max); */

    // Tìm giá trị trung bình của mảng 
    int tong = 0;
    for (int i = 0; i < n; i++) 
    {
        tong += array[i];
    }
    float trung_binh = (float)tong / n;
    printf("Gia tri trung binh: %.3lf\n", trung_binh);

    return 0; 
}