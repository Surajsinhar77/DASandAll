# class Student:
#     student_id = '21BCS8174'
#     student_name = 'Chiranjeev Kaur'
# print("Original attributes and their values of the Student class:")
# for attr, value in Student.__dict__.items():
#     if not attr.startswith('_'):
#         print(f'{attr} -> {value}')
#         print("\nAfter adding the student_class, attributes and their values with the said class:")

# Student.student_class = 'Sur'
# for attr, value in Student.__dict__.items():
#     if not attr.startswith('_'):
#         print(f'{attr} -> {value}')
#         print("\nAfter removing the student_name, attributes and their values from the said class:")

# del Student.student_name
# for attr, value in Student.__dict__.items():
#     if not attr.startswith('_'):
#         print(f'{attr} -> {value}')




# def search(a, b):
#     for d in b:
#         if a == d:
#             m = True
#         break
#     else:
#         m = False
#         return m

# list1 = []
# n = int(input('Enter the Size of the List: '))
# for i in range(0, n):
#     ele = int(input())
#     list1.append(ele)
# target = int(input("Enter the target: "))
# for i in list1:
#     if i < target:
#         pair = int(target)-int(i)
#         in2 = search(pair, list1)

#         if in2 == True:
#             print("the first number= %d the second number %d" % (i, pair))
#             break




# class Rectangle():
#     def __init__(self, a, b):
#         self.length = a
#         self.breadth = b
#     def rectangle_area(self):
#         return self.length*self.breadth

# length = int(input('Enter the Length: '))
# breadth=int(input('Enter the Breadth: '))
# newRectangle = Rectangle(length,breadth)
# area = newRectangle.rectangle_area()
# print("Area of Ractangle is: ", area)


# class Circle():
#     def __init__(self, r):
#         self.radius = r
#     def area(self):
#         return 3.14*self.radius**2
#     def perimeter(self):
#         return 2*3.14*self.radius
# r = int(input('Enter the Radious: '))
# NewCircle = Circle(r)
# print("Area : ", NewCircle.area())
# print("Perimeter : ", NewCircle.perimeter())



class Student:
    pass
class Marks:
    pass
student1 = Student()
marks1 = Marks()
print(isinstance(student1, Student))
print(isinstance(marks1, Student))
print(isinstance(marks1, Marks))
print(isinstance(student1, Marks))
print("Check whether the said classes are subclasses of the built-in object class or not.")
print(issubclass(Student, object))
print(issubclass(Marks, object))


print("Chiranjeev Kaur UID - 21BCS8174 ")