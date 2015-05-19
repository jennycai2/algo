//Insertion Sort

/*
Scenario 1, There is zero card or 1 card
Hey, it's already sorted!
Scenario 2, There are 2 cards x[0] and x[1]
If x[1] >= x[0], done
else, s = x[1], x[1] = x[0], x[0] = s
Scenario 3, There are 3 cards, x[0] and x[1] are already sorted
save the value of x[2]: s = x[2]
if s < x[1], move x[1] to the right, x[2] = x[1]
if s < x[0], move x[0] to the right, x[1] = x[0], x[0] = s

Scenario 4, There are 4 cards, x[0], x[1], and x[2] are already sorted
save the value of x[3]: s = x[3]
if s < x[2], move x[2] to the right, x[3] = x[2]
if s < x[1], move x[1] to the right, x[2] = x[1]
if s < x[0], move x[0] to the right, x[1] = x[0], x[0] = s

Scenario n, There are n cards, x[0], x[1], ..., x[n-2] are already sorted
save the value of x[n-1]: s = x[n-1]
position = n-1
for i=0; i<(n-1); i++ {
if s < x[n-i-2], then x[n-i-1] = x[n-i-2]
else, position = n-i-2
}
put the alue of x[n-1] to the empty position: x[position] = s
*/