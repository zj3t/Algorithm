# -*- conding: utf-8 -*-

'''
https://www.acmicpc.net/problem/1316
'''
import time

def word_check(word):
    isCorrect = 0
    i = -1
    if len(word) is 1:
        isCorrect = 1
        return isCorrect
    else:
        while i+1 < len(word):
            i = i+1
        #for i in range(0,len(word)):
            check_list = []
            print "index"+str(i)
            tmp = word[i]
            for j in range(i,len(word)):
                index = word.find(tmp)

                if index is -1:
                    isCorrect = 1
                    continue
                print '---------'
                print word
                print tmp
                print index
                raw_input('----------')
                s = list(word)
                s[index] = '!'
                
                word = "".join(s)

                check_list.append(index)

            check_list = [x for x in check_list if x>=0]
            print check_list

            if len(check_list) == 1:
                isCorrect = 1
                continue
            else:
                for h in range(0, len(check_list)-1):
                    if check_list[h] + 1 is check_list[h+1]:
                        isCorrect = 1
                        print "continue"
                        i=i+1
                        continue
                    else:
                        print check_list
                        print "OK"
                        isCorrect = 0
                        return isCorrect

    return isCorrect


if __name__ == "__main__":
    count = input()
    sentence_list = []
    number = 0

    if count <= 100 and count > 0:
        for i in range(0, count):
            sentence_list.append(raw_input(''))

        for i in range(0, len(sentence_list)): #One word
            number += word_check(sentence_list[i])
    
    print number