clear
read -r -p "Enter first number: " FT_NBR1 
read -r -p "Enter second number: " FT_NBR2

# obase is 13 BUT obase must be expressed in ibase thus, obase is written 23 

echo $FT_NBR1 + $FT_NBR2 | sed 's/\\/1/g' | sed 's/?/3/g' | sed 's/!/4/g' | sed "s/\'/0/g" | sed "s/\"/2/g" | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"