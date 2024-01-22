> https://www.facebook.com/groups/1012900173187521/permalink/1067374257740112/

### TÓM TẮT 
1. Chuẩn giao thức UART là một chuẩn giao tiếp có dây sử dụng rất phổ biến trong hệ thống nhúng. Để giao tiếp được giữa các thiết bị với nhau thông qua giao tiếp UART thì 2 bên phải thống nhất về khung truyền dữ liệu (parity bit, stop bits, data bits) và tốc độ baud (baudrate).
2. Phải biết cách nối dây giữa 2 thiết bị. Tx-Rx; Rx-Tx; GND chung. Bên cạnh đó cần thêm 1 số biện pháp bảo vệ an toàn như thêm trở, chuyển đổi logic level (5v-3.3v;...) hay cách ly quang nếu cần.
3. Để giao tiếp giữa STM32 và máy tính các bạn cần có một thiết bị trung gian USB-to-TTL. Tuy nhiên ở các dòng kit phát triển Nucleo64 của hãng ST thì bộ USART 2 đã được kết nối trực tiếp đến ST-Link MCU thông qua các chân PA2, PA3. Các bạn có thể truyền nhận dữ liệu giữa máy tính và STM32 qua cổng USB của khối ST-Link.
4. Về mặt lập trình: Cần hiểu các hàm trong thư viện HAL. Hàm cơ bản nhất mà tối qua chúng ta đã tiếp cận là HAL_UART_Transmit.

### TÀI LIỆU
+ Video ghi lại: https://youtu.be/7tDgop5f-7g
+ Slide: https://docs.google.com/presentation/d/1mD0T8FFL33h6WNpfI1yy0gCoL4HqJxmh/edit?usp=sharing&ouid=109030928772764985009&rtpof=true&sd=true
+ Đọc thêm: 3 phần hướng dẫn xử lý chuỗi https://tapit.vn/huong-dan-xu-ly-chuoi-trong-lap-trinh-vi-dieu-khien/

### BÀI TẬP
1. Thực hành tiếp nội dung slide Truyền một số kiểu dữ liệu khác nhau qua UART bao gồm kiểu số nguyên, kiểu số thực và kết hợp các kiểu dữ liệu, chụp ảnh kết quả từng phần và gửi lên phần bình luận trước 19h00 buổi học tiếp theo.
2. Thực hiện nhấn nút để đảo LED, mỗi lần LED đảo thì gửi lên UART Hercules là LEDON hay LEDOFF, chụp ảnh mã code và gửi lên phần bình luận trước 19h00 buổi học tiếp theo.
