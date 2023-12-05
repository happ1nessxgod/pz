#!/bin/bash
array=( "$1" "$2" "$3" "$4" )
min=${array[0]}
mini=0
mu=0
for i in "${!array[@]}"; do
        if ((array[i] < min)); then
                min=${array[i]}
                mini=$i
        fi
done
echo "znachenie - $min"
echo "element - array[$mini]"
for i in "${!array[@]}"; do
        if (( "${array[i]}" < 0)); then
                j=$((i + 1))
                while ((j < ${#array[@]} && array[j] >= 0)); do 
                        mu=$((mu + array[j]))
                        ((j++))
                done
        fi
done 
echo "summa - $mu"



#!/bin/bash
array=( "$1" "$2" "$3" "$4" )
min=${array[0]}
mini=0
mu=0

for i in "${!array[@]}"; do
    if ((array[i] < min)); then
        min=${array[i]}
        mini=$i
    fi
done

echo "znachenie - $min"
echo "element - array[$mini]"

# Проверка первых двух элементов на отрицательность
if ((array[0] < 0 && array[1] < 0)); then
    mu=0
else
    # Поиск первого отрицательного элемента
    for i in "${!array[@]}"; do
        if (( "${array[i]}" < 0)); then
            j=$((i + 1))
            # Суммирование положительных элементов после второго отрицательного
            while ((j < ${#array[@]} && array[j] >= 0)); do 
                mu=$((mu + array[j]))
                ((j++))
            done
            break
        fi
    done
fi

echo "summa - $mu"
