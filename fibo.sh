echo "enter number of terms you want to display"
read n
i=1
j=1
count=2

echo "$i"
echo "$j"
while [ $count -lt $n ]
do
count=`expr $count + 1 `
z=`expr $i + $j `
echo "$z"
i=$j
j=$z
done
