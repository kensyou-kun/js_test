import random
import time
import subprocess

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


file_num = 30
for i in range(file_num):
    gen()
    subprocess.run(["git", "add", "."])
    subprocess.run(["git", "commit", "-m", "update_"+random.choice(filename)])
    if(i % 5):
        subprocess.run(["git", "push", "-u", "origin", "main"])
    time.sleep(random.randint(1000, 2000))
