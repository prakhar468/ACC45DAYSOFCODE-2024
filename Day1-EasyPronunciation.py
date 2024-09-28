T = int(input("Enter the number of test case: "))
vowels = "aeiou"  # Defining Vowels

# Loop through all the test cases
for loop in range(T):
    N = int(input("Enter the length of string: ")) #Length of the string
    S = input("Enter the word: ") #The word we are checking

    consonant_in_row = 0 #initialising it from 0
    easytopronounce = True #initialising it from Yes   

    for letter in S: #loop will run word by word
        if letter in vowels:
            consonant_in_row = 0 
        else: #if letter is not vowel the consonant number will increase by 1.
            consonant_in_row += 1 

        #if 4 or more than 4 consonants are present then it is hard to pronounce so result is no.
        if consonant_in_row >=4 : 
            easytopronounce = False
            break

    
    if easytopronounce:
        print("Yes")
    else:
        print("No")    

