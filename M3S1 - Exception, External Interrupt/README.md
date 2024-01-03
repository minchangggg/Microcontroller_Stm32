> https://www.facebook.com/groups/1012900173187521/permalink/1042304773580394/

### TÓM TẮT
**Exception**

+ Là một điều kiện làm thay đổi thứ tự thực hiện bình thường của một chương trình - Gồm 2 loại: System Exceptions (đến từ bên trong vi xử lý) và Interrupts (từ bên ngoài các ngoại vi vi điều khiển gửi đến vi xử lý)
Interrupt:
+ Các tín hiệu Interrupt được tạo ra bởi các ngoại vi của vi điều khiển và được gửi đến vi xử lý. Các tín hiệu này được gọi là Interrupt Request (IRQ)
+ Khi nhận 1 yêu cầu ngắt, Vi xử lý tạm ngưng thực thi chương trình bình thường để thực thi một đoạn chương trình đặc biệt là Interrupt Service Routine (ISR) – Interrupt Handler
+ Các tín hiệu yêu cầu Interrupt (IRQ) được gửi vào khối NVIC của vi xử lý.
+ Phân tích về quá trình stacking và unstacking khi vào và thoát ngắt.
+ Phân tích về các trường hợp độ ưu tiên và trạng thái của các ngắt.

**External Interrupt**

Chúng ta đã thực hành để hiểu về hoạt động của External Interrupt.
+ Cấu hình chân EXTI
+ Cấu hình sườn kích hoạt ngắt
+ Cấu hình trở kéo nếu cần
+ Cấu hình cho phép ngắt tại NVIC
+ Hàm phục vụ ngắt callback
+ Debug đặt breakpoint để kiểm tra đã vào được hàm xử lý ngắt.

### TÀI LIỆU
+ Video ghi lại: https://youtu.be/2QeuYZbJX6E
+ Slide: https://docs.google.com/presentation/d/10GAUyN1OMEHgvl5k4K8pbRlP7bmNGMQV/edit?usp=sharing&ouid=109030928772764985009&rtpof=true&sd=true

+ Các tài liệu đọc thêm:
  
         https://tapit.vn/co-ban-ve-cau-truc-va-tinh-nang-vi-xu-ly-arm-cortex-mx/
  
         https://tapit.vn/hieu-va-lap-trinh-ngat-ngoai-stm32f411/
  
         https://tapit.vn/tim-hieu-system-timer-ngat-systick-va-su-dung-hal_delay-trong-trinh-phuc-vu-ngat-vdk-stm32/

### LUYỆN TẬP
Tạo dự án mới và viết chương trình để đảo trạng thái LED mỗi khi nhấn nút (sử dụng ngắt), ban đầu LED tắt. Gửi hình ảnh các cấu hình và hình ảnh mã code tại hàm callback vào phần bình luận trước 19h00 buổi học thứ 6 tuần này.
