# enter = input()
# def getCount(enter):
#     i = 0
#     j = 0
#     for x in enter:
#         if x=='h' or x=='H':
#             i = i+1
#         elif x=='m' or x=='M':
#             j= j+1
#     print("The no of H is :",i,"and the no of M is :",j)

# getCount(enter)

# enter = enter+'mm'
# print(enter)
# getCount(enter)


# n = int(input("Enter number : "))
# temp=n
# rev=0
# while(n>0):
#     dig=n%10
#     rev=rev*10+dig
#     n=n//10
# if(temp==rev):
#     print("The number is a palindrome!")
#     print("Suraj Kumar  UID  21bcs8287")
# else:
#     print("The number isn't a palindrome!")
#     print("Suraj Kumar  UID  21bcs8287")

# ==================================================================================

# Python program to check if the number is an Armstrong number or not

# take input from the user
num = int(input("Enter a number: "))

# initialize sum
sum = 0

# find the sum of the cube of each digit
temp = num
while temp > 0:
    digit = temp % 10
    sum += digit ** 3
    temp //= 10

# display the result
if num == sum:
    print(num,"is an Armstrong number")
else:
    print(num,"is not an Armstrong number")

# num1 = 10
# num2 = 14
# num3 = 12

# uncomment following lines to take three numbers from user
# num1 = float(input("Enter first number: "))
# num2 = float(input("Enter second number: "))
# num3 = float(input("Enter third number: "))

# if (num1 >= num2) and (num1 >= num3):
#     largest = num1
# elif (num2 >= num1) and (num2 >= num3):
#     largest = num2
# else:
#     largest = num3

# print("The largest number is", largest)