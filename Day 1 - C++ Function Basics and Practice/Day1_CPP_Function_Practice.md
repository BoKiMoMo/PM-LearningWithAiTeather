
# 📘 Day 1 - C++ 函式初探與實作練習  
**Day 1 - C++ Function Basics and Practice**

---

## 🎯 主題說明｜Lesson Goal  
了解 C++ 函式的語法結構，練習定義與呼叫函式，並培養「抽象思考 × 重複邏輯封裝」的能力。  
**Understand the syntax of functions in C++, and learn to define, call, and abstract logic into reusable code.**

---

## 🧠 概念導入｜Concept Analogy  
你可以把「函式」想成一張「做菜食譜」📄。  
每次煮泡麵的流程都是一樣的，我們可以寫成函式，讓程式在需要時自動執行。

> A function is like a recipe. When you make noodles, you follow the same steps.  
> Instead of rewriting the steps, define a function and reuse it when needed.

---

## 🔍 語法範例｜Code Example

```cpp
int getMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
```

📌 語法說明：
- `int`：回傳型別（這個函式會回傳整數）
- `getMax`：函式名稱（比較兩個整數）
- `int a, int b`：兩個整數參數
- `return`：回傳較大值

---

## ✍️ 實作任務｜Practice

1. 實作 `getMax(int a, int b)`，讓使用者輸入兩個整數，輸出最大值  
2. 延伸任務：改寫為 `compareTwo()`，輸出：
   - A is greater
   - B is greater
   - A and B are equal

---

## 🔊 技術英文句型｜Tech English Practice

> This function takes two integers and returns the greater one.  
> 它接收兩個整數並回傳較大的那個。

> We compare a and b, and return the larger.  
> 我們比較 a 和 b，然後回傳較大值。

---

## 📖 詞彙對照表｜Glossary

| 中文詞彙 | 英文詞彙 | 說明 |
|----------|----------|------|
| 函式     | function | 可重複執行的程式區塊 |
| 回傳     | return   | 將結果傳回主程式 |
| 比較     | compare  | 對兩個值進行大小比較 |
| 輸入     | input    | 接收使用者輸入資料 |

---

## 🗂️ GitHub 任務（可選）

- 建立資料夾：`cpp-learning/week01/functions/`  
- 建立檔案：`max_value.cpp`  
- 加入註解與英文說明  
- 撰寫 `README.md`：說明功能與如何使用程式

---

## 🎒 Day 1 功課清單｜Homework

- [ ] 完成 `getMax()` 與 `compareTwo()` 程式
- [ ] 程式加註解並上傳 GitHub
- [ ] 用英文寫一句功能說明貼進 README
- [ ] 抄寫並唸出技術英文句型 × 2
