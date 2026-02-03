/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>
float SoLonNhat(float so1, float so2, float so3) {
    float sln;
    if (so1 >= so2 && so1 >= so3) {
        sln = so1;
    } 
    else if (so2 >= so1 && so2 >= so3) {
        sln = so2;
    } 
    else {
        sln = so3;
    }
        printf("So lon nhat la: %.1f\n", sln);
    return sln;
}
float SoNhoNhat(float so1, float so2, float so3) {
    float snn;
    if (so1 <= so2 && so1 <= so3) {
        snn = so1;
    } 
    else if (so2 <= so1 && so2 <= so3) {
        snn = so2;
    } 
    else {
        snn = so3;
    }
        printf("So nho nhat la: %.1f\n", snn);
    return snn;
}
int main() {
    float so1, so2, so3;
    printf("Nhap so thu nhat: ");
    scanf("%f", &so1);
    printf("Nhap so thu hai: ");
    scanf("%f", &so2);
    printf("Nhap so thu ba: ");
    scanf("%f", &so3);
    SoLonNhat(so1, so2, so3);
    SoNhoNhat(so1, so2, so3);
    return 0;
}