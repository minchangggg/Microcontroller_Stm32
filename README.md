# M1S1: TỔNG QUAN CHƯƠNG TRÌNH HỌC
--------------------------------------------------------------------------------------------------------------------------------
# M1S2: ÔN TẬP NGÔN NGỮ LẬP TRÌNH C
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
**1. Ép kiểu**

**2. Phép tăng giảm giá trị;**

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

**3. Phép toán số học**

**4.  Phép toán quan hệ**

<img width="230" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/1cbfd42a-4b43-4f16-bcb0-cb8aeab336d9">

`*Note 1: Đừng quên dấu "=" trong phép so sánh Bằng nhé, nếu không nó sẽ trở thành phép gán. Đây là một lỗi sai rất cơ bản.*`

<img width="800" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/83dd4693-ef94-4b34-a602-0915dcbedab9">

`*Note 2: Không bao giờ so sánh hai giá trị dấu chấm động bằng nhau hay không. Hầu như luôn luôn có sự khác biệt nhỏ giữa hai số chấm động. Cách phổ biến để so sánh 2 số chấm động là tính khoảng cách giữa 2 số đó, nếu khoảng cách đó là rất nhỏ thì ta cho là bằng nhau. Giá trị dùng để so sánh với khoảng cách đó thường được gọi là epsilon.*

<img width="500" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/ed37a163-3ee3-48a6-a3b1-97c79465e08a">

**5.  Phép toán logic**

**6. Phép toán BIT** 

> https://byjus.com/gate/bitwise-operators-in-c/
> https://docs.google.com/presentation/d/1KfwNh_fN8Vz5bGIyepeN-2M-xpQWaD-g/edit?fbclid=IwAR1J8oPW3D5gVe2nP-abG-FlBqgeGh0chaNUwuUYsFaCuXEGLtlGYRInHKY#slide=id.p35

**7.  Phép gán**

**8.  Phép toán điền kiện**

## M1S3
### I, Một số khái niệm cơ bản và Cấu trúc của 1 con vi điều khiển

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

## M2S1

### I, TÌM HIỂU CHUNG CHỨC NĂNG CỦA CÁC CHÂN  STM32F103C8T6
![Bản sao của Blue-Pink Cute Class Schedule (4)](https://github.com/minchangggg/Stm32/assets/125820144/ec67b5bb-7804-4734-b973-d52d16a4908e)

**1, Các chân không phải GPIO**

a, Những nguồn cung cấp cho mạch gồm 
> Note: Những chân VDD (như VCC) và VSS (như GND) là những chân dùng để cấp nguồn
+ 3 cặp chân nguồn (VDD1, VSS1), (VDD2, VSS2), (VDD3, VSS3) là 3 cặp chân cấp nguồn cho phần mạch có tính năng digital.
+ 1 cặp chân nguồn (VDDA, VSSA) là cặp chân cấp nguồn cho phần mạch có tính năng analog, được thiết kế rời. Với mạch nguồn tạo ra điện áp phải là 1 mạch nguồn có chất lượng cao (có độ gợn Vr rất nhỏ) để phần analog hoạt động chính.
> Thông thường chúng ta không quan tâm nhiều đến tính năng analog, chỉ làm việc với digital => Người ta nối chung VDDA với VDD và VSSA với VSS.
>
>  Khi mà layout mạch, chú ý sơ đồ nguyên lý phải cấp nguồn hết tất cả 3 cặp chân nguồn digital (VDD1, VSS1), (VDD2, VSS2), (VDD3, VSS3) và cặp chân 			nguồn analog (VDDA, VSSA).
+ 1 Chân nguồn VBAT (Volt battery) dành riêng cho Real-time clock hoạt động (đếm giờ, phút, giây)
  
b, Chân NRST
+ là chân Reset (RST)
+ NRST là Tích cực mức 0 (tích cực thấp).
+ Khi chân Reset tích cực thấp, nghĩa là nó sẽ thực hiện chức năng Reset khi cấp mức logic 0.
> Note: Tìm hiểu về POR (power on reset)

c, Chân BOOT
+ là chân chọn vùng nhớ khởi động, chạy các chương trình khác nhau trong vi điều khiển (nên để mặc định, không tác động đến nó)

**2, Các chân GPIO**

- GPIO (GENERAL PURPOSE INPUT OUPUT) pin là các chân Input/ Ouput của vi điều khiển có thể được sử dụng với nhiều mục đích khác nhau -> Giúp vi điều khiển có thể giao tiếp với thế giới bên ngoài.
- Mỗi GPIO port có:
  + 32-bit configuration registers (Thanh ghi cấu hình): GPIOx_MODER, GPIOx_OTYPER, GPIOx_OSPEEDR, GPIOx_PUPDR
  + 32-bit data registers (Thanh ghi chứa dữ ): GPIOx_IDR, GPIOx_ODR
  + 32-bit set/reset register (Thanh ghi điều khiển): GPIOx_BSRR 
  + 32-bit locking register:GPIOx_LCKR 
  + 32-bit alternate function selection registers (Thanh ghi cài đặt các chức năng khác dùng để thay thế): GPIOx_AFRH and GPIOx_AFRL

=> Các nhóm thanh ghi của một ngoại vi gồm:

	+ Thanh ghi cấu hình (VXL tác động đến các thanh ghi cấu hình của các ngoại vi -> cài đặt để nó thực hiện chức năng chúng ta mong muốn)
	+ Thanh ghi dữ liệu (Sau khi cấu hình, thì chúng ta sử dụng nó -> tác động vào dữ liệu của nó) 
	+ Thanh ghi trạng thái (Trạng thái của nó như thế nào, có sẵn sàng làm việc hay không)
=> Bản chất của lập trình các ngoại vi của vi điều khiển là làm việc với các thanh ghi:

	+ Đọc thanh ghi (r)
	+ Ghi thanh ghi (w)
### II, Output 
**1, Sơ đồ nguyên lý**

![Bản sao của Blue-Pink Cute Class Schedule (5)](https://github.com/minchangggg/Stm32/assets/125820144/b60a78f2-01f1-4c66-ab08-3ac52e267a0a)

**2, Cấu hình thanh ghi dữ liệu của các Port**

<img width="650" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/6aa28a55-c481-4085-83ab-a26225dbd6ad">

**3, Phân tích cách hoạt động hàm HAL_GPIO_WritePin()**

<img width="950" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/8a722b81-6da8-49d2-a417-72c06f088c46">

## M2S2
### I, Input
**1, Mức điện áp ngõ vào**

+ Mức logic 0 của 1 chân Input là từ -0.3V đến 1.164V
+ Mức logic 1 của 1 chân Input là từ 1.833V đến 4V

**2, Sơ đồ nguyên lý**

![Bản sao của Blue-Pink Cute Class Schedule (6)](https://github.com/minchangggg/Stm32/assets/125820144/58abc013-0e26-454c-a12c-e2398f612f30)


**, Phân tích các chế độ Input**

a, Input floating

+ 1 chân Input ở chế độ Floating nếu ngõ vào hở mạch hoặc trở kháng cao thì giá trị logic của bit tương ứng trên thanh ghi ODR thay đổi ngẫu nhiên
+ Khi nào nên nên sử dụng Input floating khi mạch bên ngoài nối với chân vi điều khiển luôn xác định với 2 mức logic cả 0 và 1 (vd như cảm biến đọc dữ liệu) chứ khong thuộc TH hở mạch hoặc trở kháng cao.

b, Input pull-up

c, Input pull-down

## M2S3 - GPIO, Button, Debug, Polling

### Kiến trúc cơ bản của Vi điều khiển
<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/7370bc6c-e0a4-4253-9663-6ff45b38a659">

### Hoạt động của cơ chế Polling
<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/2d6a9de1-c36e-4216-87e2-6c916e53eec9">

### Lưu đồ thuật toán phương pháp Polling
<img width="400" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/c15c579a-5cf9-497c-8081-d6531999cb1f">

## M3S1 - Exception, External Interrupt
### I, Exception
- Là một điều kiện làm thay đổi thứ tự thực hiện bình thường của một chương trình.
- Gồm 2 loại:
  
    + System Exceptions (hầu như là lỗi, không mong muốn, đến từ bên trong vi xử lý)
    + Interrupts (là tính năng, chức năng mong muốn, từ bên ngoài các ngoại vi vi điều khiển gửi đến vi xử lý)
      
### II, Interrupt
**1. Tổng quan về Interrupt**

<img width="454" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/75ab877c-5deb-43c3-8934-134487fa1d0f">

	+ Các tín hiệu Interrupt được tạo ra bởi các ngoại vi của vi điều khiển (INPUT, ADC, TIMER, UART..) và được gửi đến vi xử lý. Các tín hiệu này được gọi là Interrupt Request (IRQ).
	+ Vi xử lý tạm ngưng thực thi chương trình bình thường để thực thi một đoạn chương trình đặc biệt là Interrupt Service Routine (ISR) – Interrupt Handler - Callback function (STM32).

- **Các tín hiệu yêu cầu Interrupt (IRQ) được gửi vào khối NVIC của vi xử lý**
  
a, Cơ chế hoạt động của cơ chế Interrupt

<img width="407" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/d53cd2bc-ddf4-4cee-8d45-dd9d48fc473d">

b, Lưu đồ thuật toán Interrupt

<img width="379" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/530f410c-b0b0-424e-ab9e-85ce5cdcf3b8">

c, NVIC (Nested VIC) – Bộ xử lý ngắt lồng nhau

	+ Là một ngoại vi của lõi vi xử lý ARM-Cortex M
	+ Cấu hình enable/disable các ngắt
	+ Cấu hình độ ưu tiên (priority) các ngắt

**2. Phân tích về quá trình stacking và unstacking khi vào và thoát ngắt**

![Bản sao của Blue-Pink Cute Class Schedule (7)](https://github.com/minchangggg/Stm32/assets/125820144/13c6847b-301d-4b08-8964-60bb0292b32c)

+ Các thanh ghi từ R0 đến R12 (13 thanh ghi) là những thanh ghi được sử dụng với nhiều mục đích chung như lưu trữ dữ liệu của các phép tính toán, lưu trữ địa chỉ… Tất cả những thanh ghi này đều có độ rộng 32bit.
+ Thanh ghi R13 được gọi là StackPointer (SP). Thanh ghi này được sử dụng để theo dõi bộ nhớ stack. Và bên cạnh thanh ghi R13, có 2 thêm 2 thanh ghi nữa được chỉ ra trên hình là PSP (Processor Stack Pointer) và MSP (Main Stack pointer), những thanh ghi này được gọi là Banked version of SP.
+ Thanh ghi R14 được gọi là Link Register (LR). Nó lưu thông tin của subroutines, function call và exceptions.
+ Thanh ghi R15 là thanh ghi Program Counter(PC). Thanh ghi này chứa địa chỉ câu lệnh sẽ được thực thi. Khi reset, vi xử lý sẽ nạp thanh ghi PC với giá trị reset là 0x00000004.
+ Ngoài các thanh ghi được sử dụng với nhiều mục đích chung (R0-R12), SP, LR, PC thì vi xử lý ARM Cortex-M4 còn có 5 thanh ghi đặc biệt. Trong đó, thanh ghi Program status (PSR) bao gồm các thanh ghi cung cấp thông tin trạng thái của chương trình Application với các cờ N,Z,C,V,Q, chương trình Interrupt và các thanh ghi liên quan đến stack của vi xử lý. Những thanh ghi còn lại, các bạn tìm đọc trong tài liệu đã được đề cập đến ở phần trên.

**3. Phân tích về các trường hợp độ ưu tiên và trạng thái của các ngắt.**
 
 <img width="" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/cb915b9a-0e6b-45ad-b358-bbe1cbd53a79">

 <img width="500" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/a4190936-289a-44d9-97c1-085d83b3bf43">

- Trong thực tế, có những trường hợp sau: 

+ Chỉ 1 ngắt yêu cầu => chắc chắn đc phục vụ. 
+ 1 ngắt đang thực thi thì xuất hiện 1 yêu cầu ngắt khác (Ngắt EXTI đang được thực thi thì có yêu cầu ngắt từ System Timer).
  
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

### II, External Interrupt
+ Cấu hình chân EXTI
+ Cấu hình sườn kích hoạt ngắt
+ Cấu hình trở kéo nếu cần
+ Cấu hình cho phép ngắt tại NVIC
+ Hàm phục vụ ngắt callback
+ Debug đặt breakpoint để kiểm tra đã vào được hàm xử lý ngắt.

![image](https://github.com/minchangggg/Stm32/assets/125820144/deed445c-0f8b-40ee-a668-7be31b788bd6)
