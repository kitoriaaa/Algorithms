import math

a, b, c = map(int, input().split())

S = (1/2)*a*b*math.sin(math.radians(c))
d_double = a**2 + b**2 - 2*a*b*math.cos(math.radians(c))
d = (d_double)**(1/2)
L = a + b + d
h = S*2/a

print(S)
print(L)
print(h)