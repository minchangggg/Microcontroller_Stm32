### TÓM TẮT
- Thảo luận bài tập về nhà, phân tích hàm TogglePin và hoạt động của vi điều khiển khi tác động vào BSRR và ODR.
- Chi tiết về GPIO Input với Input floating, Input pullup, Input pulldown, các đặc điểm và trường hợp sử dụng. Vai trò trở kéo, các trường hợp trở kéo, trở kéo nội, trở kéo bên ngoài.
- Thực hành tạo project, cấu hình mặc định Floating, cấu hình Input pin, debug kiểm tra giá trị thanh ghi IDR tại vị trí bit tương ứng với pin. Tác động vào phần cứng board mạch thực hành và kiểm tra giá trị.
- Thực hành sử dụng lệnh HAL_GPIO_ReadPin để đọc giá trị của 1 Port Pin và gán giá trị đọc được cho 1 biến, debug xem giá trị của biến. Tác động vào phần cứng board mach và kiểm tra giá trị.

### TÀI LIỆU
- Video ghi lại: https://youtu.be/l1JIf_CJfRg
- Slide: Đã gửi ở buổi trước
  
### BÀI TẬP (nếu bạn nào chưa có nút nhấn thì mua nút nhấn và dây bus).
Bài 1: Cấu hình và viết chương trình thực hiện: Ban đầu LED tắt, Khi "nhấn giữ" nút, LED sáng, khi thả nút, LED tắt.

Bài 2: Cấu hình và viết chương trình thực hiện: Ban đầu LED sáng, khi "nhấn thả" nút, LED đảo trạng thái.
(Cố gắng áp dụng debug để hiểu thêm hoạt động của vi điều khiển)
Gửi kết quả thực hiện gồm: Hình ảnh cấu hình, hình ảnh mã code, video ngắn <5s chạy kết quả mỗi bài trước buổi học tối thứ 6 tuần này. Các bạn làm được bài nào, phần nào cứ gửi lên phần đấy nha.
