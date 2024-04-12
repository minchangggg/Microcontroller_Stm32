<img width="450" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/fae6fe05-a314-4c64-9143-c84573a10ebc">

--------------------------------------------------------------------------------------------------------------------------------

<img width="450" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/a42e5da1-1f29-4edd-9c67-6f6c9432a246">

## I. SƠ LƯỢC VỀ CHƯƠNG TRÌNH CC
### A, Quá trình biên dịch một chương trình C/C++
> https://tapit.vn/qua-trinh-bien-dich-mot-chuong-trinh-cc/?fbclid=IwAR30Vb0QtPRumEMEmWeFqYsndk2tRrhgGLDh16K8cHTBoPU1J-A_XpFGl9o

#### 1. ĐỊNH NGHĨA
- Là quá trình chuyển đổi từ ngôn ngữ bậc cao (C/C++, Pascal, Java, C#…) sang ngôn ngữ ngôn ngữ máy-> máy tính có thể hiểu và thực thi.
Ngôn ngữ C là một ngôn ngữ dạng biên dịch. Chương trình được viết bằng C muốn chạy được trên máy tính phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi. Quá trình được chia ra làm 4 giai đoạn chính:

	+ Giai đoàn tiền xử lý (Pre-processor)
	+ Giai đoạn dịch NNBC sang Asembly (Compiler)
	+ Giai đoạn dịch asembly sang ngôn ngữ máy (Asember)
	+ Giai đoạn liên kết (Linker)

![image](https://github.com/minchangggg/Stm32/assets/125820144/bc85d275-e61e-4deb-a55a-7ab20df96215)

#### 2. HOẠT ĐỘNG

**a. Giai đoạn tiền xử lý – Preprocessor**

	+ Nhận mã nguồn
	+ Xóa bỏ tất cả chú thích, comments của chương trình
	+ Chỉ thị tiền xử lý (bắt đầu bằng #) cũng được xử lý
	+ Ví dụ: chỉ thị #include cho phép ghép thêm mã chương trình của một tệp tiêu để vào mã nguồn cần dịch. Các hằng số được định nghĩa bằng #define sẽ được thay thế bằng giá trị cụ thể tại mỗi nơi sử dụng trong chương trình.

**b. Cộng đoạn dịch Ngôn Ngữ Bậc Cao sang Assembly**

	+ Phân tích cú pháp (syntax) của mã nguồn NNBC
	+ Chuyển chúng sang dạng mã Assembly là một ngôn ngữ bậc thấp (hợp ngữ) gần với tập lệnh của bộ vi xử lý.

**c. Công đoạn dịch Assembly**

	+ Dich chương trình => Sang mã máy 0 và 1
	+ Một tệp mã máy (.obj) sinh ra trong hệ thống sau đó.

**d. Giai đoạn Linker**

+ Trong giai đoạn này mã máy của một chương trình dịch từ nhiều nguồn (file .c hoặc file thư viện .lib) được liên kết lại với nhau để tạo thành chương trình đích duy nhất
+ Mã máy của các hàm thư viện gọi trong chương trình cũng được đưa vào chương trình cuối trong giai đoạn này. -> Chính vì vậy mà các lỗi liên quan đến việc gọi hàm hay sử dụng biến tổng thể mà không tồn tại sẽ bị phát hiện. Kể cả lỗi viết chương trình chính không có hàm main() cũng được phát hiện trong liên kết.
+ Kết thúc quá trình tất cả các đối tượng được liên kết lại với nhau thành một chương trình có thể thực thi được (executable hay .exe) thống nhất.

### B. Các thư viện cần học trong C**

### C Library - <time.h>
*The time.h header defines: four variable types + two macro + various functions -> for manipulating date and time.*

#### 1. Library Variables
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
              
#### 2. Library Macros
|  No |          Macro        |                             Description                                         | 
| :---| :---------------------|---------------------------------------------------------------------------------| 
|  1  |   **NULL**            |  *This macro is the value of a **null pointer constant***                       | 
|  2  |   **CLOCKS_PER_SEC**  |  *This macro represents the **number of processor clocks per second***          | 

#### 3. Library Functions 
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
<img width="700" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/9a676761-63a9-4fa3-9066-bd4ddaaba427">

<img width="580" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/18b5990f-0c9f-4a68-b69c-a62e4189deb4">

### Quá trình thực hiện ngắt của vi điều khiển – MCU Interrupt processing
> https://tapit.vn/qua-trinh-thuc-hien-ngat-cua-vi-dieu-khien-mcu-interrupt-processing/?fbclid=IwAR2PXlKLeeP945BvFNK_58rtfPEntMePA2Nz42NHYgTHVPACBNR3fAmJtDA

+ Bình thường, vi điều khiển sẽ thực thi các lệnh do người dùng viết một cách tuần tự từ trên xuống. 
+ Tuy nhiên, nó cũng được thiết kế để sẵn sàng xử lý các tình huống, sự kiện do tác động từ bên ngoài của con người, các cảm biến, hoặc từ các ngoại vi bên trong như Timer, UART, ADC…vv… mà chúng ta không biết, không dự đoán trước được khi nào tình huống, sự kiện đó sẽ xảy ra. 
+ Một cách tổng quát, khi xảy ra Interrupt, vi điều khiển sẽ thực hiện qua các bước sau: 
	1. Thực hiện xong câu lệnh đang thực hiện (câu lệnh ở mã máy sau quá trình compiler, asembler từ ngôn ngữ bật cao do người dùng viết. Để thực hiện 1 câu lệnh ở mã máy, vi điều khiển thường thực hiện các bước sau: lấy lệnh từ bộ nhớ; giải mã lệnh; thực thi lệnh). 
	2. Lưu ngữ cảnh gồm lưu địa chỉ câu lệnh tiếp theo sẽ thực hiện (giá trị thanh ghi Program Counter), lưu trạng thái năng lượng đang hoạt động (trong thanh ghi Status) vào vùng nhớ Stack, gọi là quá trình Stacking.(Vùng nhớ Stack là vùng nhớ First In Last Out.)
	3. Xóa bit cho phép ngắt toàn cục trong thanh ghi Status, đưa vi điều khiển về chế độ hoạt động bình thường (active mode) nếu nó đang ở chế độ tiết kiệm năng lượng. Bit cho phép ngắt cũng có thể được bật lên lại để cho phép ngắt chồng ngắt (Nested Interrupt)
	4. Vi điều khiển thực thi chương trình phục vụ ngắt (ISR) bằng cách nạp địa chỉ câu lệnh đầu tiên của chương trình phục vụ ngắt vào thanh ghi PC. (Địa chỉ này cũng là địa chỉ của vecter ngắt trong interrupt vector table)
	5. Khi thực hiện xong chương trình phục vụ ngắt, vi điều khiển sẽ thực hiện quá trình unstacking: nạp lại giá trị thanh ghi PC đã lưu, bật lại bit cho phép ngắt toàn cục, quay về trạng thái năng lượng ban đầu.

+ Một số ngắt phổ biến trên vi điều khiển phổ biến mà chúng ta thường sử dụng: 
	– Ngắt ngoài: Sự kiện là khi sự thay đổi sườn tín hiệu (edge) sườn lên, sườn xuống, hoặc cả 2. 
	
	– Ngắt UART: Thường sử dụng ngắt nhận, sự kiện là khi buffer nhận đủ 1 byte dữ liệu
	
	– Ngắt ADC: Thường sử dụng khi hoàn thành việc chuyển đổi ADC
	
	– Ngắt Timer: Thường sử dụng khi tràn thanh ghi đếm, hoặc khi giá trị đếm bằng với thanh ghi so sánh

> Xem thêm: Tổng hợp các bài hướng dẫn Lập trình vi điều khiển STM32 
> https://tapit.vn/tong-hop-cac-bai-huong-dan-lap-trinh-vi-dieu-khien-stm32/

## III. TỔ CHỨC BỘ NHỚ CỦA VI ĐIỀU KHIỂN, CHƯƠNG TRÌNH VÀ DỮ LIỆU TRONG BỘ NHỚ 
### Tổ chức bộ nhớ

+ Bộ nhớ chương trình - FLASH (ROM)
+ Bộ nhớ dữ liệu - SRAM
+ Các ngoại vi - Register

<img width="467" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/acc0f60b-38e8-45d5-badc-9a3b5f6620b6">

<img width="179" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/4e67c60b-b7b8-4a35-ac71-2fcee694ceaf">

## IV. CÁC PHÉP TOÁN TRONG C
### 1. Ép kiểu

### 2. Phép tăng giảm giá trị

`a. ++ là toán tử tăng`

++i tương đương với i = i + 1

`b. -- là toán tử giảm`

--i tương đương với i = i - 1

+ Có 2 cách viết ++i và i++ nhưng ý nghĩa của chúng khác nhau:
+ ++i thì i được tăng trước sau đó sẽ lấy kết quả để thực hiện biểu thức
+ i++ thì i được đưa vào thực hiện biểu thức trước sau đó mới tăng i lên.
  
+ Xem ví dụ sau:

		Tăng trước:
		x = 10; y = ++x;// x = 11 và y = 11.
		Nếu dùng toán tử tăng ++ trước biến x thì biến x sẽ tăng lên 1 trước rồi mới gán giá trị cho biến y.

  		Tăng sau:
		Xem ví dụ sau: x = 10; y = x++;// y = 10 và x = 11.
		Nếu dùng toán tử tăng ++ sau biến x thì giá trị của biến x sẽ được gán cho biến y, rồi sau đó biến x mới tăng lên 1.

### 3. Phép toán số học

### 4.  Phép toán quan hệ

<img width="230" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/1cbfd42a-4b43-4f16-bcb0-cb8aeab336d9">

`Note 1: Đừng quên dấu "=" trong phép so sánh Bằng nhé, nếu không nó sẽ trở thành phép gán. Đây là một lỗi sai rất cơ bản.`

<img width="750" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/83dd4693-ef94-4b34-a602-0915dcbedab9">

`Note 2: Không bao giờ so sánh hai giá trị dấu chấm động bằng nhau hay không. Hầu như luôn luôn có sự khác biệt nhỏ giữa hai số chấm động. Cách phổ biến để so sánh 2 số chấm động là tính khoảng cách giữa 2 số đó, nếu khoảng cách đó là rất nhỏ thì ta cho là bằng nhau. Giá trị dùng để so sánh với khoảng cách đó thường được gọi là epsilon.`

<img width="450" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/ed37a163-3ee3-48a6-a3b1-97c79465e08a">

### 5.  Phép gán

### 6.  Phép toán điền kiện

### 7.  Phép toán logic

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/eff30b5e-02dc-4156-9a70-80dda4810576">

VD1: Giả sử biến A giữ giá trị 1 và biến B giữ giá trị 0, thì khi đó:

		(A && B) là false.
		(A || B) là true.
		!(A && B) là true.
VD2:

<img width="550" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/9125fdc2-78b1-47df-85fd-4e3425e81a87">

### 8. Phép toán Bitwise

> https://viblo.asia/p/toan-tu-bitwise-naQZR9qGKvx
> https://openplanning.net/12281/cac-toan-tu-bitwise
> https://byjus.com/gate/bitwise-operators-in-c/

<img width="700" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/a7f26a16-ef26-4f01-8c6e-ee4ca44da596">

#### a. Bitwise AND operator & 

<img width="300" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/52bbce36-cae4-44d5-b864-d6c64254cd6e">

+ Khi một bitwise AND được thực hiện trên một cặp bit, nó trả về 1 nếu cả 2 bit là 1, ngược lại trả về 0.
+ Hãy xem xét biểu thức 0b0101 & 0b0110. Sắp xếp từng bit lên và áp dụng thao tác AND cho từng cột bit:

		0 1 0 1 AND
		0 1 1 0
		--------
		0 1 0 0

<img width="450" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/2a6b1b49-2fea-4141-84c0-971f993bf4da">

<img width="530" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/9b842310-35c5-4c70-8f54-4a56ce11b3d5">

#### b. Bitwise OR operator |

<img width="300" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/8a8646c4-8238-4164-bc47-72d0836a5649">

+ Khi một bitwise OR được thực hiện trên một cặp bit, nó trả về 1 nếu một trong các bit là 1, ngược lại trả về 0.

		0 1 0 1 OR
		0 1 1 0
		-----------
		0 1 1 1

<img width="455" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/05135ab0-dc5e-4be7-bbef-b1f609a3a910">

<img width="550" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/fef4f79d-1b04-40d8-a0c3-8fed15ab23ac">

#### c. Bitwise XOR (exclusive OR) operator ^

<img width="300" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/edb7c512-c685-4396-a4f1-e57b5e4eb342">

+ Khi một bitwise XOR được thực hiện trên một cặp bit, nó trả về 1 nếu các bit khác nhau, ngược lại (cả 2 đều đúng hoặc không đúng) trả về 0.
+ Hãy xem xét biểu thức 0b0110 ^ 0b0011:
  
		0 1 1 0 XOR
		0 0 1 1
		-------
		0 1 0 1

+ Ta cũng có thể đánh giá kiểu cột biểu thức XOR ghép, chẳng hạn như 0b0001 ^ 0b0011 ^ 0b0111. Nếu có số chẵn bit 1 trong một cột, kết quả là 0. Nếu có một số lẻ bit 1 trong một cột, kết quả là 1:

		0 0 0 1 XOR
		0 0 1 1 XOR
		0 1 1 1
		--------
		0 1 0 1

		hay dễ hiểu hơn là: (0 0 0 1 XOR 0 0 1 1) XOR 0 1 1 1 = 0 0 1 0 ^ 0 1 1 1 = 0 1 0 1
		
#### d. Bitwise NOT operator ~

<img width="300" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/d8a580e8-c843-4b76-a649-1f92f4436e6b">

+ Khi một Bitwise NOT được sử dụng nó sẽ đảo ngược tất cả các bit. 1 thành 0, và 0 thành 1
+ Lưu ý rằng kết quả của NOT phụ thuộc vào kích thước loại dữ liệu của bạn:
  
		+ Lật 4 bits: ~0100 = 1011
		+ lật 8 bits: ~0000 0100 = ~0100u = 1111 1011
  
<img width="500" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/ccda5143-6449-442b-8fc1-5a6374c1f1d2">

#### e. Toán tử dịch bit trái (<<) và toán tử dịch bit phải (>>)

+ Trong phép dịch trái, toán hạng bên trái là biểu thức để dịch chuyển các bit, còn toán hạng bên phải là con số bit cần dịch chuyển. vì vậy, khi chúng ta viết x<<1, nghĩa là chúng ta dịch chuyển x sang trái 1 bit. các bit mới được dịch chuyển bên phải sẽ là 0.
+ VD:
  
	0011 << 1 == 0110
	0011 << 2 == 1100
	0011 << 3 == 1000
  
	1100 >> 1 là 0110
	1100 >> 2 là 0011
	1100 >> 3 là 0001

![image](https://github.com/minchangggg/Stm32/assets/125820144/c2ab7160-6a45-45b9-becf-417f44f9ab7d)

#### f. Phép gán toán tử bitwise
<img width="650" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/993470f6-5de5-4fe3-8e97-b23024d39c64">

VD:

<img width="300" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/469aaf64-078f-473b-8ba2-b9085803b6ff">

## V. Kỹ thuật mặt nạ bit - Bit Mask
> https://www.laptrinhdientu.com/2021/08/bitwise-operator.html
### 1. Giới thiệu
+ Bitwise là toán tử xử lý với các bit trong một số, nó là một toán tử rất quan trọng trong C, đặc biệt là C nhúng. Các toán tử bitwise cho phép xử lý với từng bit riêng lẻ trên một số nguyên, một thanh ghi. 

    ➤ Người dùng có thể set, clear, toggle, read a bit, ... mà không làm ảnh hưởng đến các thành phần khác của thanh ghi bằng toán tử bitwise. 

    ➤ Ví dụ vi điều khiển 8051 cho phép tác động tới từng bit của thanh ghi port, muốn tác động đến chân P1.0 thì ta dùng bit P1_0.

    Một số dòng vi điều khiển, hoặc IDE khác lại không cho phép điều này (chúng ta chỉ có thể tác động đến cả thanh ghi).

    ➤ Trường hợp khác là muốn tác động lên nhiều bit trong thanh ghi (khoảng 3 4 bit chẳng hạn), mà chỉ dùng 1 lệnh 😃

+ Đây, **xử lý với cả byte thì đơn giản** rồi:

		Muốn đảo cả byte: P2 = ~P2; (trong khi muốn đảo bit thì ta sử dụng P2_1 = !P2_1;
		Muốn thay đổi giá trị cả byte: P2 = 0x5A; // P2 = 0b0101.1010
  
+ Xử lý với **bit (1 hoặc 1 vài bit) xem chừng khó khăn hơn**:

🧐🧐 Nếu MCU chỉ cho phép tác động đến byte, ta nên sử dụng kỹ thuật mặt nạ: "Mask" - Đó là cách sử dụng các phép AND (&), OR (|), EXOR (^) các thanh ghi với các số đặc biệt để chỉ tác động tới các bit cần thiết.`

### 2. Ứng dụng

<img width="300" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/e2520455-45e5-4e11-ad75-09b67b44011a">

#### a. SET BITS 
`Set 1 (1 vài) bit lên mức 1 => dùng OR`

+ Ví dụ: set chân P1.4 lên mức 1

	Cách thông thường: P1_4 = 1;
	
	Cách sử dụng phép OR: P1 |= 0x10;
	
	Cách sử dụng Bit - Mask: P1 |= (1 << 4);

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/03de2689-fa61-4306-9037-6a246cdca656">

#### b. CLEAR BITS
`Clear 1 (1 vài) bit = 0 => dùng AND + NOT`

+ Ví dụ: Clear chân P1.4 về mức 0

	Cách thông thường: P1_4 = 0;

	Cách sử dụng phép AND: P1 &= ~0x10;

	Cách sử dụng Bit - Mask: P1 &= ~(1 << 4);

	Clear 2 bit (hoặc nhiều hơn) - Clear P1.4 và P1.5: P1 &= ~(0x03 << 4);

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/a8713f3e-9fdd-4d77-9127-a40c2a29d1e4">

#### c. TOGGLE BITS
`Đảo logic 1 (1 vài) bit => dùng EXOR`

+ Ví dụ: Đảo logic chân P1.4

	Cách thông thường: if (P1_4 == 0) P1_4 = 1;
			   else P1_4 = 0;
	
	Cách sử dụng phép EXOR: P1 ^= 0x10;
	
	Cách sử dụng Bit - Mask: P1 ^= (1 << 4);

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/b3e1dad0-e7f2-40b4-8fee-688a63666deb">

#### d. CHECKING BITS
`Kiểm tra giá trị 1 bit => dùng AND`

+ Ví dụ: Kiểm tra nút bấm tại chân P1.4

        Cách thông thường: if (P1_4 == 0) hoặc if (!P1_4)

        Cách sử dụng phép AND: if ((P1 & 0x10) == 0) hoặc if (!(P1 & 0x10))

        Cách sử dụng Bit - Mask: if ((P1 & (1 << 4)) == 0) hoặc if (!(P1 & (1 << 4)))

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/b5214141-e849-44ba-bcdf-26a88e30ec2c">

#### Nhận xét
Nhận xét 3 trường hợp trên:

+ Cách 1 (Cách thông thường): **không áp dụng cho MCU, chỉ cho phép tác động theo byte, trường hợp đảo bit phải dùng if** -> dài dòng.
+ Cách 2: **phải nhớ mã hexa tương ứng với từng bit muốn tác động**, **khó thay đổi chương trình khi muốn thay đổi bit khác**. **Trường hợp đọc nút nhấn còn gây thay đổi các bit khác.**
+ Cách 3, bitmask -> Oke nhất 😁😁😁
#### Kết luận 

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/dae45f23-07f4-4f07-a599-b9d088677b9d">

--------------------------------------------------------------------------------------------------------------------------------

<img width="650" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/9e23c9de-7c47-4198-ba04-a8b30ed0a9e9">

## I, Một số khái niệm cơ bản và Cấu trúc của 1 vi điều khiển

**1. Một số khái niệm cơ bản**

- User manual board: Tổng quan và hướng dẫn sử dụng board mạch thực hành, các thành phần trên board mạch. (F103 BluePill: website)
- Schematic: Sơ đồ nguyên lý mạch của board mạch thực hành, linh kiện nào, chân nào nối với chân nào. 
- Datasheet: Tổng quan về thiết bị và thông suất kỹ thuật.
- Reference manual: Hướng dẫn sử dụng thiết bị, các tính năng, bước thực hiện và thanh ghi => Hiểu chức năng.
- Tài liệu HAL Description: Hiểu thư viện, hiểu cách dùng.
- Application note: Ghi chú, hướng dẫn sử dụng một tính năng ngoại vi nào đấy.
  
- Ý nghĩa của vi xử lý 8 bits, 16 bits, 32 bits
  + Độ rộng thanh ghi của vi xử: Thực hiện 1 số chức năng nhất định, chứa hoặc tính toán các dữ liệu. VD: MCU 8 bits thì thanh ghi 8 bit, MCU 16 bits thì thanh ghi 16 bits....
  + Độ rộng đường bus dữ liệu ( khả năng vận chuyển của nó, bao nhiêu bits trong 1 lần vận chuyển dữ ). VD: có 1 biến dữ liệu 32 bits (dữ liệu đc lưu trong bộ nhớ) -> để tính toán những dữ liệu này thì chính Vi Xử Lý là nơi tính toán -> Cần chuyển dữ liệu 32 bits từ bộ nhớ lên Vi Xử Lý => đối với MCU 32 bits, chỉ cần load 1 lượt; đối với MCU 8 bits cần lấy 4 lượt. => Số bits càng lớn thì khả năng làm việc càng nhanh càng tối ưu (lấy dữ liệu và tính toán nhanh hơn). 

**2. Cấu trúc của vi điều khiển**

          + Vi xử lý - CPU
          + Bộ nhớ 
          + Ngoại vi 
          + Hệ thống bus 

> https://www.keil.com/dd/docs/datashts/atmel/at89c51_ds.pdf
> https://ww1.microchip.com/downloads/en/devicedoc/41291d.pdf
> https://www.ti.com/lit/ds/symlink/msp430g2553.pdf
> https://www.st.com/resource/en/datasheet/stm32f103c8.pdf

<img width="800" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/ae9b56c5-d8be-490b-8f74-87465986bfbe">
<img width="800" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/35a032e7-b732-46dc-b936-d6bf8743bcdb">
<img width="800" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/737d574d-a87e-41a1-96fd-f3d0b7447af4">

### II, PHẦN CỨNG THỰC HÀNH

<img width="700" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/83ad9192-6abb-446d-ab46-129fde9f087e">

> 	https://stm32-base.org/boards/STM32F103C8T6-Blue-Pill.html

**1. Giới thiệu vi điều khiển STM32F103C8T6**

- STM32F103C8T6 là vi điều khiển **32bit**, thuộc họ F1 của dòng chip STM32 hãng ST.

- Lõi **ARM COTEX M3**.

- Tốc độ tối đa **72Mhz**. 

- Bộ nhớ :

	**64** kbytes bộ nhớ **Flash** 

	**20** kbytes bộ nhớ **SRAM**      

- Clock, reset và quản lý nguồn

	Điện áp hoạt động từ 2.0 → 3.6V.

	Sử dụng thạch anh ngoài từ 4Mhz → 20Mhz.     

	Thạch anh nội dùng dao động RC ở mode 8Mhz hoặc 40Khz.	 

- Chế độ điện áp thấp:        

	Có các mode: ngủ, ngừng hoạt động hoặc hoạt động ở chế độ chờ.
	
	Cấp nguồn ở chân Vbat bằng pin ngoài để dùng bộ RTC và sử dụng dữ liệu được lưu trữ khi mất nguồn cấp chính. 

- 2 bộ ADC 12 bit với 9 kênh cho mỗi bộ        

	Khoảng giá trị chuyển đổi từ 0 – 3.6 V
	
	Có chế độ lấy mẫu 1 kênh hoặc nhiều kênh.    

- DMA:         

	7 kênh DMA
	
	Có hỗ trợ DMA cho ADC, UART, I2C, SPI.

- 7 bộ Timer:

	3 Timer 16 bit hỗ trợ các mode Input Capture/ Output Compare/ PWM.
	
	1 Timer 16 bit hỗ trợ để điều khiển động cơ với các mode bảo vệ ngắt Input, dead-time.
	
	2 Watchdog Timer để bảo vệ và kiểm tra lỗi.
	
	1 Systick Timer 24 bit đếm xuống cho hàm Delay,….

- Có hỗ trợ 9 kênh giao tiếp:

	2 bộ I2C.

     3 bộ USART

	2 SPI
	
	1 CAN
	
	USB 2.0 full-speed interface

 - Kiểm tra lỗi CRC và 96-bit ID.

**2. Giới thiệu kit BluePill sử dụng STM32F103C8T6**

Kit phát triển STM32F103C8T6 Blue Pill ARM Cortex-M3 là loại được sử dụng để nghiên cứu về ARM nhiều nhất hiện nay. 

![image](https://github.com/minchangggg/Stm32/assets/125820144/da5c1792-a962-4398-af54-928af0681355)

**Thông số kỹ thuật**
+ Vi điều khiển: STM32F103C8T6.
+ Điện áp cấp 5VDC qua cổng Micro USB sẽ được chuyển đổi thành 3.3VDC qua IC nguồn và cấp cho Vi điều khiển chính.
+ Tích hợp sẵn thạch anh 8Mhz.
+ Tích hợp sẵn thạnh anh 32Khz cho các ứng dụng RTC.
+ Ra chân đầy đủ tất cả các GPIO và giao tiếp: CAN, I2C, SPI, UART, USB,...
+ Tích hợp Led trạng thái nguồn, Led PC13, Nút Reset.
+ Kích thước: 53.34 x 15.24mm.

### III, LÀM QUEN MỘT SỐ THAO TÁC IDE
<img width="500" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/827f61cb-0350-47c7-bace-fb6ad4b3fa56">

**Các bước tạo ra một project**

	+ Bước 1: Chọn Workspace (thư mục)
	+ Bước 2: Chọn vi điều khiển
	+ Bước 3: Cấu hình -> Sinh mã code
	+ Bước 4: Viết mã code, biên dịch
	+ Bước 5: Nạp chương trình/ debug

--------------------------------------------------------------------------------------------------------------------------------

<img width="350" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/283fa967-2ecc-48a5-99fc-f5a714e8b285">

## I, TÌM HIỂU CHUNG CHỨC NĂNG CỦA CÁC CHÂN STM32F103C8T6
![Bản sao của Blue-Pink Cute Class Schedule (4)](https://github.com/minchangggg/Stm32/assets/125820144/ec67b5bb-7804-4734-b973-d52d16a4908e)

### 1, Các chân không phải GPIO
#### a, Những nguồn cung cấp cho mạch gồm 
> Note: Những chân VDD (như VCC) và VSS (như GND) là những chân dùng để cấp nguồn

+ 3 cặp chân nguồn (VDD1, VSS1), (VDD2, VSS2), (VDD3, VSS3) là 3 cặp chân cấp nguồn cho phần mạch có tính năng digital.
+ 1 cặp chân nguồn (VDDA, VSSA) là cặp chân cấp nguồn cho phần mạch có tính năng analog, được thiết kế rời. Với mạch nguồn tạo ra điện áp phải là 1 mạch nguồn có chất lượng cao (có độ gợn Vr rất nhỏ) để phần analog hoạt động chính.
> Thông thường chúng ta không quan tâm nhiều đến tính năng analog, chỉ làm việc với digital => Người ta nối chung VDDA với VDD và VSSA với VSS.
>
>  Khi mà layout mạch, chú ý sơ đồ nguyên lý phải cấp nguồn hết tất cả 3 cặp chân nguồn digital (VDD1, VSS1), (VDD2, VSS2), (VDD3, VSS3) và cặp chân 			nguồn analog (VDDA, VSSA).
+ 1 Chân nguồn VBAT (Volt battery) dành riêng cho Real-time clock hoạt động (đếm giờ, phút, giây)
  
#### b, Chân NRST
+ là chân Reset (RST)
+ NRST là Tích cực mức 0 (tích cực thấp).
+ Khi chân Reset tích cực thấp, nghĩa là nó sẽ thực hiện chức năng Reset khi cấp mức logic 0.
> Note: Tìm hiểu về POR (power on reset)

#### c, Chân BOOT
+ là chân chọn vùng nhớ khởi động, chạy các chương trình khác nhau trong vi điều khiển (nên để mặc định, không tác động đến nó)

### 2, Các chân GPIO
- GPIO (GENERAL PURPOSE INPUT OUPUT) pin là các chân Input/ Ouput của vi điều khiển có thể được sử dụng với nhiều mục đích khác nhau -> Giúp vi điều khiển có thể giao tiếp với thế giới bên ngoài.
- Mỗi GPIO port có:
  + 32-bit configuration registers (Thanh ghi cấu hình): GPIOx_MODER, GPIOx_OTYPER, GPIOx_OSPEEDR, GPIOx_PUPDR
  + 32-bit data registers (Thanh ghi chứa dữ liệu ): GPIOx_IDR, GPIOx_ODR
  + 32-bit set/reset register (Thanh ghi điều khiển): GPIOx_BSRR 
  + 32-bit locking register:GPIOx_LCKR 
  + 32-bit alternate function selection registers (Thanh ghi cài đặt các chức năng khác dùng để thay thế): GPIOx_AFRH and GPIOx_AFRL

=> Các nhóm thanh ghi của một ngoại vi gồm:

	+ Thanh ghi cấu hình (VXL tác động đến các thanh ghi cấu hình của các ngoại vi -> cài đặt để nó thực hiện chức năng chúng ta mong muốn)
	+ Thanh ghi dữ liệu (Sau khi cấu hình, thì chúng ta sử dụng nó -> tác động vào dữ liệu của nó) 
	+ Thanh ghi trạng thái (Trạng thái của nó như thế nào, có sẵn sàng làm việc hay không)
=> `Bản chất của lập trình các ngoại vi của vi điều khiển` là `làm việc với các thanh ghi`:

	+ Đọc thanh ghi (r)
	+ Ghi thanh ghi (w)
 
## II, Output 
### 1, Sơ đồ nguyên lý
![Bản sao của Blue-Pink Cute Class Schedule (5)](https://github.com/minchangggg/Stm32/assets/125820144/b60a78f2-01f1-4c66-ab08-3ac52e267a0a)

### 2, Cấu hình thanh ghi dữ liệu của các Port

<img width="650" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/6aa28a55-c481-4085-83ab-a26225dbd6ad">

### 3, Phân tích cách hoạt động hàm HAL_GPIO_WritePin()

<img width="950" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/8a722b81-6da8-49d2-a417-72c06f088c46">

--------------------------------------------------------------------------------------------------------------------------------

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/816a62e2-cbc3-4178-ae2a-320140f0a67e">

### 4, Tính tối ưu của thanh ghi BSRR của vi xử lý 32 bit 
#### Muốn điều chỉnh trạng thái của 1 chân bất kì (VD PC13) t sẽ có 2 cách: tác động lên ODR và tác động lên BSRR
#### Cách 1: Tác động trực tiếp lên ODR (thanh ghi dữ liệu) mà không thông qua BSRR
VD: ODR ban đầu = 0x0000 -> muốn ODR 13 bằng 1 thì làm cách nào?

Cách giải: T sẽ dùng pp set bit (trong bitmask đã học để thực hiện): ODR = ODR | 0x 0010 0000 0000 0000

	Thực chất để sử dụng phương pháp này, mày phải thực hiện tuần tự 3 bước sau:
	+ Bước 1: READ -> vi xử lý phải đọc các giá trị của ODR lên vi xử lý (lưu trên thanh ghi của vi xử lý)
	+ Bước 2: MODIFY -> vi xử lý thực hiện toán tử bit OR của thanh ghi chứa giá trị ODR và 0x 0010 0000 0000 0000
	+ Bước 3: WRITE -> vi xử lý ghi lại giá trị đã được hiệu chỉnh về lại thanh ghi ODR

Lưu ý: 

+ Vi xử lý thường phải xử lý nhiều việc, có thể xảy ra 1 luồng ngắt interrupt -> làm gián đoạn 3 bước trên và làm thay đổi giá trị ODR -> xảy ra lỗi không mong muốn
+ T giả sử sau khi thực hiện B1, có 1 luồng ngắt đc gởi đến, giá trị ODR lúc này thực chất đã trở thành ob 1111 1111 1111 1111, tuy nhiên lúc này giá trị được lưu trữ trên vi xử lý vẫn là 0x 0000 0000 0000 0000.
+ Sau khi ngắt, vi xử lý tiếp tục làm việc với bước 2, rồi đến bước 3. Tuy nhiên lúc này giá trị đã xảy ra sai sót (nó làm việc vs bản sao ODR trước đó mà ko làm việc với giá trị mới nhất -> hệ thống ghi ngược lại kết quả làm việc với bản sao cũ đó -> chương trình chạy sai)

#### Cách 2: Tác động gián tiếp lên thanh ghi ODR thông qua thanh qua thanh ghi BSRR
VD:

![image](https://github.com/minchangggg/Stm32/assets/125820144/441cb9c1-1ed2-4a0f-9ec1-e09c312dec83)

+ Ở đây t chỉ đơn giản thực hiện phép gán -> chỉ cần 1 bước gán là xong, không bị mắc sai lầm như TH trên 
  
## I, Input
### 1, Mức điện áp ngõ vào

+ Mức logic 0 của 1 chân Input là từ -0.3V đến 1.164V
+ Mức logic 1 của 1 chân Input là từ 1.833V đến 4V

### 2, Sơ đồ nguyên lý

![Bản sao của Blue-Pink Cute Class Schedule (6)](https://github.com/minchangggg/Stm32/assets/125820144/58abc013-0e26-454c-a12c-e2398f612f30)

### 3, Phân tích các chế độ Input
#### a, Input floating
![image](https://github.com/minchangggg/Stm32/assets/125820144/b7a8c900-a564-4d7a-8a57-725af9e9b923)

> 1 chân Input ở chế độ Floating nếu **ngõ vào hở mạch** hoặc **trở kháng cao** => điện áp không xác định => giá trị logic của bit tương ứng trên thanh ghi ODR thay đổi ngẫu nhiên, không xác định, bị trôi nổi.

**Khi nào nên nên sử dụng Input floating?**

+ Khi **mạch bên ngoài nối với chân vi điều khiển luôn xác định với 2 mức logic cả 0 và 1** (vd như cảm biến đọc dữ liệu)
+ Không thuộc TH hở mạch hoặc trở kháng cao.
+ Không sử dụng 2 điện trở bên trong, giá trị Input phụ thuộc hoàn toàn vào mạch bên ngoài, mạch bên ngoài bằng 1 thì giá trị input bằng 1, mạch bên ngoài bằng 0 thì giá trị input bằng 0.
  
![image](https://github.com/minchangggg/Stm32/assets/125820144/91730a57-94f8-41ba-b96b-15629f2070a8)

+ VD1: (Nhấn nút thì xuống VSS -> mức 0) và (Không nhấn thì có trở kéo lên, lên nguồn -> mức 1)
  
![image](https://github.com/minchangggg/Stm32/assets/125820144/3765d798-9819-4b03-b6a8-0c58bd7e5105)
  
+ VD2: (Nhấn nút thì lên nguồn -> mức 1) và (Không nhấn nút, trở kéo xuống -> mức 0)

![image](https://github.com/minchangggg/Stm32/assets/125820144/fe278d7f-4a9d-4f9b-a897-8e3e0995e824)

#### b, Input pull-up
![image](https://github.com/minchangggg/Stm32/assets/125820144/5c92976c-d47f-40a4-adfa-1241a92393c4)

> Là chế độ sử dụng điện trở nội kéo lên (INTERNAL PULL UP RESISTOR)
> Điện trở kéo lên giúp chân Input có giá trị logic bằng 1 khi chân I/O hở mạch hoặc có trở kháng lớn

**Khi nào nên nên sử dụng Input pull-up?**

+ Khi mạch bên ngoài hoạt động thì tạo ra giá trị logic mức 0, còn lại thì không xác định
+ Cần điện trở pull-up hỗ trợ tạo ra logic mức 1
+ VD:
  
![image](https://github.com/minchangggg/Stm32/assets/125820144/791daa1c-be53-41b5-8e90-9bf4f433c756)

#### c, Input pull-down
![image](https://github.com/minchangggg/Stm32/assets/125820144/614d086b-cd45-4244-a483-fd07ea8eb5d1)

> Là chế độ sử dụng điện trở nội kéo xuống (INTERNAL PULL DOWN RESISTOR)
> Điện trở kéo lên giúp chân Input có giá trị logic bằng 0 khi chân I/O hở mạch hoặc có trở kháng lớn

**Khi nào nên nên sử dụng Input pull-down?**

+ Khi mạch bên ngoài hoạt động thì tạo ra giá trị logic mức 1, còn lại thì không xác định
+ Cần điện trở pull-up hỗ trợ tạo ra logic mức 0
+ VD:
  
![image](https://github.com/minchangggg/Stm32/assets/125820144/a54d6bff-3ecd-473b-b52c-57a9be1a5526)

--------------------------------------------------------------------------------------------------------------------------------

<img width="450" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/1048789d-b0f8-4d24-8631-0d09395df7e3">

## I. Vấn đề 1
### 1. Bài toán đặt ra
- Cấu hình và viết chương trình thực hiện: Ban đầu LED sáng, khi "nhấn thả" nút, LED đảo trạng thái. Ta thực hiện như sau:

<img width="450" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/bd7116f9-17da-4c72-93cf-f396cb01bae">

Nhận xét: giá trị của LEDSTATUS không ổn định -> có vấn đề ở phần mềm/ phần cứng 

### 2. Giải thích vấn đề
+ Với nút nhấn lý tưởng, nhấn nút lập tức về 0, thả ra lập tức về lại 1.
+ Tuy nhiên trong thực tế sẽ không như vậy, muốn ở mức logic 0 về mức logic 1, t sẽ mất 1 khoảng thời gian T-Low (khoảng thời gian nút nhấn giữ mức logic 0) với T-low bé nhất ở đơn vị mili giây.
  
![image](https://github.com/minchangggg/Stm32/assets/125820144/bce405dd-85b2-4b0f-adbc-ad2e5c91423c)

+ Tốc độ vi xử lý là 8MHz hay 1s sẽ thực hiện được 8 triệu lệnh (ở dạng mã máy). Giả sử 3 câu lệnh C trong vòng lặp phía trên tương đương 8 câu lệnh mã máy -> Trong 1s vòng lặp được thực hiện 1 triệu lần -> Trong 1ms vòng lặp được thực hiện 1 ngàn lần.
+ Vậy bản thân GPIO đã đảo hàng nghìn lần trong 1s (vì cứ ktra điều kiện, cứ mức logic nút nhấn bằng 0 thì đảo led) -> nếu may mắn, thì số lần đảo là số lẻ -> đúng yêu cầu bài toán.

### 3. Cách giải quyết vấn đề

![image](https://github.com/minchangggg/Stm32/assets/125820144/c5e33e14-12a5-4eaf-8031-ed0fe8e2e951)

## II. Vấn đề 2 và phương pháp Polling
### 1. Bài toán đặt ra
- Cấu hình và viết chương trình thực hiện: Ban đầu LED sáng, khi "nhấn thả" nút, LED đảo mode: Từ 1->2, từ 2->1.
- Trong đó:
  
	mode1: LED nhấp nháy 500ms

	mode2: LED nhấp nháy 1000ms

### 2. Hoạt động của cơ chế Polling
<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/2d6a9de1-c36e-4216-87e2-6c916e53eec9">

### 3. Lưu đồ thuật toán phương pháp Polling
<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/c15c579a-5cf9-497c-8081-d6531999cb1f">

--------------------------------------------------------------------------------------------------------------------------------

<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/eda3912d-28fb-42ac-a412-7a1b2ba58c9f">

### Kiến trúc cơ bản của Vi điều khiển
<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/7370bc6c-e0a4-4253-9663-6ff45b38a659">

## I, Exception
- Là một điều kiện làm thay đổi thứ tự thực hiện bình thường của một chương trình.
- Gồm 2 loại:
  
    + System Exceptions (hầu như là lỗi, không mong muốn, đến từ bên trong vi xử lý)
    + Interrupts (là tính năng, chức năng mong muốn, từ bên ngoài các ngoại vi vi điều khiển gửi đến vi xử lý)
      
## II, Interrupt
### 1. Tổng quan về Interrupt

<img width="454" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/75ab877c-5deb-43c3-8934-134487fa1d0f">

	+ Các tín hiệu Interrupt được tạo ra bởi các ngoại vi của vi điều khiển (INPUT, ADC, TIMER, UART..) và được gửi đến vi xử lý. Các tín hiệu này được gọi là Interrupt Request (IRQ).
	+ Vi xử lý tạm ngưng thực thi chương trình bình thường để thực thi một đoạn chương trình đặc biệt là Interrupt Service Routine (ISR) – Interrupt Handler - Callback function (STM32).

- **Các tín hiệu yêu cầu Interrupt (IRQ) được gửi vào khối NVIC của vi xử lý**
  
a. Cơ chế hoạt động của cơ chế Interrupt

<img width="407" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/d53cd2bc-ddf4-4cee-8d45-dd9d48fc473d">

b. Lưu đồ thuật toán Interrupt

<img width="379" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/530f410c-b0b0-424e-ab9e-85ce5cdcf3b8">

c. NVIC (Nested Vector Interrupt Controller) – Bộ xử lý ngắt lồng nhau

> https://www.laptrinhdientu.com/2021/09/Core8.html

	+ Là một ngoại vi của lõi vi xử lý ARM-Cortex M
	+ Cấu hình enable/disable các ngắt
	+ Cấu hình độ ưu tiên (priority) các ngắt

### 2. Phân tích về quá trình stacking và unstacking khi vào và thoát ngắt

![Bản sao của Blue-Pink Cute Class Schedule (7)](https://github.com/minchangggg/Stm32/assets/125820144/13c6847b-301d-4b08-8964-60bb0292b32c)

+ Các thanh ghi từ R0 đến R12 (13 thanh ghi) là những thanh ghi được sử dụng với nhiều mục đích chung như lưu trữ dữ liệu của các phép tính toán, lưu trữ địa chỉ… Tất cả những thanh ghi này đều có độ rộng 32bit.
+ Thanh ghi R13 được gọi là StackPointer (SP). Thanh ghi này được sử dụng để theo dõi bộ nhớ stack. Và bên cạnh thanh ghi R13, có 2 thêm 2 thanh ghi nữa được chỉ ra trên hình là PSP (Processor Stack Pointer) và MSP (Main Stack pointer), những thanh ghi này được gọi là Banked version of SP.
+ Thanh ghi R14 được gọi là Link Register (LR). Nó lưu thông tin của subroutines, function call và exceptions.
+ Thanh ghi R15 là thanh ghi Program Counter(PC). Thanh ghi này chứa địa chỉ câu lệnh sẽ được thực thi. Khi reset, vi xử lý sẽ nạp thanh ghi PC với giá trị reset là 0x00000004.
+ Ngoài các thanh ghi được sử dụng với nhiều mục đích chung (R0-R12), SP, LR, PC thì vi xử lý ARM Cortex-M4 còn có 5 thanh ghi đặc biệt. Trong đó, thanh ghi Program status (PSR) bao gồm các thanh ghi cung cấp thông tin trạng thái của chương trình Application với các cờ N,Z,C,V,Q, chương trình Interrupt và các thanh ghi liên quan đến stack của vi xử lý. Những thanh ghi còn lại, các bạn tìm đọc trong tài liệu đã được đề cập đến ở phần trên.

### 3. Phân tích về các trường hợp độ ưu tiên và trạng thái của các ngắt.
> https://tapit.vn/cau-hinh-uu-tien-ngat-vi-dieu-khien-stm32-tren-cubemx/
 
 <img width="" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/cb915b9a-0e6b-45ad-b358-bbe1cbd53a79">

 <img width="500" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/a4190936-289a-44d9-97c1-085d83b3bf43">

- Trong thực tế, có những trường hợp sau: 

	- Chỉ 1 ngắt yêu cầu => chắc chắn đc phục vụ. 
	- 1 ngắt đang thực thi thì xuất hiện 1 yêu cầu ngắt khác (Ngắt EXTI đang được thực thi thì có yêu cầu ngắt từ System Timer).
  
		+ Yêu cầu ngắt mới có độ ưu tiên thấp hơn ngắt đang thực thi => Phải chờ (ở trạng thái Pending) 
		+ Yêu cầu ngắt mới có độ ưu tiên bằng ngắt đang thực thi => Phải chờ (ở trạng thái Pending)
		+ Yêu cầu ngắt mới có độ ưu tiên cao hơn ngắt đang thực thi => Chiếm dụng ngắt (thực thi ngắt mới,trạng thái active, ngắt cũ sẽ ở trạng thái inactive )
> Các trạng thái:
> 
> pending: Chưa được chấp nhận xử lý, đang chờ
> 
> active: Đang được phục vụ, ISR đang được thực thi
> 
> inactive: Đã được chấp nhận xử lý rồi, đã thực thi rồi nhưng bị giành quyền bởi 1 ngắt khác có độ ưu tiên cao hơn. 

![image](https://github.com/minchangggg/Stm32/assets/125820144/5a031478-7c14-4647-ab06-6e983d114584)

- Trên MCU STM32F103C8T6 có hai loại ưu tiên ngắt khác nhau đó là Preemption Priorities và Sub Priorities:

		+ Mặc định thì ngắt nào có Preemtion Priority cao hơn thì sẽ được thực hiện trước.
		+ Khi nào 2 ngắt có cùng một mức Preemption Priority thì ngắt nào có Sub Priority cao hơn thì ngắt đó được thực hiện trước.
		+ Còn trường hợp 2 ngắt có cùng mức Preemption và Sub Priority luôn thì ngắt nào đến trước được thực hiện trước

## II, External Interrupt
+ Cấu hình chân EXTI
+ Cấu hình sườn kích hoạt ngắt
+ Cấu hình trở kéo nếu cần
+ Cấu hình cho phép ngắt tại NVIC
+ Hàm phục vụ ngắt callback
+ Debug đặt breakpoint để kiểm tra đã vào được hàm xử lý ngắt.

![image](https://github.com/minchangggg/Stm32/assets/125820144/deed445c-0f8b-40ee-a668-7be31b788bd6)

> void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin):
>
> Khi có sự kiện ngắt nút nhấn EXTI thì hàm này sẽ được gọi. Hàm HAL_GPIO_EXTI_Callback được tạo sẵn khi sử dụng EXTI. GPIO_Pin đối số chính là biến để kiểm tra xem chân nào đang được ngắt.
--------------------------------------------------------------------------------------------------------------------------------

![image](https://github.com/minchangggg/Stm32/assets/125820144/8b19da2d-0974-4e4f-95ab-86522b101a41)

> https://tapit.vn/hieu-va-lap-trinh-ngat-ngoai-stm32f411/

EXTI (External Interupts) tạm dịch là ngắt ngoài hay ngắt sự kiện bên ngoài. Ngắt EXTI được kích hoạt khi có sự kiện từ bên ngoài tác động vào chân EXTI đó, tùy theo sự kiện đó có phù hợp với điều kiện ngắt không thì ngắt ngoài mới sảy ra.

## I, Các chức năng chính của khối External Interrupt
![image](https://github.com/minchangggg/Stm32/assets/125820144/850adfec-310e-47ff-940f-a6c62141bead)

+ Khối External Interrupt bao gồm 23 bộ phát hiện sườn để tạo ra yêu cầu ngắt, người sử dụng có thể cấu hình lựa chọn sườn ngắt (sườn lên, sườn xuống hoặc cả 2) để kích hoạt ngắt.
+ Mỗi line ngắt đều có thể cấu hình cho phép tạo yêu cầu ngắt hoặc không một cách độc lập. Khi có yêu cầu ngắt thì người sử dụng có thể giám sát được trạng thái của line ngắt.

## II> Hiểu về Line Interrupt
> Mạch mux (mạch chọn kênh) là gì ?

+ Vi điều khiển STM32F411VET6 trên board STM32F411DISCOVERY có 81 chân GPIO được chia thành 16 line ngắt ngoài theo sơ đồ bên dưới.
+ Mỗi line ngắt là tập hợp các chân có cùng thứ tự trên các Port khác nhau.
+ Ví dụ line 0 (EXTI0) là tập hợp các chân PA0, PB0, PC0, PD0, PE0 và PH0.
  
## III> Đặt vấn đề
### 1. Bài toán
Viết chương trình đảo led dùng ngắt ngoài
### 2. Bài giải
![image](https://github.com/minchangggg/Stm32/assets/125820144/9bb25c38-1107-4613-bb4e-173237cc3d23)

### 3. Tại sao không dùng hàm HAL_Delay mà lại dùng `for(int i = 0; i < 100000; i++);`
#### a. Tại sao sử dụng HAL_Delay ở chương trình phục vụ ngắt thì vi điều khiển bị treo?
> https://tapit.vn/tim-hieu-system-timer-ngat-systick-va-su-dung-hal_delay-trong-trinh-phuc-vu-ngat-vdk-stm32/

![image](https://github.com/minchangggg/Stm32/assets/125820144/b4101ba3-faf5-4900-9840-6cd48b349a6a)

– Để trả lời cho câu hỏi trên, chúng ta cùng phân tích hình ảnh minh họa luồng thực thi của vi điều khiển ở trên. Giả sử vi xử lý sẽ xử lý 2 tín hiệu yêu cầu ngắt: một đến từ system timer và một đến từ ngoại vi bất kỳ, 2 tín hiệu này có cùng độ ưu tiên hoặc độ ưu tiên của tín hiệu yêu cầu ngắt Systick (đến từ hàm HAL_Delay) nhỏ hơn độ ưu tiên của tín hiệu yêu cầu ngắt (đến từ hàm HAL_GPIO_EXTI_Callback) còn lại. 
– Cứ mỗi 1 mili giây thì vi xử lý sẽ thực hiện hàm SysTick_Handler một lần và giá trị uwTick sẽ được tăng thêm một đơn vị. Giả sử có một tín hiệu yêu cầu ngắt đến từ một ngoại vi bên ngoài và chương trình phục vụ ngắt của ngoại vi này (Peripheral_Handler) có gọi hàm HAL_Delay, lúc này vi xử lý thực hiện các câu lệnh trong Peripheral_Handler cho đến khi gặp câu lệnh HAL_Delay(x); //delay x mili giay. Vì tín hiệu yêu cầu ngắt của ngoại vi này đang được xử lý nên tín hiệu yêu cầu ngắt Systick đến sau sẽ được đưa vào trạng thái chờ (pending), hàm SysTick_Handler chưa được thực hiện dẫn đến giá trị uwTick không đổi, vi xử lý sẽ thực hiện lặp vô tận trong câu lệnh while của hàm HAL_Delay, điều này dẫn đến chương trình bị treo tại vòng lặp while này. 
– Xem ví dụ dưới đây để hiểu vì sao vi xử lý thực hiện lặp vô tận trong câu lệnh while:

![image](https://github.com/minchangggg/Stm32/assets/125820144/3661ce60-16de-427c-a373-924374598d3e)

	+ Đầu tiên, biến tickstart chứa giá trị uwTick hiện tại được trả về từ hàm HAL_GetTick.
	+ Vì SysTick_Handler chưa được thực hiện dẫn đến giá trị uwTick không đổi, giá trị trả về của HAL_GetTick trong điều kiện while bằng giá trị của tickstart ban đầu, dẫn đến kết quả của HAL_GetTick() – tickstart luôn bé hơn wait, dẫn đến vi điều khiển thực hiện lặp vô hạn trong vòng lặp while này.

#### b. Vậy làm thế nào để có thể sử dụng HAL_Delay trong các chương trình phục ngắt?
Các bạn phải thực hiện điều chỉnh độ ưu tiên của ngắt SysTick cao hơn so với các ngắt ngoại vi đó. Ví dụ:

![image](https://github.com/minchangggg/Stm32/assets/125820144/1f7781e4-7a83-41bb-a9e1-953f22ec614c)

Lưu ý: Các bạn nên xem xét sử dụng hàm HAL_Delay trong các chương trình phục vụ ngắt vào các trường hợp cần thiết vì các chương trình phục vụ ngắt nên được xử lý tức thời và càng ngắn gọn càng tốt, tránh ảnh hưởng đến các ngắt đến sau, không đáp ứng được tính realtime của hệ thống dẫn đến bỏ lỡ sự kiện hoặc mất dữ liệu. 

### 4. Tại sao cần phải dùng `EXTI->PR |= GPIO_PIN_0;` để xóa pending ngắt
**Để tránh tình trạng nhảy vào hàm ngắt nhiều lần khi nhấn nút.**

![image](https://github.com/minchangggg/Stm32/assets/125820144/821ae480-11e7-4c26-a973-26f5e1a25aa0)

+ Trong thực tế, ta sẽ gặp trường hợp rung phím, t sẽ gặp nhiều hơn 1 sườn xuống
+ Ở lần nhấn nút đầu tiên, sinh ra yêu cầu ngắt và bit pending lúc này = 1 -> vi xử lý thực hiện xử lý yêu cầu ngắt, thực hiện các hàm của thư viện, trong đó có việc xóa cờ ngắt hay bit pending = 0.
+ Tuy nhiên trong quá trình thực hiện việc delay, vẫn tiếp tục có sườn xuống, mạch vẫn phát hiện sườn -> đưa bit pending lên lại = 1, tạo ra thêm yêu cầu ngắt ở sườn số 2 này với độ ưu tiên ngang bằng với yêu cầu ngắt ở sườn thứ nhất -> ngắt ở sườn thứ 2 sẽ phải chờ, đợi đến hết delay ở sườn thứ nhất.
