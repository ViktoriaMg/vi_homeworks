int* pOne; //вказівник на ціле число, ще не ініціалізований.

int vTwo;// ціла змінна, яка зберігає значення.

int* pThree = &vTwo; //вказівник на ціле число, ініціалізований vTwo.

/*завдання 2 */

unsigned short yourAge = 25;
unsigned short* pAge = &yourAge;

/*тепер через pAge можна змінювати yourAge*/

*pAge = 50; //завдання 3