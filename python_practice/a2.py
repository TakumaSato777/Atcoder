N,X = map(int, input().split())
A = list(map(int,input().split()))

Answer = False

if(X in A):
    Answer = True

if Answer == True:
    print("Yes")
else:
    print("No")