## Zadanie 3
def generate_lists():
    num_list = input("Podaj co najmniej 7 liczb, oddzielając je przecinkami: ")
    num_list = num_list.split(',')
    last_num = int(num_list[-1])
    mid_num = int(num_list[len(num_list)//2])
    first_num = int(num_list[0])

    result = []
    for i in range(last_num):
        inner_list = []
        for j in range(num_list[-3]):
            inner_list.append(random.randint(first_num, mid_num))
        result.append(inner_list)
    
    return result
    
 ## Zadanie 2
    
    def find_words_with_same_middle_letter():
    words = input("Podaj kilka wyrazów (oddziel je spacją): ")
    words_list = words.split()
    result = []

    for word in words_list:
        middle_index = len(word) // 2
        if word[middle_index] == word[middle_index - 1]:
            result.append(word)

    return result
