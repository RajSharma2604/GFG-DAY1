#code1
#print Hello world
# print("Hello world")

#code2
#Write a Python program to do arithmetical 
# operations addition and division.
# num1=23
# num2=46
# add=num1+num2
# div=num1/num2
# print("addition of {} and {} is = {} ".format(num1,num2,add))
# print("division of {} and {} is = {} ".format(num1,num2,div))


#code3
# Write a Python program to find the area of a triangle.
# base=float(input("Enter base:"))
# height=float(input("Enter height:"))
# area=0.5*base*height
# print("Area of trinagle will be {} ".format(area))


#code4
# Write a Python program to swap two variables.
# a=5
# b=6
# # print("a {} and b {} is :".format(a,b))
# a,b=b,a
# print("swapped")
# print(a,b)
#or we can use third variable temp to swap a and b


#code5
# Write a Python program to generate a random number.
# import random as r
# # num=random.randint(1,10)
# # print(num)
# # num=random.randint(1,10)
# # print(num)
# # num=random.randint(1,10)
# # print(num)
# # num=random.random()
# # print(num)
# num=r.randint(1,10)
# print(num)


#code6
# import calendar
# year=int(input("Enter year"))
# month=int(input("Enter month"))
# cal=calendar.month(year,month)
# print(cal)



#code7
#check whether a given number is 
# a positive or negative or zero
# n=int(input("Enter a number:"))
# if n>0:
#     print("Number is positive")
# elif n<0:
#     print("numbe is negative")
# else:
#     print("Number is zero")


#code7
#checking for prime number
num=34
flag=0
if num==1:
    print("Not a prime number:")
elif num>=2:
    for i in range(2,num):
        if num%i==0:
            flag=1
            break

if flag==1:
    print("number is not prime")
else:
    print("number is prime")

