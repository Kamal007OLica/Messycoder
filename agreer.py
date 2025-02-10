s = input("Do you agree? ")
t = s.lower()

if s in ['Y', 'y']:
    print('agreed.')
elif s in ['N', 'n']:
    print("Not agreed.")
