T = int(input("Enter the number of test cases: "))
for _ in range(T):
    #size of the group
    N = int(input("Enter the size of group: "))
    #cost of a subscription
    X = int(input("Enter the cost of a subscription: "))
    
    if N%6==0:
        number_of_subscription = N//6
    else:
        number_of_subscription = (N//6)+1

    min_total_cost = number_of_subscription*X
    print(f"the total cost is {min_total_cost}")