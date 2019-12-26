echo " enter file name "
read fname
echo " enter 1 for head 2 for tail "
read choice
echo " do you want to enter the number of line 1 yes 2 no "
read n

total=0
while read line
do
	total=`expr $total + 1`
done < $fname
total1=$total
if [ $n -eq 1 ]
then
	read number
else
	number=10
fi

if [ $choice -eq 1 ]
then
count=1
while read line
do
	echo "$line"
	count=`expr $count + 1`
	if [ $count -gt $number ]
	then 
		break
	fi
done < $fname

if [ $number -gt $total ]
then
	echo " entered number number of line greater than total number of lines "
	echo " $number > $total "
fi


else

	while read x
		do
		if [ $total -le $number ]
			then
				echo $x
			fi
		total=`expr $total - 1`
	done < $fname

	if [ $number -gt $total1 ]
	then
		echo " entered number number of line greater than total number of lines "
		echo " $number > $total1 "
	fi

fi
