def open_file(name):
    pr = 1
    kol = 0
    with open(name) as file:
        line = file.readline()
        while line:
            pr *= int(line)
            kol += 1
            line = file.readline()
    geom = pr ** (1 / kol)
    return geom

print(open_file("1.txt"))