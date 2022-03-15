# Файлове (част 2). Двоични файлове.

## Режими за работа с файлове


| Режим:| Ефект:                                                                      | 
|--------|------------------------------------------------------------------------------|
|ios::in |Отваря файл за четене  (по подразбиране на ifstream)                           |
|ios::out    |Отваря файл за четене (по подразбиране на ofstream)                        |
|ios::binary | Отваря файл в двоичен режим                                               |
|ios::trunc  | Ако файлът съществува,  съдържанието му се изтрива след отваряне на поток |
|ios::app    | Отваря файлът за вмъкване. Поставя put указателят в края. Не се допуска вмъкване преди края на потока      |
|ios::ate    | Отваря файлът за вмъкване. Поставя put указателят в края. Допуска вмъкване на прозиволни места                |
|ios::nocreate | Отваря за вмъкване, само ако файлът с указаното име съществува.|
ios::noreplace | Отваря за вмъкване само ако файлът с указаното име не съществува.|
### Пример:
 ```c++
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("test.txt", ios::out | ios::app);

	if (!f.is_open())
	{
		cout << "Error while opening file!" << endl;
		return -1;
	}
	f << 33; //appends at the end of the file

	f.close();
	return 0;
}
 ```
## Флагове на състоянията на потока 
| Флаг:| Значение:                                                                      | 
|--------|------------------------------------------------------------------------------|
|bad()   | Има загуба на информация. Някоя операция за четене и писане не е изпълнена. |
|fail() |Последната входно/изходна операция е невалидна.|
| eof() | Достигнат е края на файла. |
|good() | Всички операции са изпълнени успешно.|
|clear()| Изчиства състоянието на потока (Вече good() ще върне истина).|

## Двоични файлове.

Изпоилзваме функциите:

1. .read(char* memoryBlock, size_t size);
2. .write(const char* memoryBlock, size_t size);

Обърнете внимание, че функцията приема **char***. Ако искаме да запазим променлива от друг вид, ще трябва експлицитно да преобразуваме указателя към тип char* (без значение, че указателят не сочи към елементи от тип char)

### Пример за писане в двоичен файл:
 ```c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream f("file.dat");

	int a = 155555;

	f.write((const char*)&a, sizeof(int));

	return 0;
}
 ```
 ### Пример за четене от двоичен файл:
 
  ```c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream f("file.dat");

	int a;

	f.read((char*)&a, sizeof(int));

	cout << a << endl;

	return 0;
}
 ```

 ### Съдържанието на двоичния файл:
 ![enter image description here](https://i.ibb.co/G3R72qG/sudurjanie.png "Binary file example")
 
Байтовете се записват в **обратна посока**. Най-старшият байт е последен. Следователно запаментеното число е **00025fa3**, което е точно шестанйсетичния запис на числото **155555**.
 
  ### Примери за запазване на стуктури във файл.
 
- запазване на структура,която не използва динамична памет - **simple_struct_binary.cpp** и **student_staticName_to_binary.cpp**
- запазване на структура,която използва динамична памет - **students_dynamicName_to_binary.cpp**

  ##### Пример за запазване на масив от стуктури във файл.

```c++
#include <iostream>
#include <fstream>
using namespace std;

struct Test
{
  char ch;
  int a;
};
int main()
{
    ofstream f("output.dat", ios::binary);
    
    if(!f.is_open())
    {
        cout << "Error!" << endl;
        return -1;
    }
    
    Test arr[3] = {{'a', 400},{'b', 500},{'c', 600}};
    
    f.write((const char*)&arr, sizeof(arr));
    
    f.close();
    
    return 0;
}

 ```

След изпълнението на програмата, файлът (**output.dat**) изглежда така:

![Image of the binary file after running the code](https://i.ibb.co/0JthLd6/3-A978-D14-7-C7-A-4-ABD-8-B0-C-DA27-F6-E9-CD0-A.png "Binary file")


 ### Позициониране във файл 
TBI


