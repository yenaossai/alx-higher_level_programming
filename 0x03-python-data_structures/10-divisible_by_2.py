#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    newlist = my_list[:]
    for count, i in enumerate(my_list):
        if i % 2 == 0:
            newlist[count] = True
        else:
            newlist[count] = False
    return(newlist)

