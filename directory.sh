i=1
while [ $i -lt 100 ]
do 
echo "enter choice"
echo "1) create"
echo "2) modify"
echo "3) navigate"
echo "4) listing"
echo "5) break "

read choice 


case $choice in
 	
	1) echo " enter the name of the directory to be created "
		read name
		mkdir $name
		;;

	2) echo " choose from the following "
		echo " 1.Rename "
		echo " 2.Move"
		echo " 3.copy"
		echo " 4.Delete"

			read choice1
	
		case $choice1 in
	
			1) 	echo " enter the directory name to be renames "
					read name1
			   	echo " enter the new name for the same"
					read name2
				mv $name1 $name2
				;;

			2) 	echo " enter the directory name to be moved "
					read name1
			   	echo " enter the new location"
					read name2
				mv $name1 $name2
				;;
				
			3) 	echo " enter the directory name to be copied"
					read name1
			   	echo " enter the new location"
					read name2
				cp $name1 $name2
				;;

			4)   	echo " enter the directory name to be deleted "
					read name1
				rmdir $name1
				;;


		esac
	;;

	3) echo " choose from the following "
		echo " 1.to parent directory "
		echo " 2.to specific path"
		
		read choice2

		case $choice2 in 
			
			1) 	cd ..
				pwd
				;;
			2) echo " enter the new path name "
				read path;
				cd $path
				pwd 
				;;
		esac
	;;

	4) echo "choose from the following"
		echo " 1. list all the directories"
		echo " 2. list of the directories in detail"
		
		read choice3
	

		case $choice3 in

		1) ls
			;;
		2) ls -l ;;

		esac
	;;

	5) break
	;;
esac
done			
				
