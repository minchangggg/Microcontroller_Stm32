+ Tìm hiểu và phân tích hoạt động của EXTI thông qua sơ đồ khối, vai trò của các thanh ghi cấu hình. Kết hợp debug để xem giá trị các thanh ghi.
+ Tìm hiểu về các Interrupt Input Line (các ngõ vào), Các chân có cùng trọng số được ghép vào 1 kênh ngõ vào thông qua mạch chọn kênh, nên lưu ý khi thiết kế phần cứng. Hướng dẫn kiểm tra tham số truyền vào hàm callback để xác định nguồn sinh ngắt.
+ Phân tích luồng thực thi chương trình mỗi khi có ngắt, phần cứng sẽ gọi hàm Handler từ file ...it.c rồi sau đó xóa cờ ngắt (bit pending) rồi mới gọi hàm Callback. Thực hành debug
+ Phân tích hiện tượng rung phím, thực hiện chống rung phím, xóa pending, timeout, điều chỉnh độ ưu tiên khi sử dụng HAL Delay. 
Video ghi lại buổi học: https://youtu.be/c-5QbGTxMrI
Slide buổi học: Đã gửi trước. 
