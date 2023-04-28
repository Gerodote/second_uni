I had such task : 
![image](https://user-images.githubusercontent.com/58738099/235254795-e7fa9511-5edf-43dc-a237-d6b7e4d73d2b.png)
first part: write code for first task, 8 is how long the answer can be, 4 is how good accuracy should be.
second part: write code that gets area of shaded part of the picture. Necessary params get from user.

So I thought at second part should be is finding area of circle minus area of a parallelogram. First area is PI*radius*radius, second area can be found as cross product of "vectors". Though, I was too lazy to allow doing degree more then pi. All lengths have to be positive. Also, the area function declaration allows any floating point types.
