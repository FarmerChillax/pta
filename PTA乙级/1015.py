student_sum_N, score_line_L, first_line_H = map(int, input().split())

cnt = 0
all_pass, de_win_cai, not_win_but_pass, others = [], [], [], []

for i in range(student_sum_N):
    number, de_score, cai_score = map(int, input().split())
    item = {"number": number, "de_score": de_score, "cai_score": cai_score,
             "sum": de_score + cai_score}
    if de_score >= score_line_L and cai_score >= score_line_L:
        cnt += 1
        if de_score >= first_line_H and cai_score >= first_line_H:
            all_pass.append(item)
        elif de_score >= first_line_H and cai_score < first_line_H:
            de_win_cai.append(item)
        elif de_score < first_line_H and cai_score < first_line_H and de_score > cai_score:
            not_win_but_pass.append(item)
        else:
            others.append(item)


print(cnt)
import operator

def my_sort(res_list):
    res_list = sorted(res_list, key=operator.itemgetter('sum'),reverse=True)
    for index in range(len(res_list)):
        for sec_index in range(index, len(res_list)):
            if res_list[index]['sum'] == res_list[sec_index]['sum']:
                if res_list[index]["de_score"] < res_list[sec_index]['de_score']:
                    res_list[index], res_list[sec_index] = res_list[sec_index], res_list[index]
                elif res_list[index]["de_score"] == res_list[sec_index]['de_score']:
                    if res_list[index]["number"] > res_list[sec_index]["number"]:
                        res_list[index], res_list[sec_index] = res_list[sec_index], res_list[index]
    return res_list


all_pass = my_sort(all_pass)
de_win_cai = my_sort(de_win_cai)
not_win_but_pass = my_sort(not_win_but_pass)
others = my_sort(others)

for item in all_pass:
    print(item["number"], item["de_score"], item["cai_score"])

for item in de_win_cai:
    print(item["number"], item["de_score"], item["cai_score"])

for item in not_win_but_pass:
    print(item["number"], item["de_score"], item["cai_score"])

for item in others:
    print(item["number"], item["de_score"], item["cai_score"])
