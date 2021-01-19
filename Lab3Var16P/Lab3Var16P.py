y0 = 0.0;
y1 = 0.5;
i = 1;
print("Input e:");
e = float(input());
while (y1 - y0 >= e):
    i += 1;
    y0 = y1;
    y1 = (y0 + 1) / (y0 + 2);
print("First correct element is y[" + str(i) + "];\n y[" + str(i) + "] - y[" + str(i-1) + "] = " + str(y1-y0));