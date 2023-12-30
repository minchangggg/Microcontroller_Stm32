### TÓM TẮT
- Đầu buổi học, mình đã giải đáp bài tập về nhà - dựa vào tài liệu datasheet (vẫn còn)
- Cung cấp 1 số kiến thức lý thuyết về GPIO, GPIO OUTPUT. Phân tích hoạt động dựa vào sơ đồ khối.
- Khái niệm GPIO Port, Chân vi điều khiển Pin. Cách đặt tên chân, các chân GPIO, mô tả chức năng các chân đặc biệt VDD/VSS, VDDA/VSSA, VBAT, NRST,BOOT.
- Các nhóm thanh ghi với khối GPIO / hoặc 1 ngoại vi nào khác của vi điều khiển gồm: Các thanh ghi cấu hình, các thanh ghi dữ liệu, các thanh ghi trạng thái. Bản chất khi làm việc với các ngoại vi vi điều khiển là làm việc với các thanh ghi, làm việc với các thanh ghi gồm các hoạt động đọc/ ghi.
- Tài liệu Reference manual chứa thông tin các ngoại vi, mô tả hoạt động của ngoại vi, các thanh ghi.
- Phân tích thanh ghi ODR, BSRR, tác động của thanh ghi BSRR đến ODR
- Phân tích hàm HAL_GPIO_WritePin để thấy lời gọi hàm tác động đến BSRR, ODR, Logic của chân OUTPUT.
- Thực hành và debug để hiểu tính năng OUTPUT với hàm WritePin, debug xem giá trị thanh ghi ODR.
- Thử nghiệm với hàm TogglePin.
### TÀI LIỆU
- Video ghi lại: https://youtu.be/fdC_BVPRP1s
- Slide: https://docs.google.com/presentation/d/1P8UUquJpUTTtWzrDHYJy826J-8TkS85S/edit?usp=sharing&ouid=109030928772764985009&rtpof=true&sd=true
### BÀI TẬP
- Phân tích hàm HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13). Kết quả thanh ghi BSRR, ODR là bao nhiêu, biết ban đầu ODR có giá trị 0x2000
- Tìm hiểu, suy nghĩ và giải thích vì sao thư viện lại chọn tác động vào thanh ghi BSRR thay vì thanh ghi ODR để điều khiển giá trị logic của 1 chân OUTPUT.
- Video Debug cần xem qua và thực hành theo hướng dẫn: https://youtu.be/50cc5TmiF78
Lưu ý với phiên bản mới của phần mềm thì cần phải đặt breakpoint để dừng chương trình thì giá trị thanh ghi và giá trị biến mới hiển thị trên giao diện debug.
