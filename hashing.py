hashing_table = [None] * 5
# hashing_table[8] = "qw"
# rem = 0
for i in range(5):
    num = int(input("Enter no: "))
    rem = num % 5
    if hashing_table[rem] == None:
        hashing_table[rem] = num
    else:
        # counter = i
        for j in range(rem,5):
            if hashing_table[j] == None:
                hashing_table[j] = num
                break
print(hashing_table)
while True:
    ch = input("wanna search element (y/n) : ")
    if ch == 'y':
        ele = int(input("Enter element you want to search : "))
        rem = ele % 5
        for i in range(5):
            if hashing_table[i] == ele:
                print("Element found")
                break
        else:
            print("Element not found")
        # if hashing_table[rem] == ele:
        #     print("Element found")
        # else:
        #     print("Element not found")
    else:
        break
    # print(rem)
