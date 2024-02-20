#include <stdio.h>
#include <stdint.h>  // include thêm thư viện stdint.h
int main() 
{
    int n;
    do
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);

        if (n <= 0 || n > 16) 
        {
            printf("Gia tri n khong hop le. Yeu cau nhap lai.\n");
        }

    } while (n <= 0 || n > 16);

    int array[n];
    //uint8_t array[n]; 
    //uint16_t array[n];
    //uint32_t array[n];
    //uint64_t array[n];

    /*  => Kết luận:
     a) Một phần tử của mảng được biểu diễn bằng 16 kí tự Hexa
        => Dung lượng một phần tử: 16 x 4 = 64 bit => 64 : 8 = 8 byte
     b) Dung lượng của từng phần tử là như nhau, đều được biểu diễn bằng 
        16 kí tự Hexa và cùng có giá trị là 8 byte sau mỗi lần định nghĩa lại 
    */

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

    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&arr[%d] = %p\n", i, &array[i]);
    }
    return 0; 
}
