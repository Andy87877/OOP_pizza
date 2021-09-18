# OOP_pizza
Define a class called Pizza that has member variables to track the type of pizza (either deep dish, hand tossed, or pan)

along with the size (either small, medium, or large) and the number of pepperoni or cheese toppings.

You can use constants to represent the type and size. Include mutator and accessor functions for your class.

Create a void function, outputDescription( ), that outputs a textual description of the pizza object. Also include a function, computePrice( ),

that computes the cost of the pizza and returns it as a double according to the rules:

       Small pizza = $10 + $2 per topping

       Medium pizza = $14 + $2 per topping

       Large pizza = $17 + $2 per topping


Write a suitable test program that creates and outputs a description and price of various pizza objects.

:dart: About Input:

1. 須讓使用者依序輸入Type、Size、toppings，實際範例參考附圖。

2. 其中toppings須讓使用者重複輸入不同配料，輸入0視為結束配料選擇。若輸入重複配料則必須發出錯誤訊息並重新詢問。

3. 無論任何時候，輸入-1則立刻結束程式。在其他情況下不得結束程式。

:dart: About Output:

1. 輸出格式請依照附件之畫面。

2. 當輸出結束後不可結束程式，請進行下一輪的披薩選擇。

:dart: About Fool-proofing:

1. 輸入時只能輸入選單有的數字，任何不合法的輸入（包含所有可能）必須輸出錯誤訊息並且重新詢問。
![](https://i.imgur.com/lHQFeXN.png)
![](https://i.imgur.com/wQQRmY2.png)
![](https://i.imgur.com/5AKdnCV.png)
