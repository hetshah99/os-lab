a=10
b=5
c=15

if [ $a -ge $b -a $a -ge $c ]
then
echo $a
fi

if [ $b -ge $a -a $b -ge $c ]
then
echo $b
fi

if [ $c -ge $a -a $c -ge $b ]
then
echo $c
fi


