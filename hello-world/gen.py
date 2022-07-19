import random
from tkinter.font import names

code = ["var x, y, z;",
        "var mycar = {make: 'Honda', model: 'Accord', year: 1998;",
        "const foo = new String('foo'); ",
        "const firstString = '2 + 2';",
        "const secondString = new String('2 + 2');", "const helloLength = hello.length;",
        "const hello = 'Hello, World!';", "var FLT_SIGNBIT  = 0b10000000000000000000000000000000; ",
        "var FLT_EXPONENT = 0b01111111100000000000000000000000;",
        "var m = 0644; ",
        "const key = 114514"]

filename = ["file", "manager", "png", "hello", "cpp",
            "wrraper", "tcp", "udp", "cont", "exit", "read", "log"]

def gen():
    gyo = random.randint(2500, 5000)
    dist = ""

    for i in range(gyo):
        dist += random.choice(code) + "\n"

    name = random.choice(filename) + "_" + random.choice(filename)
    with open(name+".js", 'w') as f:
        print(dist, file=f)

file_num = 10
for i in range(file_num):
    gen()