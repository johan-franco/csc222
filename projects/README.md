#Drinking Problem

This problem is taken from
[Sample Questions from the 2016 Contest](https://www.seminolestate.edu/computers/competition/samples/2016).

## Description

Bob has a drinking problem … not that kind of a problem. Bob drinks Gatorade, but he likes to have several glasses of Gatorade in front of him. He also has developed the problem that he must drink from the fullest glass, and must drink ¼ of the content of the glass. He always drinks a whole number of ounces of Gatorade. If ¼ of the glass is not an whole number of ounces, he will drink a little more to make it an whole number of ounces. 

Bob’s wife prepares the glasses for him to drink from when he gets home from his tennis tournament. She puts Gatorade in each of the glasses, and lines them up. Each glass has a whole number of ounces. If there is more than one with the same amount, he chooses the one that is nearest to him. (Glass 1 is nearest.) He continues to drink until he has satisfied his thirst. He might drink more than his thirst level, but will not take another drink after he has had enough. There will always be enough Gatorade to satisfy his thirst. The problem is to find how many times he takes a drink of Gatorade to satisfy his thirst.

1. Prompt for and accept as input:<br>
    a. The number of glasses on the table <br>
    b. The number of ounces of Gatorade in each glass<br>
    c. Bob’s thirst level i.e., the minimum number of ounces required to satisfy his thirst <br>
2. You do not need to edit this input. Only valid positive integer values will be entered.
3. Read the numbers from the standard input device.
4. For each drink, display the number of ounces in that drink and the glass. Also display the remaining ounces in each glass. 
When Bob has satisfied his thirst, display the total amount he drank and the total number of drinks. See the sample output below.
5. You may use a console application or build a simple GUI application for the input and output.
6. Display the output as shown in the Test Data below.
7. Each set of test data can be tested by rerunning the application.
8. The judges will enter additional test data not provided below to further test your application.

<table>
<tr><th>Input</th><th>Output</th></tr>
<tr>
  <td>How many glasses are there?: 3 <br>
How many oz in glass 1: 8 <br>
How many oz in glass 2: 13 <br>
How many oz in glass 3: 22 <br>
How thirsty is Bob?: 24</td>
  <td>Drink 1: 6 oz from glass 3 8 13 16 <br>
Drink 2: 4 oz from glass 3 8 13 12 <br>
Drink 3: 4 oz from glass 2 8 9 12 <br>
Drink 4: 3 oz from glass 3 8 9 9 <br>
Drink 5: 3 oz from glass 2 8 6 9 <br>
Drink 6: 3 oz from glass 3 8 6 6 <br>
Drink 7: 2 oz from glass 1 6 6 6 <br>

Drank: 25 oz <br>
It took Bob 7 drinks to satisfy his thirst</td>
</tr>
<tr>
  <td>How many glasses are there?: 2 <br>
How many oz in glass 1: 17 <br>
How many oz in glass 2: 19 <br>
How thirsty is Bob?: 15</td>
  <td>Drink 1: 5 oz from glass 2 17 14 <br>
Drink 2: 5 oz from glass 1 12 14 <br>
Drink 3: 4 oz from glass 2 12 10 <br>
Drink 4: 3 oz from glass 1 9 10 <br>

Drank: 17 oz <br>
It took Bob 4 drinks to satisfy his thirst</td>
</tr>