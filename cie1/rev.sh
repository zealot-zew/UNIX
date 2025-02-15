if [ $# -eq 0 ]
then
    echo "No arguments given"
    exit 1
fi

echo "Total number of arguments: $#"
echo "The arguments are: $*"
echo "The arguments in reverse order: "

rev=""
for i in "$@"
do
    rev="$i $rev"
done

echo $rev
