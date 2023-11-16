/*
Bài tập 1: Thực hiện nhập 1 ký tự từ bàn phím, ký tự được nhập phải thuộc bảng chữ cái (a đến z) và phải là ký tự không in hoa. 
Bất kỳ ký tự nào khác không thuộc yêu cầu trên sẽ được xem là không hợp lệ. 
Yêu cầu bài toán:
In lên màn hình ký tự in hoa của kí tự vừa nhận được. Ví dụ nhập 'a' thì sẽ hiển thị 'A'. (gợi ý: bảng mã ASCII)
Nếu người dùng nhập ký tự 'T' (in hoa) thì in lên màn hình chuỗi "TAPIT" (gợi ý: lệnh điều kiện)
In số lần người dùng đã nhập hợp lệ
Nếu người dùng đã nhập 10 ký tự hợp lệ thì thực hiện hiển thị tất cả các ký tự đã nhập. Sau đó thực hiện tính lại từ đầu. (gợi ý: Mảng kí tự)
Trong trường hợp người dùng nhập ký tự không hợp lệ thì in lên màn hình thông báo nhập không hợp lệ, vui lòng nhập lại. (gợi ý: vòng lặp vô hạn)
*/
// 'a' = 97 , 'z' = 122

#include <stdio.h>

int main () {
    char character = 0; int times = 0;
    char validChar[10]={0}; int count = 0;    
    while (1) {
        do {
            fflush(stdin); printf ("\n\nEnter character: "); scanf ("%c", &character);
            if ( character<97 || character>122 ) {
                if (character==84) {
                    printf ("TAPIT\n");
                }
                printf ("The character is invalid. Please re-enter.");
            } 
        } while ( character<97 || character>122 );
        
        times++; count ++; character -= 32; validChar[count-1] = character;
        printf ("Character after uppercase: %c", character );
        printf ("\nNumber of times entering valid character: %d",times);
        
        if (count == 10) {
            printf ("\nYou have entered 10 valid characters !\n ");
            for (int i=0; i<10; i++) {
                printf ("%c",validChar[i]);
            }
            count=0;
        }
    }
}
