/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>
void hoanVi(float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Sau khi hoan vi: a = %.1f, b = %.1f\n", *a, *b);
}
int main() {
    float a, b;
    printf("Nhap gia tri a: ");
    scanf("%f", &a); 
    printf("Nhap gia tri b: ");
    scanf("%f", &b);
    hoanVi(&a, &b);
    return 0;
}

