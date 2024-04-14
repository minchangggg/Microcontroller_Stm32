> https://www.facebook.com/groups/1012900173187521/permalink/1069145910896280/

### TÓM TẮT 
Trong buổi chúng ta đã đi qua các nội dung sau:
1. Ôn tập lại tổng quan về giao tiếp UART.
2. Thực hiện khởi tạo Project UART RX IT. Phân tích hàm HAL_UART_Receive_IT và hàm HAL_UART_RxCpltCallback liên quan. Debug nhận 1 byte dữ liệu.
3. Phát triển mã code nhận 1 chuỗi, 1 câu lệnh dựa vào kí tự kết thúc câu qua các bước: Lưu byte nhận được vào mảng, tăng chỉ số mảng nếu kí tự nhận được không phải là kí tự kết thúc. Kiểm tra chỉ số mảng, nếu quá kích cỡ bộ đệm thì reset chỉ số mảng. Nếu gặp kí tự kết thúc câu thì xử lý chuổi, xóa bộ đệm và reset chỉ số mảng.
4. Lưu ý nguy cơ tràn mảng khi sử dụng. Trình biên dịch không báo lỗi này.
   
### TÀI LIỆU
+ Video ghi lại: https://youtu.be/HqpJgwPMD_k
+ Slide: Đã gửi

### BÀI TẬP
- Viết chương trình thực hiện: Khi khởi động, LED sáng
+ Gửi chuỗi "LEDON" - sáng đèn LED trên board mạch thực hành
+ Gửi chuỗi "LEDOFF" - tắt đèn LED trên board mạch thực hành
+ Gửi chuỗi "LEDBLINK" - LED nhấp nháy 200ms, thời gian từ timer.
- Các chuỗi được gửi kèm với ký tự kết thúc câu.
