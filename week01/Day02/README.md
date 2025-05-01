# 📘 Day 2 - C++ 條件判斷基礎與練習  
**Day 2 - C++ Conditional Statements Basics and Practice**

---

## 🎯 主題說明｜Lesson Goal  
學習 `if`, `else if`, `else` 的語法，了解條件判斷在程式中的應用。  
**Learn the structure of if-else statements and how to control program flow based on conditions.**

---

## 🧠 概念導入｜Concept Analogy  
把條件判斷想成「自動販賣機」選擇飲料的邏輯。  
👉 如果投幣超過 30 元 ➔ 買罐裝咖啡  
👉 如果投幣介於 10~30 元 ➔ 買瓶水  
👉 如果投幣少於 10 元 ➔ 顯示「金額不足」

> Conditional statements are like vending machines deciding what to give based on your coins.

---

## 🔍 語法範例｜Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int coins;
    cout << "Enter the amount of coins: ";
    cin >> coins;

    if (coins >= 30)
        cout << "You can buy a coffee." << endl;
    else if (coins >= 10)
        cout << "You can buy a bottle of water." << endl;
    else
        cout << "Not enough coins." << endl;

    return 0;
}
```

📌 語法說明：
- `if (條件)`：當條件成立時執行
- `else if (條件)`：另一個條件選項
- `else`：以上都不符合時執行

---

## ✍️ 實作任務｜Practice

1. 請撰寫一個程式，輸入一個人的年齡，輸出：
   - 如果小於 13 歲 ➔ 「兒童」
   - 如果 13 ~ 18 歲 ➔ 「青少年」
   - 如果大於 18 歲 ➔ 「成年人」

---

## 🔊 技術英文句型｜Tech English Practice

> The program checks the user's input and decides what message to print.  
> 程式檢查使用者輸入並決定要印出什麼訊息。

> If the condition is true, the corresponding block of code will execute.  
> 如果條件為真，對應的程式區塊就會執行。

---

## 📖 詞彙對照表｜Glossary

| 中文詞彙 | 英文詞彙 | 說明 |
|----------|----------|------|
| 條件     | condition | 判斷是否成立的基礎 |
| 判斷     | decision  | 根據條件做選擇 |
| 代幣     | coin      | 投入的金額單位 |

---

## 🗂️ GitHub 任務（可選）

- 建立資料夾：`cpp-learning/week01/Day02/`
- 建立檔案：`age_check.cpp`
- 加上註解與簡單英文說明
- 撰寫 README.md 說明程式功能

---

## 🎒 Day 2 功課清單｜Homework

- [ ] 完成年齡判斷小程式
- [ ] 程式加註解並上傳 GitHub
- [ ] 用英文寫一句功能說明貼進 README
- [ ] 抄寫並唸出技術英文句型 × 2
