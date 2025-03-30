import mpmath as mp
import math

a = mp.taylor(math.log, 1, 11)
p, q = mp.pade(a, 5, 5)

print(p, q)
