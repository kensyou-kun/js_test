import sys
import numpy

with open(sys.argv[1] + '.bin', "wb") as file:
    file.write(numpy.random.bytes(int(sys.argv[1])))
