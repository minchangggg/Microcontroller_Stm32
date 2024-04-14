> https://www.facebook.com/groups/1012900173187521/permalink/1074214697056068/

### TÓM TẮT 
- Một giao thức truyền thông nối tiếp 2 chiều đồng bộ được sử dụng rất phổ biến với 1 số đặc điểm sau:

1. Giao tiếp theo mô hình master - slaves. Một master có thể giao tiếp được với nhiều master thông qua bus I2C. Master sẽ là bên điều khiển giao tiếp.
2. Giao tiếp I2C sử dụng 2 dây là SDA (Serial Data) và SCL (Serial Clock).
3. Các thiết bị slave trên bus I2C phải được phân biệt với nhau qua địa chỉ (07bit địa chỉ)
4. Trong mỗi thiết bị Slave thường có một bảng đồ các thanh ghi để thực hiện cấu hình, chứa dữ liệu, trạng thái. Các thanh ghi bên trong slave cũng được phân biệt với nhau bởi địa chỉ.
5. Có 2 thủ tục - cách thức làm việc trong giao tiếp I2C:
    - Master muốn gửi / ghi dữ liệu cho Slave: Phương thức này thường được sử dụng để cấu hình thiết bị slave trước khi sử dụng hoặc thay đổi cấu hình trong khi sử dụng, hoặc được sử dụng để điều khiển hoạt động của slave. ..vv...
    - Master muốn đọc/ nhận dữ liệu từ Slave: Phương thức này được sử dụng để yêu cầu dữ liệu từ slave. Thường được sử dụng để đọc trạng thái hoạt động của slave, hoặc dữ liệu của slave trong trường hợp slave là một cảm biến. ..vv..
6. Các bước để khởi tạo một giao tiếp, truyền địa chỉ slave, bit điều khiển R/W, địa chỉ thanh ghi, dữ liệu và các bit xác thực như hình và tài liệu đính kèm
Lời khuyên: Ôn lại thêm bài UART và có những so sánh với I2C.
- Trong buổi học mình cũng đã có chia sẻ với mọi người thông tin của IC DS1307, một IC chức năng thời gian thực. Mọi người đã xác định được địa chỉ của IC, địa chỉ và chức năng của các thanh ghi bên trong IC. Mọi người đã biết cách IC lưu trữ thời gian và viết được hàm chuyển đổi BCD2DEC và DEC2BCD.

### TÀI LIỆU
+ Video ghi lại buổi học: https://youtu.be/vWEX-9h_By8
+ Tài liệu tham khảo chính: https://www.ti.com/lit/an/slva704/slva704.pdf
+ Nên tham khảo thêm:
  
1. Giao thức I2C và giao tiếp với cảm biến nhiệt hồng ngoại MLX90614
https://tapit.vn/giao-thuc-i2c-va-giao-tiep-voi-cam-bien-nhiet-hong-ngoai-mlx90614/
2. Giao tiếp I2C trên STM32F103 với module RTC DS3231
https://tapit.vn/giao-tiep-i2c-tren-stm32f103-voi-module-rtc-ds3131/

### BÀI TẬP
Yêu cầu thực hành: Viết được chương trình giao tiếp được với Module DS1302/ DS1307/ DS3231 để thực hiện chức năng cơ bản sau: Cài đặt thời gian cho IC (trong main, trước while 1), định kì 500ms đọc thanh ghi giây và chuyển đổi về mã decimal, gán cho 1 biến toàn cục. Debug để xem, sau đó phát triển thêm mã code để in dữ liệu lên UART hercules.
