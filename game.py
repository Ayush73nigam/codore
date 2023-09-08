#Number Guessing Game
golden_number=6
number_of_trials=int(input("Welcome to the Game!For how many trials would you like to play?\nPlease enter: "))
print(f"GENERAL INSTRUCTIONS!\nYou have total {number_of_trials} trials for the play!\nChoose your number wisely.\nLet's go!")
for trial in range(0,number_of_trials):
    guess_number=int(input("Guess any number from 0 to 9: "))
    if (trial<number_of_trials):
        if(guess_number<golden_number):
            if ((trial+1)!=number_of_trials):
                print("Wrong!\nYour guess number is lesser than correct number\nPlease try again\n",number_of_trials-(trial+1),"trails are left!")
            elif((trial+1)==number_of_trials):
                print("Wrong!\nYour guess number is lesser than correct number\nGAME OVER:(\nSeems like you have used all of your trails\nBetter luck next time :)")
            continue
        elif(guess_number>golden_number):
            if((trial+1)!=number_of_trials):
                print("Wrong!\nYour guess number is greater than correct number\nPlease try again\n",number_of_trials-(trial+1)," trails are left!")
            elif((trial+1)==number_of_trials):
                print("Wrong!\nYour guess number is greater than correct number\nGAME OVER:(\nSeems like you have used all of your trails\nBetter luck next time :)")
            continue
        elif(guess_number==golden_number):
            print("Congratulations!!!You have won the game ;)")
            break
        else:
            print("Something went wrong!")
    else:
        print("Something went wrong:(\nPlease try again")