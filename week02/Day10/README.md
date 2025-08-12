# 📘 Day 10 – MVP 設計與驗證 + C++ 練習 (MVP Design & Validation + C++ Practice)

---

## 🎯 主題說明 | Topic Introduction
**中文：**  
最小可行產品（Minimum Viable Product, MVP）是一種用最小成本驗證產品假設的方法。MVP 並不是簡化版的產品，而是一個用於快速測試市場與需求的策略。本日課程將介紹 MVP 的設計原則、驗證方法，以及在開發早期如何進行迭代。同時，我們也會進行 C++ 小練習，強化邏輯思維。

**English:**  
The Minimum Viable Product (MVP) is a method to validate product assumptions with minimal cost. An MVP isn’t simply a “lite version” of your product—it’s a strategy to quickly test the market and demand. Today’s lesson covers MVP design principles, validation methods, and early iteration. We’ll also do a C++ mini exercise to strengthen logical thinking.

---

## 🧠 核心概念 | Core Concepts

### 1. MVP 的定義 | What is an MVP?
- **中文：** 具備最核心功能，用於測試假設並收集用戶反饋的產品版本。  
- **English:** A product version with only the core features to test assumptions and gather user feedback.

### 2. MVP 設計原則 | MVP Design Principles
1. **單一核心價值** (Single Core Value) – 聚焦一個主要問題  
2. **快速交付** (Fast Delivery) – 在最短時間內上線測試  
3. **可衡量結果** (Measurable Results) – 能透過數據驗證假設  
4. **低成本實現** (Low-cost Implementation) – 減少資源浪費  

### 3. MVP 驗證方法 | MVP Validation Methods
- **Landing Page** – 建立產品介紹頁測試註冊意願  
- **Prototype Demo** – 用互動原型收集回饋  
- **Concierge Test** – 人工模擬部分服務流程  
- **A/B 測試** – 比較不同版本反應  
- **Smoke Test** – 未完成產品前測試市場反應  

---

## 🔍 MVP 與 PDLC 的關係
**中文：** MVP 通常位於 PDLC 的早期階段，屬於「概念驗證」與「早期測試」，能有效降低後期開發風險。  
**English:** MVP usually fits in the early stages of the PDLC, serving as “concept validation” and “early testing,” reducing late-stage development risks.

---

## ✍ C++ 練習 | C++ Practice
**題目：**  
請用 C++ 撰寫一個簡單的問卷系統，輸入多位使用者對產品的滿意度（1~5 分），並計算平均分數。

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, score, sum = 0;
    cout << "請輸入受訪人數: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "輸入第 " << i << " 位的評分 (1-5): ";
        cin >> score;
        sum += score;
    }

    double avg = (double)sum / n;
    cout << "平均滿意度為: " << avg << endl;
    return 0;
}

---

## 📖 詞彙對照表 | Glossary
| 中文 | English | 說明 |
| --- | --- | --- |
| 最小可行產品 | Minimum Viable Product (MVP) | 驗證產品假設的最小功能集合 |
| 登陸頁 | Landing Page | 測試市場反應的單頁網站 |
| 原型 | Prototype | 模擬產品外觀與功能的版本 |
| 管家測試 | Concierge Test | 以人工方式模擬部分服務 |
| 冒煙測試 | Smoke Test | 在產品未完成前測試市場意願 |

---

## 🗂 GitHub 任務 | GitHub Task
- 在 `PM-Notes` repo 建立 `Day10_MVP_Design.md`
- 上傳：
  - MVP 概念描述
  - 驗證方法計畫
  - C++ 練習程式碼

---

## 🎒 功課清單 | Homework Checklist
- [ ] 撰寫 MVP 概念說明  
- [ ] 規劃至少兩種驗證方法  
- [ ] 完成 C++ 問卷系統  
- [ ] 上傳所有檔案至 GitHub  

---

## 🎯 小結 Summary
**中文：**  
MVP 是一種快速驗證假設的方法，能讓團隊用最小成本獲取真實市場回饋。C++ 練習能幫助自動化數據收集，提高測試效率。  

**English:**  
MVP is a quick validation method that lets teams gain real market feedback with minimal cost. The C++ practice helps automate data collection and improve testing efficiency.

