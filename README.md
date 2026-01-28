# 🚀 C++ Professional Calculator v2.0

[![GitHub stars](https://img.shields.io/github/stars/AnReXx2/Simple_console_calculator?style=social)](https://github.com/AnReXx2/Simple_console_calculator)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++ Version](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B17)
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)](https://github.com/AnReXx2/Simple_console_calculator/actions)

## 🎯 პროექტის მიმოხილვა
ეს არის **პროფესიონალური კონსოლური კალკულატორი C++-ში**, რომელიც შექმნილია **დამწყები-საშუალო დონის დეველოპერის** მიერ (ანრი).  
პროექტი აჩვენებს **კარგ პრაქტიკებს**: input validation, error handling, clean code და user-friendly interface.

**მთავარი თვისებები**:
- მუდმივი გამოთვლა (do-while loop)
- შეყვანის ვალიდაცია (რიცხვის ნაცვლად ასო → შეცდომა)
- 0-ზე გაყოფის დაცვა

## ✨ ფუნქციონალი
- ოპერაციები: `+`, `-`, `*`, `/`
- მრავალჯერადი გამოთვლა (y/n)
- შეცდომების მართვა: არასწორი ოპერატორი, არასწორი რიცხვები, division by zero

## 📸 დემო (ტერმინალის output მაგალითი)
<img width="702" height="230" alt="image" src="https://github.com/user-attachments/assets/9a64c04d-5784-4476-9f3e-cb36a0f851d3" />
===================== PROFESSIONAL CALCULATOR v2.0 =====================
Enter operator (+, -, *, /): +
Enter first number: 15.5
Enter second number: 3.2
✅ 15.5 + 3.2 = 18.7
🔄 Calculate again? (y/n): y
Enter operator (+, -, *, /): /
Enter first number: 10
Enter second number: 0
❌ Error: Division by ZERO is not allowed!


## 🛠️ როგორ გაუშვა (ინსტრუქცია)
### Visual Studio 2022/2026 (რეკომენდებული)
1. ჩამოტვირთე და გახსენი პროექტი.
2. Build → Configuration: Release | x64
3. Build → Build Solution (Ctrl+Shift+B)
4. Debug → Start Without Debugging (Ctrl+F5)

### Command Line (Windows/Linux/Mac)
```bash
git clone https://github.com/AnReXx2/Simple_console_calculator.git
cd Simple_console_calculator
g++ -std=c++17 Main.cpp -o calculator
./calculator   # ან calculator.exe Windows-ზე
