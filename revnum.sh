echo " enter the number to be reversed "
read n
rev=0
while [ $n -gt 0 ]
do 
	mod=`expr $n % 10`
	rev=`expr $rev \* 10`
	rev=`expr $rev + $mod`
	n=`expr $n / 10`
done
echo "$rev"
