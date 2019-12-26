
while [ 1 ]
do 
echo " choose from the following "
echo " 1) insert "
echo " 2) delete "
echo " 3) update "
echo " 4) display "
echo " 5) count "
echo " 6) exit "

read choice
count=0
case $choice in

	1) 	echo " enter the following details "
		echo " enter roll number "
		read rno
		echo " enter Name "
		read name
		echo " enter branch"
		read branch
		echo "$rno	$name	$branch" | cat >> table
		echo " record added successfully"

	;;

	2) 	echo " enter the roll number of the record to be deleted "
		read rno

		grep -v "$rno" table > tempfile1
          	mv tempfile1 table
		echo " The data has been deleted "
       	;;

	
	3) 	echo " enter the roll number of the record to be modified "
		read rno1
		echo " enter the following details "
		echo " enter roll number "
		read rno
		echo " enter Name "
		read name
		echo " enter branch"
		read branch
		grep -v "$rno1" table > tempfile1
          	mv tempfile1 table
		echo "$rno	$name	$branch" | cat >> table
		echo " The data has been deleted "
       	;;

	4) 	echo " the file contents are "
		while read line
		do 
		echo "$line"
		done < table
	;;

	5)	
		total=0
		while read line 
		do
		total=`expr $total + 1`
		done < table
		echo " the number of lines are $total "
	;;
	   		

	6) break
	;;
esac
done	
