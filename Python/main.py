# (c) DarkWeb

'''
██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░
██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗
██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝
██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗
██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝
╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░
'''

print('''
██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░
██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗
██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝
██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗
██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝
╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░''') # ''' Because i want to print multiple lines in one print statement


def quiz():
    global score # So I Can Acess This Value In Main Function
    
    name = input("Enter Your Name :- ")
    score = 0

    print(f"\nWelcome {name} To DarkWeb Quiz")

    q1 = input("\n1 - What I Like Most Python or Go :- ")

    if q1.lower()=="python":
        print("Correct Answer")
        score += 1
    else:
        print("Incorrect Answer")

    q2 = input("\n2 - What Will I Choose In Study and Programming :- ")

    if q2.lower()=="study":
        print("Correct Answer")
        score += 1
    else:
        print("Incorrect Answer")

    q3 = input("\n3 - Which Color I Like The Most Red or Blue :- ")

    if q3.lower()=="red":
        print("Correct Answer")
        score += 1
    else:
        print("Incorrect Answer")

    q4 = input("\n4 - What Will I Choose in Iphone and Android :- ")

    if q4.lower()=="iphone":
        print("Correct Answer")
        score += 1
    else:
        print("Incorrect Answer")


def main():
    quiz()
    print(f"Thanks For Playing You Scored {score} Points")
    exitt = input("\nWant To Play Again, yes/no :-  ")
    if exitt.lower()=="yes":
        quiz()
    else:
        print("\nThanks For Playing")

main()