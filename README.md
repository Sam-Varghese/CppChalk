<p align = "center"><img src = "images/banner.png"></p>

---

> CppChalk is an headerfile which enables us to print colorful text to the standard output.

---

## Usage

---

- Download <a href = "https://github.com/Sam-Varghese/CppChalk/blob/master/src/chalk.h" download>chalk.h</a>.
- Now here is a code snippet explaining how to implement this header file

```cpp
#include "chalk.h"
#include <string>

using namespace std;
int main()
{
    Chalk Chalk;
    Chalk.red("Hello world");
}
```