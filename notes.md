# ***C++ Notes***

# **Data Types in C++**

## Primitive Data Types

1. int
- short
- long`
2. float
3. boolean
4. char
5. double
6. void

## Derived Data Types

1. Array
2. function
3. pointer
4. reference

## User-defined Data Types

1. Structure
2. Union
3. Enum
4. Class
5. Typedef

# **Operators in C++**

## 1. Arithmetic Operators

| Operator | Description       | Example          |
|----------|-------------------|------------------|
| `+`      | Addition          | `a + b`          |
| `-`      | Subtraction       | `a - b`          |
| `*`      | Multiplication    | `a * b`          |
| `/`      | Division          | `a / b`          |
| `%`      | Modulus (Remainder)| `a % b`          |

---

## 2. Relational (Comparison) Operators

| Operator | Description                  | Example      |
|----------|------------------------------|--------------|
| `==`     | Equal to                     | `a == b`     |
| `!=`     | Not equal to                 | `a != b`     |
| `<`      | Less than                    | `a < b`      |
| `>`      | Greater than                 | `a > b`      |
| `<=`     | Less than or equal to        | `a <= b`     |
| `>=`     | Greater than or equal to     | `a >= b`     |

---

## 3. Logical Operators

| Operator | Description          | Example         |
|----------|----------------------|-----------------|
| `&&`     | Logical AND          | `(a > b && b < c)` |
| `||`     | Logical OR           | `(a > b || b < c)` |
| `!`      | Logical NOT          | `!(a == b)`     |

---

## 4. Bitwise Operators

| Operator | Description       | Example          |
|----------|-------------------|------------------|
| `&`      | AND               | `a & b`          |
| `|`      | OR                | `a | b`          |
| `^`      | XOR               | `a ^ b`          |
| `~`      | Complement         | `~a`             |
| `<<`     | Left shift         | `a << 2`         |
| `>>`     | Right shift        | `a >> 2`         |

---

## 5. Assignment Operators

| Operator | Description              | Example          |
|----------|--------------------------|------------------|
| `=`      | Assign                  | `a = b`          |
| `+=`     | Add and assign           | `a += b`         |
| `-=`     | Subtract and assign      | `a -= b`         |
| `*=`     | Multiply and assign      | `a *= b`         |
| `/=`     | Divide and assign        | `a /= b`         |
| `%=`     | Modulus and assign       | `a %= b`         |

---

## 6. Increment and Decrement Operators

| Operator | Description              | Example          |
|----------|--------------------------|------------------|
| `++`     | Increment                | `++a` or `a++`   |
| `--`     | Decrement                | `--a` or `a--`   |

---

## 7. Conditional (Ternary) Operator

| Operator | Description              | Example                     |
|----------|--------------------------|-----------------------------|
| `? :`    | Ternary (Conditional)    | `(a > b) ? a : b`           |

---

## 8. Special Operators

| Operator  | Description              | Example                     |
|-----------|--------------------------|-----------------------------|
| `sizeof`  | Returns the size of a data type | `sizeof(int)`       |
| `,`       | Separates expressions    | `int a = (1, 2);` (a = 2)   |
| `*`       | Dereference              | `*ptr`                      |
| `&`       | Address of               | `&var`                      |

---

## 9. Member and Object Operators

| Operator  | Description                 | Example        |
|-----------|-----------------------------|----------------|
| `.`       | Member Access               | `obj.member`   |
| `->`      | Pointer to Member Access    | `ptr->member`  |

---

## 10. Other Operators



| Operator               | Description                 | Example        |
|------------------------|-----------------------------|----------------|
| `::`                  | Scope Resolution            | `std::cout`    |
| `new` and `delete`    | Allocate and Free Memory     | `new int;`, `delete p;` |
