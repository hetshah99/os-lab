echo " enter number "
read n
a=$n
sum=0


while [ $n -gt 0 ] 
do
	temp=`expr $n % 10`
	temp1=$temp
	temp=`expr $temp \* $temp`
	temp=`expr $temp \* $temp1`
	sum=`expr $sum + $temp`
	n=`expr $n / 10`
done

if [ $sum -eq $a ]
then	
echo "yes"
else 
echo "no"
fi
