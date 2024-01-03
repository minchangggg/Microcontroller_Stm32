> https://www.facebook.com/groups/1012900173187521/permalink/1031848514626020/

### TÓM TẮT
1. Cấu trúc của một chương trình C cho vi điều khiển

> Đọc thêm: https://tapit.vn/qua-trinh-bien-dich-mot-chuong-trinh-cc/
>
> Đọc thêm: https://tapit.vn/qua-trinh-thuc-hien-ngat-cua-vi-dieu-khien-mcu-interrupt-processing/

2. Tổ chức bộ nhớ của vi điều khiển, chương trình và dữ liệu trong bộ nhớ

> Đọc thêm: https://tapit.vn/chuc-nang-chuc-va-ban-khong-gian-nho-cua-vi-xu-ly-arm-cortex-m/

3. Kiểu dữ liệu trong C, trong đó có kiểu số nguyên theo thư viện stdint.h (rõ ràng về kích cỡ và dấu, mình cũng có nhắc đến một kiểu dữ liệu người dùng tự định nghĩa được sử dụng nhiều là struct.

> Đọc thêm: https://tapit.vn/kieu-du-lieu-su-dung-thu-vien-stdint-trong-c/

4. Các phép toán trong C, lưu ý với vấn đề ép kiểu, phép toán logic và phép toán bit.

5. Hàm trong C: Khai báo, định nghĩa, sử dụng, tham số, trả về

> Website: https://vietjack.com/lap_trinh_c/ + https://www.tutorialspoint.com/cprogramming/index.htm
> 
> Ebook: Head First C-David Griffiths + C Programming, A Modern Approach -K. N. King
### TÀI LIỆU
Video ghi lại buổi học: https://youtu.be/BJ5H9sI60bA

Slide buổi học: https://docs.google.com/presentation/d/1KfwNh_fN8Vz5bGIyepeN-2M-xpQWaD-g/edit?usp=sharing&ouid=109030928772764985009&rtpof=true&sd=true
### LUYỆN TẬP
Ex1: Hoàn thành bài tập 1 trong slide. Chụp hình mã code và kết quả thực thi gửi lên phần bình luận trước 19h00 buổi học tối thứ 6

Ex2: Cài đặt phần mềm, chụp ảnh màn hình tại giao diện cấu hình cubeMX (Có hình con vi điều khiển) sau khi bạn cài đặt xong phần mềm STM32CubeIDE và tạo project với vi điều khiển mà bạn đang có.

--------------------------------
  
## I. SƠ LƯỢC VỀ CHƯƠNG TRÌNH CC

**A, Quá trình biên dịch một chương trình C/C++**
> https://tapit.vn/qua-trinh-bien-dich-mot-chuong-trinh-cc/?fbclid=IwAR30Vb0QtPRumEMEmWeFqYsndk2tRrhgGLDh16K8cHTBoPU1J-A_XpFGl9o
1. ĐỊNH NGHĨA: quá trình chuyển đổi từ ngôn ngữ bậc cao (C/C++, Pascal, Java, C#…) sang ngôn ngữ ngôn ngữ máy-> máy tính có thể hiểu và thực thi.
Ngôn ngữ C là một ngôn ngữ dạng biên dịch. Chương trình được viết bằng C muốn chạy được trên máy tính phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi. Quá trình được chia ra làm 4 giai đoạn chính:

+ Giai đoàn tiền xử lý (Pre-processor)
+ Giai đoạn dịch NNBC sang Asembly (Compiler)
+ Giai đoạn dịch asembly sang ngôn ngữ máy (Asember)
+ Giai đoạn liên kết (Linker)

![image](https://github.com/minchangggg/Stm32/assets/125820144/bc85d275-e61e-4deb-a55a-7ab20df96215)

2. HOẠT ĐỘNG
a. Giai đoạn tiền xử lý – Preprocessor
Giai đoạn này sẽ thực hiện:
Nhận mã nguồn
Xóa bỏ tất cả chú thích, comments của chương trình
Chỉ thị tiền xử lý (bắt đầu bằng #) cũng được xử lý
Ví dụ: chỉ thị #include cho phép ghép thêm mã chương trình của một tệp tiêu để vào mã nguồn cần dịch. Các hằng số được định nghĩa bằng #define sẽ được thay thế bằng giá trị cụ thể tại mỗi nơi sử dụng trong chương trình.

b. Cộng đoạn dịch Ngôn Ngữ Bậc Cao sang Assembly
Phân tích cú pháp (syntax) của mã nguồn NNBC
Chuyển chúng sang dạng mã Assembly là một ngôn ngữ bậc thấp (hợp ngữ) gần với tập lệnh của bộ vi xử lý.

c. Công đoạn dịch Assembly
Dich chương trình => Sang mã máy 0 và 1
Một tệp mã máy (.obj) sinh ra trong hệ thống sau đó.

d. Giai đoạn Linker
Trong giai đoạn này mã máy của một chương trình dịch từ nhiều nguồn (file .c hoặc file thư viện .lib) được liên kết lại với nhau để tạo thành chương trình đích duy nhất
Mã máy của các hàm thư viện gọi trong chương trình cũng được đưa vào chương trình cuối trong giai đoạn này.
Chính vì vậy mà các lỗi liên quan đến việc gọi hàm hay sử dụng biến tổng thể mà không tồn tại sẽ bị phát hiện. Kể cả lỗi viết chương trình chính không có hàm main() cũng được phát hiện trong liên kết.
Kết thúc quá trình tất cả các đối tượng được liên kết lại với nhau thành một chương trình có thể thực thi được (executable hay .exe) thống nhất.

**B. Các thư viện cần học trong C**

### C Library - <time.h>
The time.h header defines: four variable types + two macro + various functions -> for manipulating date and time.

**1. Library Variables**
|  No |       Variable     |                                    Description                                     | 
| :---| :------------------|------------------------------------------------------------------------------------| 
|  1  |   **size_t**       |  *This is the unsigned integral type and is the **result of the sizeof keyword***  | 
|  2  |   **clock_t**      |  *This is a type suitable for storing the **processor time***                      | 
|  3  |   **time_t is**    |  *This is a type suitable for storing the **calendar time***                       | 
|  4  |   **struct tm**    |  *This is a **structure** used to hold the **time and date***                      | 

The **struct tm** has the following definition

                              struct tm {
                                 int tm_sec;       // seconds,  range 0 to 59
                                 int tm_min;       // minutes, range 0 to 59
                                 int tm_hour;      // hours, range 0 to 23     
                                 int tm_mday;      // day of the month, range 1 to 31  
                                 int tm_mon;       // month, range 0 to 11            
                                 int tm_year;      // The number of years since 1900  
                                 int tm_wday;      // day of the week, range 0 to 6    
                                 int tm_yday;      // day in the year, range 0 to 365  
                                 int tm_isdst;     // daylight saving time             
                              };
              
**2. Library Macros**
|  No |          Macro        |                             Description                                         | 
| :---| :---------------------|---------------------------------------------------------------------------------| 
|  1  |   **NULL**            |  *This macro is the value of a **null pointer constant***                       | 
|  2  |   **CLOCKS_PER_SEC**  |  *This macro represents the **number of processor clocks per second***          | 

**3. Library Functions** 
|  No |      Function      |                                   Description                                                       | 
| :---| :------------------|-----------------------------------------------------------------------------------------------------| 
|  1  | ```char *asctime(const struct tm *timeptr)```  |  *Returns a pointer to a string which represents the day and time of the structure timeptr*  | 
|  2  | ```clock_t clock(void)```  |  *Returns the processor clock time used since the beginning of an implementation defined era (normally the beginning of the program)*  |
|  3  | ```char *ctime(const time_t *timer)```  |  *Returns a string representing the localtime based on the argument timer*| 
|  4  | ```double difftime(time_t time1, time_t time2)```  |  *Returns the difference of seconds between time1 and time2 (time1-time2)*  |
|  5  | ```struct tm *gmtime(const time_t *timer)```  |  *The value of timer is broken up into the structure tm and expressed in Coordinated Universal Time (UTC) also known as Greenwich Mean Time (GMT)*  | 
|  6  | ```struct tm *localtime(const time_t *timer)```  |  *The value of timer is broken up into the structure tm and expressed in the local time zone*  |
|  7  | ```time_t mktime(struct tm *timeptr)```  |  *Converts the structure pointed to by timeptr into a time_t value according to the local time zone*  | 
|  8  | ```size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)```  |  *Formats the time represented in the structure timeptr according to the formatting rules defined in format and stored into str*  |
|  9  | ```time_t time(time_t *timer)``` |  *Calculates the current calender time and encodes it into time_t format*  | 

## II. CẤU TRÚC CỦA MỘT CHƯƠNG TRÌNH C CHO VI ĐIỀU KHIỂN 
+) Chỉ thị tiền xử lý (C directive)
+) Khai báo, định nghĩa 
+) Hàm main
+) Vòng lặp vô hạn (infinite loop) for(;;), while(1)
+) Trình xử lý ngắt (Interrupt Service Routine)

<img width="607" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/18b5990f-0c9f-4a68-b69c-a62e4189deb4">

**Quá trình thực hiện ngắt của vi điều khiển – MCU Interrupt processing**
> https://tapit.vn/qua-trinh-thuc-hien-ngat-cua-vi-dieu-khien-mcu-interrupt-processing/?fbclid=IwAR2PXlKLeeP945BvFNK_58rtfPEntMePA2Nz42NHYgTHVPACBNR3fAmJtDA

Bình thường, vi điều khiển sẽ thực thi các lệnh do người dùng viết một cách tuần tự từ trên xuống. 
Tuy nhiên, nó cũng được thiết kế để sẵn sàng xử lý các tình huống, sự kiện do tác động từ bên ngoài của con người, các cảm biến, hoặc từ các ngoại vi bên trong như Timer, UART, ADC…vv… mà chúng ta không biết, không dự đoán trước được khi nào tình huống, sự kiện đó sẽ xảy ra. 

Một cách tổng quát, khi xảy ra Interrupt, vi điều khiển sẽ thực hiện qua các bước sau: 

1. Thực hiện xong câu lệnh đang thực hiện (câu lệnh ở mã máy sau quá trình compiler, asembler từ ngôn ngữ bật cao do người dùng viết. Để thực hiện 1 câu lệnh ở mã máy, vi điều khiển thường thực hiện các bước sau: lấy lệnh từ bộ nhớ; giải mã lệnh; thực thi lệnh). 

2. Lưu ngữ cảnh gồm lưu địa chỉ câu lệnh tiếp theo sẽ thực hiện (giá trị thanh ghi Program Counter), lưu trạng thái năng lượng đang hoạt động (trong thanh ghi Status) vào vùng nhớ Stack, gọi là quá trình Stacking.(Vùng nhớ Stack là vùng nhớ First In Last Out.)

3. Xóa bit cho phép ngắt toàn cục trong thanh ghi Status, đưa vi điều khiển về chế độ hoạt động bình thường (active mode) nếu nó đang ở chế độ tiết kiệm năng lượng. Bit cho phép ngắt cũng có thể được bật lên lại để cho phép ngắt chồng ngắt (Nested Interrupt)

4. Vi điều khiển thực thi chương trình phục vụ ngắt (ISR) bằng cách nạp địa chỉ câu lệnh đầu tiên của chương trình phục vụ ngắt vào thanh ghi PC. (Địa chỉ này cũng là địa chỉ của vecter ngắt trong interrupt vector table)

5. Khi thực hiện xong chương trình phục vụ ngắt, vi điều khiển sẽ thực hiện quá trình unstacking: nạp lại giá trị thanh ghi PC đã lưu, bật lại bit cho phép ngắt toàn cục, quay về trạng thái năng lượng ban đầu.

Một số ngắt phổ biến trên vi điều khiển phổ biến mà chúng ta thường sử dụng: 
– Ngắt ngoài: Sự kiện là khi sự thay đổi sườn tín hiệu (edge) sườn lên, sườn xuống, hoặc cả 2. 

– Ngắt UART: Thường sử dụng ngắt nhận, sự kiện là khi buffer nhận đủ 1 byte dữ liệu

– Ngắt ADC: Thường sử dụng khi hoàn thành việc chuyển đổi ADC

– Ngắt Timer: Thường sử dụng khi tràn thanh ghi đếm, hoặc khi giá trị đếm bằng với thanh ghi so sánh

> Xem thêm: Tổng hợp các bài hướng dẫn Lập trình vi điều khiển STM32 
> https://tapit.vn/tong-hop-cac-bai-huong-dan-lap-trinh-vi-dieu-khien-stm32/

## III. TỔ CHỨC BỘ NHỚ CỦA VI ĐIỀU KHIỂN, CHƯƠNG TRÌNH VÀ DỮ LIỆU TRONG BỘ NHỚ 
**Tổ chức bộ nhớ**

+ Bộ nhớ chương trình - FLASH (ROM)
+ Bộ nhớ dữ liệu - SRAM
+ Các ngoại vi - Register

<img width="467" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/acc0f60b-38e8-45d5-badc-9a3b5f6620b6">

<img width="179" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/4e67c60b-b7b8-4a35-ac71-2fcee694ceaf">



## IV. CÁC PHÉP TOÁN TRONG C
+ **Ép kiểu**
+ Phép tăng giảm giá trị;
+ Phép toán số học;
+ Phép toán quan hệ;
+ **Phép toán logic;**
+ **Phép toán BIT,** https://byjus.com/gate/bitwise-operators-in-c/ https://docs.google.com/presentation/d/1KfwNh_fN8Vz5bGIyepeN-2M-xpQWaD-g/edit?fbclid=IwAR1J8oPW3D5gVe2nP-abG-FlBqgeGh0chaNUwuUYsFaCuXEGLtlGYRInHKY#slide=id.p35
+ Phép gán;
+ Phép toán điền kiện.



