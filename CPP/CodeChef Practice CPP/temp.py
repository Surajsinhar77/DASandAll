
# def tabeleMultiplaction(a):
#     b = int(a)
#     i = 1
#     print(f"Table of {a}")
    
#     while(i<=20):
#         print(f"{a} * {i} = {a*i}")
#         i+=1
        
# a = int(input("Which table do You want : "))
# tabeleMultiplaction(a)

# t1 = [(5,6,7,8,9,10)]
# print([t[:-1] + (100,) for t in t1])

# L = [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
# L = [t for t in L if t]
# print(L)


def mutiple_tuple(nums):
    temp = list(nums)
    product = 1 
    for x in temp:
        product *= x
    return product

nums = (4, 3, 2, 2, -1, 18)
print ("Original Tuple: ")
print(nums)
print("Product - multiplying all the numbers of the said tuple:",mutiple_tuple(nums))
print("Suraj Kumar  uid - 21BCS8187 ")