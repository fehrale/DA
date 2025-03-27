# Лабораторная работа №1
## Сортировки за линейное время  
### Вариант 2-2  

---

## 📌 Задание
Требуется разработать программу, осуществляющую:
1. Ввод пар «ключ-значение»  
2. Упорядочивание по возрастанию ключа алгоритмом **сортировки подсчётом**  
3. Вывод отсортированной последовательности  

**Типы данных:**
- 🔑 **Ключ**: почтовые индексы  
- 📝 **Значение**: строки переменной длины (до 2048 символов)  

---

## 📂 Формат ввода/вывода
**Ввод:**  
На каждой непустой строке входного файла располагается пара «ключ-значение», в которой ключ указан согласно заданию, затем следует знак табуляции и указано соответствующее значение.

**Вывод:**  
Выходные данные состоят из тех же строк, что и входные, за исключением пустых и порядка следования.

---

## ✨ Пример
**Входные данные:**

 `000000    xGfxrxGGxrxMMMMfrrrG`
  
 `999999    xGfxrxGGxrxMMMMfrrr`
 
 `000000    xGfxrxGGxrxMMMMfrr`
 
 `999999    xGfxrxGGxrxMMMMfr`

**Выходные данные:**

 `000000    xGfxrxGGxrxMMMMfrrrG`
 
 `000000    xGfxrxGGxrxMMMMfrr`
 
 `999999    xGfxrxGGxrxMMMMfrrr`
 
 `999999    xGfxrxGGxrxMMMMfr`
