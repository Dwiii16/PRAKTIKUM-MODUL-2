import math

data = []

while len(data) < 2:
    data += input().split()

a = float(data[0])
b = float(data[1])

c = math.sqrt(b * b - a * a)

perimeter = a + b + c
area = 0.5 * a * c

print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
print(f"Keliling = {perimeter:.0f} cm")
print(f"Luas = {area:.0f} cm^2")