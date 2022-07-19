import random
import time
import subprocess

code = []

filename = ["file", "manager", "png", "hello", "cpp",
            "wrraper", "tcp", "udp", "cont", "exit", "read",
            "log", "msg", "ip", "view", "content", "header", "http"]


def gen():
    test_data = open("./cppsource.txt", "r",encoding="utf-8")
    for l in test_data:
        code.append(l)
    test_data.close()

    gyo = random.randint(2500, 5000)
    dist = ""

    for i in range(gyo):
        dist += random.choice(code) + "\n"

    name = random.choice(filename) + "_" + random.choice(filename)
    types = [".c", ".cpp", ".hpp", ".h", ".cc", ".cp", ".cxx"]
    with open(name+random.choice(types), 'w') as f:
        print(dist, file=f)
    print("CREATED!"+name)


file_num = 1
for i in range(file_num):
    gen()
