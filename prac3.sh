echo " enter number "
read a

r=`expr $a % 2` 

if [ $r -eq 0 ]
then
echo "even"
else
echo "odd"
fi 
