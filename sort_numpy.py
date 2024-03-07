import numpy as np
import time

def sort_array_with_numpy(array):
    if array is None:
        return None
    try:
        start_time = time.time() # Bắt đầu đếm thời gian
        sorted_array = np.sort(array)
        end_time = time.time()   # Kết thúc đếm thời gian
        elapsed_time = end_time - start_time
        print("Thời gian chạy:", elapsed_time, "giây")
        return sorted_array
    except Exception as e:
        print("Đã xảy ra lỗi khi sắp xếp mảng:", e)
        return None

def main():
    # Nhập mảng từ bàn phím hoặc từ file
    array = [1,2,3,3,3,1]
    # Sắp xếp mảng bằng hàm sort numpy
    sorted_array = sort_array_with_numpy(array)
    if sorted_array is not None:
        print("Mảng sau khi sắp xếp:", sorted_array)

if __name__ == "__main__":
    main()
