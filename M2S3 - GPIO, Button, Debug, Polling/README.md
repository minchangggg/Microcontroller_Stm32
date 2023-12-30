- Thảo luận Bài tập nhấn thả nút để điều khiển LED, phân tích hoạt động của chương trình và tín hiệu logic tại chân nút nhấn, giải thích nguyên nhân vì sao có lúc thấy LED đảo trạng thái, có lúc không khi nhấn nút.
- Phân tích hiện tượng rung phím, hướng dẫn mã code chống rung phím, lưu ý tránh chờ vô hạn trong mã code, cần áp dụng kỹ thuật timeout.

Polling:
+ Phương pháp hỏi lặp vòng hay polling là phương pháp mà vi xử lý phải chủ động thực hiện lệnh để kiểm tra các ngoại vi, kiểm tra các bit/ byte/ dữ liệu để thực hiện công việc. Và thường theo mô hình nếu đúng thì làm gì đó, nếu không thì bỏ qua. Tất cả được đặt trong một vòng lặp vô hạng.
+ Phương pháp Polling phù hợp với những bài toán đơn giản, ít task (hàm), chấp nhận được 1 độ trễ nhất định.
+ Khi áp dụng Phương pháp Polling cần lưu ý thời gian quét qua các task (1 vòng lặp while1) là ngắn nhất có thể, hạn chế tối đa việc dùng hàm Delay.
+ Phương pháp Polling dễ code/ dễ debug.
-----------
Video ghi lại: https://youtu.be/hqZpD1Lt88k
Đọc thêm:
- Tìm hiểu System timer, ngắt SysTick và sử dụng HAL_Delay trong trình phục vụ ngắt VĐK STM32.
https://tapit.vn/tim-hieu-system-timer-ngat-systick-va-su-dung-hal_delay-trong-trinh-phuc-vu-ngat-vdk-stm32/
- Ngắt ngoài trên STM32F103C8T6
https://tapit.vn/ngat-ngoai-tren-stm32f103c8t6/

Bài tập thực hành:
LED có 3 chế độ.
mode1: LED nhấp nháy 500ms
mode2: LED nhấp nháy 1000ms
mode3: LED sáng
Tạo project mới để thực hiện chương trình, ban đầu LED ở mode1, mỗi khi nhấn nút LED sẽ chuyển chế độ, 1 ->2, 2->3, 3->1,..
Chụp hình mã code và quay video <= 7s gửi vào phần bình luận trước 19h00 tối thứ 2.
