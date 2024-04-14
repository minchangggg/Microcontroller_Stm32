> https://www.facebook.com/groups/1012900173187521/permalink/1104335704043967/

### TÓM TẮT 
**Nội dung về tính năng Watchdog**

- Đây là một tính năng quan trọng để phát hiện các lỗi phần mềm, chống treo chương trình bằng cách khởi động lại vi điều khiển.
- Vi điều khiển STM32 hỗ trợ Independent Watchdog và Window Watchdog, mỗi loại sẽ phù hợp để giải quyết các bài toán cụ thể khác nhau. Nhưng cấu tạo thì sẽ có điểm chung là một Counter đếm xuống, mà chương trình phải định kì reload giá trị couter đấy trước khi counter đếm tới giá trị 0 với IWDG hoặc trong phạm vi giới hạn trên và giới hạn dưới với WWDG, nếu không thì Watchdog sẽ kích hoạt Reset Vi xử lý.
- Trong buổi học được ghi hình này, mọi người đã thực hành sử dụng ngoại vi, cài đặt các giá trị cho counter, reload couter định kì. Mình cũng đã debug và phân tích chương trình để mọi người hiểu rõ hoạt động của Watchdog.

### TÀI LIỆU
+ Video: https://youtu.be/D1S0YUKSCXo
  
**Nhắc nhở cuối khóa: tập trung vào tài liệu của hãng: datasheet, reference manual, HAL description, tài liệu board mạch**
