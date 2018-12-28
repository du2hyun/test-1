#!/bin/bash

x=1

while [ '$x' -le 9 ]
do
	y=1

	while [ '$y' -le 9 ]
	do
		echo "$x * $y = 'expr $x \* $y'"
		y='expr $y + 1'
	done

	x='expr $x + 1'
done

