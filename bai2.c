/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>
int KiemTraNamNhuan(int nam) {
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1;
    } else {
        return 0; 
    }
}
int main() {
    int nam;
    printf("Nhập năm: ");
    scanf("%d", &nam); 
    if (KiemTraNamNhuan(nam) == 1) {
        printf("Năm %d là năm nhuận.\n", nam);
    } else {
        printf("Năm %d là năm không nhuận.\n", nam);
    }
    return 0;
}

