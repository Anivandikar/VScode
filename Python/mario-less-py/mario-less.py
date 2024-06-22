print("This program Will print a Right-Angle Pyramid")
hight = int(input("What should be the hight of the Pyramid be: "))
for i in range(0, hight+1):
    for j in range(0, hight):
        print(" ", end="")
        if (i + j >= hight):
            print("#", end="")
        else:
            print(" ", end="")
    print("\n",end="")