n = int(input())

PinYin_dict = {
    1: "yi",
    2: "er",
    3: "san",
    4: "si",
    5:  "wu",
    6:  "liu",
    7:  "qi",
    8:  "ba",
    9:  "jiu",
    0:  "ling"
}
t_sum = 0
for i in range(len(str(n))):
    t_sum += n % 10
    n = n // 10

out_str = ""
for i in range(len(str(t_sum))):
    out_str += " " + PinYin_dict[t_sum % 10][::-1]
    t_sum = t_sum // 10
out_str = out_str[::-1]
print(out_str[:-1])
