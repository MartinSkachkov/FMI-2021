## Задачи
<b> Забележка. </b> Решенията на задачите се намират в седмица 6.
1. Въвеждат се n реални числа в масив. Да се намерят и изкарат в конзолата най-малко и най-голямото от тях.

2. Въвеждат се n цели  в масив. Да се намерят и отпечатат всички числа, чийто сбор на цифрите се дели на 3, както и техния брой.
 
3. Въвеждат се n реални числа (n <= 1000). Да се изкарат в обратен ред с помощта на помощен масив.

4. Въвеждат се n реални числа. Да се запишат  в масив и после този масив да си обърне елементите ( първото число се разменя с последно, второто с предпоследното и така нататък ).

5. Въвеждат се n (n >= 3) цели числа в масив. Да се провери дали те образуват аритметична или геометрична прогресия.

6. Въвеждат се n цели числа в масив. Да се отпечата да конзолата броят на простите числа, както и самите те.

7. Да се напише програма, която въвежда 2 масива. Изведете елементите, които са срещат:

- и в двата масива

<details>
<summary>
<b>Пример</b>
</summary>


```
1 2 3 4 5
2 7 8 5 1 10

Резултат:
1 2 5
```

</details>

- само в първия и не се делят на 3

<details>
<summary>
<b>Пример</b>
</summary>


```
17 9 6 7 13
10 1 7 18 22

Резултат:
17 13
```

</details>

- нека първоначалните масиви са сортирани, да се изведе сортиран 3ти масив от елементите на началните

<details>
<summary>
<b>Пример</b>
</summary>


```
1 2 5 10 11 24 52 66 101
-5 2 3 7 21 30 77

Резултат:
-5 1 2 2 3 5 7 10 11 21 24 30 52 66 77 101
```

</details>


## По-интересна задача

> Poke Mon

<img align="right" src="./assets/1.jpg">

Poke Mon е специален тип покемон, който обича да `поуква` други покемони. Но в края на деня Poke Mon иска да има статистика колко покемона е сразил.
Poke Mon удря опонентите си един по един. Колкото и да е силен Poke Mon, разстоянието което изминава за да достигне до следващия опонент го изморява и отнема от неговата енергия (всеки следващ опонент се намира на същото разстояние както предишния).
В началото на входа ще се въвежда число N – от тип integer, което ще представлява стартовата енергия на Poke Mon.
След това M – integer, разстоянието между противниците му
и Y – фактора на изморяване. Задачата Ви е да изведете на екрана колко опонента е сразил  Poke Mon и колко е останалата му енергия. Всеки път, когато Poke Mon върви, губи M от енергията си N и когато N < M, той не може да продължи. Когато N стане ТОЧНО 50% от оригиналната си стойност, трябва да разделите N на Y, ако е ВЪЗМОЖНО (тогава фактора на изморяване се включва). След делението Poke Mon отново продължава да атакува нови опоненти(ако има достатъчно енергия).

Ограничения:

1 <= N <= 2000000

1 <= M <= 1000000

0 <= Y <= 9

Вход:

На един ред се въвеждат последователно N, M, Y, разделени със space.

Изход:

На два реда – на първи ред да се отпечата останалата енергия на Poke Mon и на втори ред опонентите, които е успял да срази.

<details>
<summary>
<b>Пример</b>
</summary>


```
N = 1000
M = 10
Y = 5

Резултат:
останала енергия: 0
сразени опоненти: 60
```

</details>

## По-сложна задачка

> Палачинки

В кухнята на ресторанта `„При чичо Гошо“` има **n** котлона. За приготвянето на една палачинка на всеки от тези котлони са необходими съответно t1, t2, …, tn секунди. Напишете програма **pancakes**, която намира най-малко за колко секунди чичо Гошо може да приготви x палачинки. За пърженето на една палачинка може да се използва само един котлон.

**Вход** 

От първия ред на стандартния вход се въвеждат броят на палачинките x (0 < x < 1015) и броят на котлоните n (0 < n < 20). От втория ред се въвеждат n цели положителни числа, по-малки от 500 – времената t1, t2, …, tn.

**Изход**

На един ред на стандартния изход програмата трябва да изведе минималното време, за което чичо Гошо може да приготви палачинките. 

**Пример**
```
Вход
3 2
50 70

Изход
100
```
