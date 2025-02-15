echo "Enter a number for the multiplication table:"
read number

echo "Multiplication Table for $number:"
for i in {1..10}
do
  echo "$number x $i = $((number * i))"
done

