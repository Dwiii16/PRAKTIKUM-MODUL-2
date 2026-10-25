data = []

while len(data) < 2:
    data += input().split()

radius = float(data[0])
height = float(data[1])

pi = 22 / 7

volume = pi * radius * radius * height
area = 2 * pi * radius * (radius + height)
circumference = 2 * pi * radius

print(f"Volume = {volume:.2f}")
print(f"Luas = {area:.2f}")
print(f"Keliling = {circumference:.2f}")