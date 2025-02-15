#!/bin/bash
echo "Enter temperature in Celsius:"
read C
F=$(echo "scale=2; (9/5) * $C + 32" | bc)
echo "$C°C = $F°F"
