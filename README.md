<img width="450" alt="image" src="https://github.com/minchangggg/Stm32/assets/125820144/5771092c-dfb1-4156-8d77-34eebeda5214">

https://stm32-base.org/boards/STM32F103C8T6-Blue-Pill.html

### I. Giới thiệu tổng quan

- STM32F103C8T6 là vi điều khiển **32bit**, thuộc họ F1 của dòng chip STM32 hãng ST.

- Lõi **ARM COTEX M3**.

- Tốc độ tối đa **72Mhz**. 

- Bộ nhớ :

	64 kbytes bộ nhớ Flash

	20 kbytes SRAM     

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

### II. Giới thiệu về kit STM32F103C8T6

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
﻿
