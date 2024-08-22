maxval = None
minval = None

while True:
    val = input()
    val = val.strip()
    if val == "q": 
        break
    val = int(val)
    if maxval == None or val > maxval:
        maxval = val
    if minval == None or val < minval:
        minval = val

print('Maxval: ', maxval)

print('Minval: ', minval)
