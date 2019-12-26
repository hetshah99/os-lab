echo "enter a number"
read n
i=2

while [ $i -lt $n ]
do
    
    flag=0
    k=2
    while [ $k -lt $i ]
    do
        if [ `expr $i % $k` -eq 0 ]
        then
            flag=1
        fi
        k=`expr $k + 1`
    done
    
    if [ $flag -eq 0 ]
    then
        echo $i
    fi
    i=`expr $i + 1`    
    
done

