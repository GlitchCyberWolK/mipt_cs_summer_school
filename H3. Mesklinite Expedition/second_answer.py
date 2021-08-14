def merge(array1:list, array2:list) -> list:
    result = list()
    i = 0
    j = 0
    while len(result) < len(array1) + len(array2):
        if i < len(array1) and j < len(array2):
            if array2[j] < array1[i]:
                result.append(array2[j])
                j += 1
            else:
                result.append(array1[i])
                i += 1
        elif i == len(array1):
            result.append(array2[j])
            j += 1
        else:
            result.append(array1[i])
            i += 1
    return result

def mergesort(array:list) -> list:
    if len(array) == 1:
        return array
    m = len(array) // 2
    arr1 = array[0:m]
    arr2 = array[m:len(array)]
    return merge(mergesort(arr1), mergesort(arr2))

n, m = list(map(int, input().split()))
plots = [list(map(int, input().split())) for i in range(n)]
k = int(input())
mekslinits = list(map(int, input().split()))

newplot = list()
for plot in plots:newplot.extend(plot)
sortedplots = mergesort(newplot)
sortedexplorers = mergesort(mekslinits)

summa = 0

for explorer in sortedexplorers:
    for plot in sortedplots:
        if plot - explorer > 0:
            summa += 1
            break

print(summa)
