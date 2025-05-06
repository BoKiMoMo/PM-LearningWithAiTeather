#📘 Day 3 - 複合條件、巢狀結構與選擇控制 (Day 3 - Compound Conditions, Nested Structures & Switch Control)
## 🎯 主題說明｜Topic Introduction

---

### 中文：

今天我們要學的是讓程式有「判斷能力」！

現實生活中很多行為是有條件的，比如「考試分數達標才可以領獎」，

在程式世界中，就需要透過條件判斷 (`if/else`) 和多選擇控制 (`switch`) 來達成！

### English：

Today, we will learn how to make our program "think" and make decisions!

Conditional statements (`if/else`) and multi-choice control (`switch`) help a program select actions based on different situations.

---

## 🧠 概念導入｜Concept Analogy

### 中文：

想像你要點餐🍔，如果今天有三種餐點選項，你會根據自己的喜好來決定：

- 如果喜歡漢堡 ➔ 點漢堡
- 如果喜歡炸雞 ➔ 點炸雞
- 如果都不喜歡 ➔ 選沙拉

在程式裡，我們也會依照「條件」來做出選擇！

### English：

Imagine ordering food🍔:

- If you like burgers, order a burger.
- If you like fried chicken, order fried chicken.
- If neither, choose salad.

In programming, we also select actions based on conditions!

---

## 🔍 語法範例｜Code Example

### 1️⃣ 複合條件 (Compound Condition)

```cpp
if (score >= 60 && score <= 100) {
    cout << "及格且成績合理" << endl;
} else if (score < 60 || score > 100) {
    cout << "不及格或成績異常" << endl;
}
```

📌 語法說明：

- `&&` 同時滿足兩個條件
- `||` 滿足任一個條件即可

---

### 2️⃣ 巢狀 if/else (Nested if/else)

```cpp
if (score >= 60) {
    if (score >= 90) {
        cout << "優等" << endl;
    } else {
        cout << "及格" << endl;
    }
} else {
    cout << "不及格" << endl;
}
```

📌 語法說明：

- 外層判斷大條件
- 內層再細分小條件

---

### 3️⃣ switch 選擇控制 (Switch Control)

```cpp
cpp
複製程式碼
int level = 3;
switch (level) {
    case 1:
        cout << "初級" << endl;
        break;
    case 2:
        cout << "中級" << endl;
        break;
    case 3:
        cout << "高級" << endl;
        break;
    default:
        cout << "未知等級" << endl;
}

```

📌 語法說明：

- `case` 處理各種可能
- `default` 當沒有符合時的備案

---

## ✍️ 實作任務｜Practice

### 🧩 任務一：成績判斷優化版

- 讓使用者輸入分數
- 使用複合條件檢查有效性（0~100）
- 使用巢狀 if 判定成績：
    - 90↑：優等
    - 80~89：甲等
    - 70~79：乙等
    - 60~69：丙等
    - <60：不及格

---

### 🧩 任務二（進階）：成績等級選單

- 讓使用者輸入數字1~5
- 使用 `switch` 顯示對應等級
- 其他 ➔ 顯示「無此等級」

---

## 🔊 技術英文句型｜Tech English Practice

| 技術英文 | 中文解釋 |
| --- | --- |
| "If the condition is true, execute this block." | 如果條件為真，執行這個區塊 |
| "Switch allows multi-way branching." | Switch 允許多方向選擇分支 |
| "Each case should end with a break." | 每個case結束要加break防止穿透 |

---

## 📖 詞彙對照表｜Glossary

| 中文詞彙 | 英文詞彙 | 簡單說明 |
| --- | --- | --- |
| 複合條件 | Compound Condition | 多個條件一起判斷 |
| 巢狀結構 | Nested Structure | if內有if的情境 |
| 選擇控制 | Switch Control | 用固定選項做選擇的方式 |
| 中斷指令 | Break | 結束switch或loop的指令 |

---

## 🗂️ GitHub任務｜GitHub Task

- 新增資料夾：`Day3`
- 上傳檔案：
    - `grade_if_else.cpp`
    - `grade_switch_case.cpp`
- 每個檔案內附加完整中文註解
- 自己嘗試在 GitHub 寫簡單英文 README (explain purpose of the code)

---

## 🎒 功課清單｜Homework Checklist

- [ ]  閱讀完成 Day3 正式講義
- [ ]  完成 任務一
- [ ]  完成 任務二
- [ ]  上傳 GitHub
- [ ]  英文句型筆記3句
- [ ]  更新 Notion 進度

---

# 🎯 小結 Summary

今天學會複合條件、巢狀判斷和選擇控制，

可以讓你的程式依據不同情境自動做出最適合的選擇，

這是邁向智慧化程式設計的重要第一步！🌟