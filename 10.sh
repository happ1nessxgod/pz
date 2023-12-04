#!/bin/bash
array=( "$1" "$2" "$3" "$4" )
min=${array[0]}
mini=0
mu=0
for i in "${array[@]}"; do
        if ((array[i] < min)); then
                min=${array[i]}
                mini=$i
        fi
done
echo "znachenie - $min"
echo "element - array[$mini]"
for i in "${array[@]}"; do
        if (( "${array[i]}" < 0)); then
                while (( "${array[i]}" > 0 || "${array[i]}" = 0 )); do 
                mu=mu+"${array[i]}"
                done
        fi
done 
