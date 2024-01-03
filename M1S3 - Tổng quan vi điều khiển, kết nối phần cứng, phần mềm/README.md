> https://www.facebook.com/groups/1012900173187521/permalink/1033816171095921/

### TÓM TẮT
- Phân tích cấu trúc vi điều khiển, vi xử lý, bộ nhớ, ngoại vi, hệ thống bus dựa vào sơ đồ Block Diagram dựa vào tài liệu Datasheet của vi điều khiển. So sánh tương đương với máy tính laptop để dễ hiểu.
- Vi điều khiển lõi ARM là vi điều khiển có vi xử lý ARM (loại ARM Cortex M), các hãng vi điều khiển sẽ mua thiết kế của vi xử lý ARM và thiết kế thêm bộ nhớ, ngoại vi..vv.. để tạo thành các dòng vi điều khiển của họ với rất nhiều tùy chọn như ít chân, nhiều chân, ít ngoại vi, nhiều ngoại vi, ít hay nhiều bộ nhớ,...vv..
- Một số từ khóa đã được nhắc đến: datasheet, block diagram, MCU, CPU/Processor.
- Giới thiệu các bước thực hiện, giao diện trên phần mềm STM32CubeIDE:
  
                + Tạo/ chọn workspace: Là nơi lưu trữ các project có sự liên quan với nhau như các project trong khóa học/ trong 1 dự án.
                + Chọn vi điều khiển
                + Cấu hình vi điều khiển và sinh mã code
                + Dev Code, biên dịch code.
                + Nạp chương trình vào thiết bị
  
- Hướng dẫn kiểm tra driver, là trung gian đển phần mềm STM32CubeIDE có thể làm việc được với phần cứng thông qua kết nối cổng USB, kiểm tra tại trình Device Manager.
- Lớp thực hành tạo chương trình đầu tiên, cấu hình, nạp chương trình thử nghiệm điều khiển LED ON, LED OFF, nhấp nháy LED.

### TÀI LIỆU
- Video ghi lại: https://youtu.be/4ry1n5DR4yI
- Slide: (Đã gửi ở M1S1)
- Trang thông tin kit STM32F103 BluePill: https://stm32-base.org/boards/STM32F103C8T6-Blue-Pill.html
- Datasheet STM32F103C8T6: https://www.st.com/resource/en/datasheet/stm32f103c8.pdf

### BÀI TẬP
1, Vi điều khiển của bạn có tổng cộng bao nhiêu Pin?

2, Có bao nhiêu I/O Pin?

3, Được chia làm bao nhiêu Port?

4, Mỗi Port có bao nhiêu Pin?

5, Liệt kê những Pin còn lại không phải GPIO?

6, Điện áp nguồn hoạt động của vi điều khiển là bao nhiêu?

7, Bộ nhớ Flash, SRAM bao nhiêu?

8, Tốc độ tối đa của vi xử lý là bao nhiêu?

9, Với 1 chân Input thì điện áp mức 0 (LOW) là bao nhiêu vol? Mức 1 (HIGH) là bao nhiêu vol?

10, Với 1 chân Output thì điện áp mức 0 (LOW) là bao nhiêu vol? Mức 1 (HIGH) là bao nhiêu vol?

11, Dòng điện tối đa vào /ra 1 chân GPIO là bao nhiêu mA?

12, Dòng điện tối đa vào 1 chân nguồn là bao nhiêu?

13, Dòng điện tối đa vào vi điều khiển là bao nhiêu?
