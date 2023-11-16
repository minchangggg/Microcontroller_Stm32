/* 
Bài tập 2: Thực hiện chương trình để in lên màn hình chuỗi "LED ON" và "LED OFF" xen kẽ nhau mỗi giây một lần.
Nếu như ở thời điểm hiện tại dòng "LED ON" đã được hiển thị thì một giây sau, màn hình sẽ hiển thị dòng "LED OFF" và ngược lại, quá trình trên sẽ được lặp lại liên tục. 
Lưu ý chuỗi "LED ON" và "LED OFF" nên được hiển thị ở các dòng riêng biệt. 
*/

#include <stdio.h> 
#include <time.h> 

void delay (int number_of_seconds) { 
	// Converting time into milli_seconds 
	int milli_seconds = 1000 * number_of_seconds; 

    // Variable: clock_t -> This is a type suitable for storing the processor time (thời gian của bộ vi xử lý)
    // Function: clock_t clock(void) -> Returns the processor clock (tốc độ đồng hồ) time  used since the beginning of an implementation defined era (trình triển khai) (normally the beginning of the program)
	 
	clock_t start_time = clock(); // Storing start time

	// looping till required time is not achieved 
	while (clock() < start_time + milli_seconds); 
} 

// Driver code to test above function 
int main() { 
    int ledStatus = 1; // LED ON
	while (1) {
		// delay of one second 
		delay(1); 
		if (ledStatus) {
             printf("LED ON\n"); 
        }
        else {
             printf("LED OFF\n"); 
        }
        ledStatus = !ledStatus;
    }
}
