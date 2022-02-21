def open_file(name):
    kol = 0
    max = 1
    ch = 0
    with open(name) as file:
        line = file.readline()
        while line:    
            if (kol == 0):
                kol += 1
            else: 
                if (int(line) > ch):
                    kol += 1
                    if(kol > max):
                        max = kol
                else:
                    kol = 1
            ch = int(line)
            line = file.readline()
    
    print(max)
open_file("1.txt")