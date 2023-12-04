# Given n random int, print the distinct (unique) ints in sorted order
print(*sorted(set(input().split())), sep='\n')
# split() separates a string into a listof substrings. Since no separator was provided, by default it separates by whitespace
# set() creates a collection of unique elements from the given iterable
# In this case, it takes the list returned by input().split() and removes any duplicate elements
# sorted() sorts elements of an iterable in ascending order
# asterisk * is used for unpacking. When used before an iterable within a function call, it unpacks the elements of the iterable 
# seperate arguemtns to the function. It unpacks the sorted list of unique elements.
# sep='\n' is argument of print(), specifies separator. Each element will be printed on new line
#