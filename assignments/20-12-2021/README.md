# Write algorithms for the following

## 1. Swap two values
[code](swap.c)
```
1. START
2. PRINT "Enter first number: "
3. INPUT a
4. PRINT "Enter second number: "
5. INPUT b
6. t <- a
7. a <- b
8. b <- t
9. PRINT a and b
10. STOP
```


## 2. Find larger of two numbers
[code](larger.c)

```
1. START
2. PRINT "Enter first number: "
3. INPUT a
4. PRINT "Enter second number: "
5. INPUT b
6. IF a > b THEN
        PRINT "larger: a"
   ELSE
        PRINT "larger: b" 
7. STOP
```

## 3. Find Number is odd or even
[code](oddeven.c)

```
1. START
2. PRINT "Enter a number: "
3. INPUT n
4. IF n % 2 EQUALS 0 THEN
        PRINT "even"
   ELSE
        PRINT "odd" 
5. STOP
```

## 4. Print grade obtained by student applying following rules
### Rules
| Marks | Grade |
| --- | --- |
|  > 75 | O |
| 60-75 | A |
| 50-60 | B |
| 40-50 | C |
|  < 40 | D |

[code](grade.c)
```
1. START
2. PRINT "Enter your marks: "
3. INPUT marks
4. IF marks > 75
        PRINT "O"
    ELSE IF marks > 60
        PRINT "A"
    ELSE IF marks > 50
        PRINT "B"
    ELSE IF marks > 40
        PRINT "C"
    ELSE
        PRINT "D"
5. STOP
```

## 5. Find sum of first N natural numbers
[code](sumn.c)
```
1. START
2. PRINT "Enter a number: "
3. INPUT n
4. s <- n * (n+1) / 2
5. PRINT s
6. STOP
```