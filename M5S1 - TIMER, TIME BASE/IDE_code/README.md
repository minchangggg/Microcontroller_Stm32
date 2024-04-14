## Ex1: 
### Đề bài: 
Thay đổi trạng thái đèn LED mỗi 1 giây, sử dụng time-base unit. 
### Configuration
+ Clock Source: chọn Internal Clock (8Mhz như mình cấu hình ở trên) -> F[hệ_thống] = F_PSC = 8Mhz

![image](https://github.com/minchangggg/Stm32/assets/125820144/3b8acfd3-315d-4b83-a021-584e70daaf09)

+ Chọn **Prescaler = PSC = 8KHz-1** => F[timer] = F_CNT = F_PSC/(PSC+1) = 8M/8K = 1KHz -> T[timer] = T_CNT = 1/F_CNT = 1/1K = 1ms

+ Tìm ARR (hay Counter Period)
  
+ T[event] = T_CNT * (ARR+1) Mà để thay đổi trạng thái đèn LED mỗi 1 giây thì T[event] = 1000 ms = 1s
  
=> 1000ms = 1ms * (ARR+1) => **Counter Period = ARR = 999**

![image](https://github.com/minchangggg/Stm32/assets/125820144/c161d0c3-29b4-44f4-ae66-45c3aec2c851)

## Ex2: 
### Đề bài
Led báo trạng thái của thiết bị:

      Mode 1: nháy 1000ms
      Mode 2: nháy 200ms
      Mode 3: nháy 500ms

+ Ban đầu Led ở Mode 1. Mỗi khi nhấn nút chuyển mode: 1->2->3->1->2->...
+ Yêu cầu sử dụng ngắt ngoài với nút nhấn
+ Yêu cầu dùng timer với Timebase = 100ms

