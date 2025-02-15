# to reverse arguments

if [ $# -eq 0 ]
then
    echo "No args given"
    exit 1
fi

echo "Total number of args: $#"
echo "The arguments are: $*"

echo "in reverse order"

rev=""
for i in "$@"
do
    rev="$i $rev"
done

echo $rev
