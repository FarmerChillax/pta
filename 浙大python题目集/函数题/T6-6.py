def acronym(phrase):
    temp_str_list = phrase.split()
    res = ""
    for key in temp_str_list:
        res = res + key[0].upper()
    return res

acronym("central              processing  unit")