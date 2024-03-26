# Time Complexity : O(n)

def sum(arr, start, end):
    if end - start== 0:
        return arr[end]
    else:
        mid = (start +  end) //2

        return sum(arr, start, mid) + sum(arr, mid + 1, end)
    


if __name__ == "__main__":
    # arr = [1, 2, 3, 4, 4, 5]
    arr = [1, 1, 1, 1, 1, 1]  * 3
    print(sum(arr, 0, len(arr) - 1))
    