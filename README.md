# First GitHub Repository: Sorting Algorithms Overview 🚀

Chào mừng bạn đến với repository đầu tiên của tôi trên GitHub! Dự án này được tạo ra nhằm mục đích làm quen với các thao tác cơ bản trên GitHub, đồng thời tổng hợp và hệ thống hóa kiến thức về các thuật toán sắp xếp (Sorting Algorithms) phổ biến dựa trên độ phức tạp thời gian (Time Complexity).

---

## 📌 Mục tiêu dự án
- **Làm quen với Git & GitHub**: Thực hành tạo repo, commit, push và quản lý mã nguồn.
- **Tìm hiểu về Thuật toán Sắp xếp**: Nghiên cứu nguyên lý hoạt động và so sánh hiệu năng giữa các nhóm thuật toán sắp xếp dựa trên ký hiệu Big $O$.

---

## 📚 Tổng quan về Độ phức tạp Thời gian (Time Complexity)

Các thuật toán sắp xếp thường được phân loại dựa trên độ phức tạp trong trường hợp trung bình (Average Case) và trường hợp xấu nhất (Worst Case).

| Độ phức tạp | Tên gọi | Đánh giá hiệu năng | Thuật toán tiêu biểu |
| :--- | :--- | :--- | :--- |
| $O(n)$ | Tuyến tính (Linear) | Rất nhanh (Cần điều kiện đặc biệt) | Counting Sort, Radix Sort|
| $O(n \log n)$ | Tuyến tính - Lôgarit (Linearithmic) | Tối ưu cho dữ liệu lớn | Merge Sort, Quick Sort, Heap Sort |
| $O(n^2)$ | Bậc hai (Quadratic) | Chậm với dữ liệu lớn, đơn giản | Bubble Sort, Selection Sort, Insertion Sort |

---

## 🔬 Chi tiết các nhóm thuật toán

### 1. Nhóm độ phức tạp $O(n^2)$ - Bậc hai
Thích hợp với danh sách có kích thước nhỏ hoặc dữ liệu gần như đã được sắp xếp. Đơn giản, dễ cài đặt nhưng hiệu năng kém khi $n$ lớn.

- **Bubble Sort (Sắp xếp nổi bọt)**: So sánh từng cặp phần tử kề nhau và đổi chỗ nếu chúng sai thứ tự.
- **Selection Sort (Sắp xếp chọn)**: Liên tục tìm phần tử nhỏ nhất từ phần chưa sắp xếp và đưa về đầu mảng.
- **Insertion Sort (Sắp xếp chèn)**: Xây dựng mảng sắp xếp bằng cách lấy từng phần tử và chèn vào đúng vị trí trong phần đã sắp xếp.

---

### 2. Nhóm độ phức tạp $O(n \log n)$ - Tuyến tính Lôgarit
Áp dụng chiến lược **Chia để trị (Divide and Conquer)** hoặc cấu trúc dữ liệu cây (Heap). Là nhóm thuật toán tối ưu nhất cho bài toán sắp xếp dựa trên so sánh (Comparison Sort).

- **Merge Sort (Sắp xếp trộn)**: Chia mảng thành 2 nửa, sắp xếp đệ quy từng nửa rồi trộn (merge) hai nửa đã sắp xếp lại với nhau.
- **Quick Sort (Sắp xếp nhanh)**: Chọn một phần tử làm chốt (pivot), phân chia mảng thành 2 phần (nhỏ hơn pivot và lớn hơn pivot) rồi sắp xếp đệ quy.
- **Heap Sort (Sắp xếp cây đống)**: Chuyển mảng thành cấu trúc dữ liệu Max-Heap, sau đó liên tục trích xuất phần tử lớn nhất ở đỉnh đống.

---

### 3. Nhóm độ phức tạp $O(n)$ - Tuyến tính
Đây là các thuật toán **không dựa trên so sánh** (Non-comparison Sort). Để đạt độ phức tạp $O(n)$, dữ liệu đầu vào phải thỏa mãn một số điều kiện nhất định (ví dụ: các số nguyên trong một khoảng giới hạn cho trước).

- **Counting Sort (Sắp xếp đếm)**: Đếm số lần xuất hiện của từng giá trị trong mảng để xác định vị trí chính xác của chúng.
- **Radix Sort (Sắp xếp theo chữ số)**: Sắp xếp dữ liệu theo từng chữ số từ hàng đơn vị, hàng chục, hàng trăm...

---


## 📝 Đóng góp & Học tập
Dự án này là bước đầu tiên trong hành trình học tập của tôi với Git và Cấu trúc dữ liệu & Thuật toán. Mọi góp ý hoặc đóng góp (Pull Request) đều rất được hoan nghênh!
