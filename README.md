# Alg_z

Алгоритмические задачки

Calendar.cpp

"Сейчас активно развивается новая история, основателем которой является Профессор А.С. Багиров. Он выяснил, что на протяжении многих лет на земле вместе с людьми существовали ящеры. Строительство пирамид, захват Байкала и еще много разных событий произошли благодаря ящерам.
Учёные ещё не выяснили, сколько времени ящеры существовали на земле. Они находят разные данные в виде даты начала и даты окончания, и чтобы проверить их на корректность, необходимо посчитать, сколько дней ящеры существовали для двух конкретных дат. Календарь ящеров очень похож на григорианский, лишь с тем исключением, что там нет високосных годов.
Вам даны дата начала и дата окончания существования ящеров, нужно найти количество полных дней и секунд в неполном дне, чтобы учёные смогли оценить, насколько даты корректны.

Формат ввода

В первой строке содержатся 6 целых чисел - дата начала существования ящеров.

Во второй строке содержатся 6 целых чисел - дата окончания существования ящеров.

Гарантируется, что дата начала меньше,чем дата конца."

collection.cpp

"Два друга A и B постоянно играют в коллекционную карточную игру (ККИ), поэтому у каждого игрока скопилась довольно большая коллекция карт.
Каждая карта в данной игре задаётся целым числом (одинаковые карты — одинаковыми числами, разные карты — разными).
Таким образом коллекцию можно представить как неупорядоченный набор целых чисел (с возможными повторениями).
После каждого изменения коллекций друзья вычисляют показатель разнообразия следующим образом:

A и B выкладывают на стол все карты из своей коллекции в два раздельных ряда;

Далее друзья итеративно делают следующее:

Если среди лежащих на столе карт игрока A есть такая же карта, как и среди лежащих карт игрока B — каждый игрок убирает данную карту со стола;
Если таковых совпадений нет — процесс заканчивается.

Разнообразием коллекций друзья называют суммарное количество оставшихся карт на столе.
Даны начальные состояния коллекций игроков, а также Q изменений их коллекций. После каждого изменения необходимо вычислить разнообразие коллекций друзей.

Формат ввода

В первой строке через пробел заданы числа N, M, Q(1≤N,M,Q≤105) — количество карт в коллекциях игрока A и B и количество изменений соответственно.

Вторая строка содержит через пробел N целых чисел ai(1≤ai≤109) — карты в коллекции игрока A.

Третья строка содержит через пробел M целых чисел bj(1≤bj≤109) — карты в коллекции игрока B.

Далее на каждой из следующих Q строк описано изменение коллекции: через пробел заданы typek, playerk, cardk (typek=±1;playerk∈(A,B);1≤cardk≤109) — тип k-го изменения, имя игрока и значение карты:

Если type=1, то в коллекцию игрока добавился экземпляр карты;
 
Если type=−1, то из коллекции игрока удалился один экземпляр карты 
 
 Гарантируется, что при запросе хотя бы один экземпляр карты присутствует в коллекции игрока."

 big_small.cpp

 "Петя пришел на стажировку в Яндекс, и первая его задача была познакомиться с SQL.
 
У Пети есть табличка, состоящая из N строк и M столбцов, значениями которой являются целые числа. Каждой колонке соответствует уникальное имя — строка из латинских символов.

Пете заданы Q ограничений вида: ColumnNamek, qk, valk.

qk может принимать два значения:

\> — учитывать только те строки, где значения в ColumnNamek строго больше valk; < — учитывать только те строки, где значения в ColumnNamek строго меньше valk.

Задача Пети заключается в том, чтоб посчитать сумму во всех строках, которые удовлетворяют всем ограничениям. Юный стажер уже написал скрипт и вычислил ответ. Но Петя волнуется, что где-то ошибся, поэтому просит вас перепроверить его вычисления.

Формат ввода

На первой строке вводятся 3 числа N, M, Q(1≤N×M≤3⋅105,1≤Q≤105) — количество строк, столбцов в таблице и количество ограничений.

В следующей строке вводятся через пробел M слов, состоящих из латинских маленьких букв — название соответствующей колонки, каждая строка по длине не превосходит L(1≤L≤10)

Далее вводятся N строк, в каждой через пробел M целых чисел aij(−109≤aij≤109) — элементы i-ой строки.

Потом вводятся Q строк — ограничения к запросу.

Каждая строка имеет вид ColumnNamek, qk, valk(qk∈(<,>);−109≤valk≤109) — k-ое ограничение в формате, описанном в условии задачи.

Гарантируется, что ColumnNamek соответствует имени одной из колонок таблицы."

sum.cpp

"Определим близость двух целочисленных массивов как длину их наибольшего совпадающего префикса (см. примечание).
Примеры:

Близость [1, 2, 1, 3] и [1, 2, 3, 2] равна 2 — префикс [1, 2] совпадает;

Близость [1, 2, 3] и [3, 2, 1] равна 0.

Дано n целочисленных массивов a1,a2,…,an.

Необходимо вычислить сумму близостей массивов ai и aj для каждой пары 1≤i<j≤n.

Формат ввода

Первая строка содержит одно целое число n(1≤n≤3⋅105)  — количество массивов.

Каждый массив задаётся двумя строками.

Первая строка описания массива содержит единственное целое число ki(1≤k≤3⋅105)  — размер i-го массива.

Вторая строка описания содержит ki целых чисел aij(1≤aij≤109) — элементы i-го массива.

Гарантируется, что ∑ni=1ki≤3⋅105."
