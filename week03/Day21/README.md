# 📘 DAY 21 – 模擬面試與錄音回顧 + C++ 小專案  
*(DAY 21 – Mock Interview & Recording Review + C++ Mini Project)*

---

## 🎯 主題說明 | Topic Introduction  

**中文：**  
今天的重點是進行 PM 模擬面試（Mock Interview），並透過錄音回顧檢視口語表達與邏輯結構。  
技術面則安排一個小型 C++ 專案，整合前面學過的函式、陣列與流程控制。  

**English:**  
Today’s focus is a PM mock interview combined with recording review, to evaluate speaking skills and logical flow.  
On the technical side, you will complete a small C++ project that integrates functions, arrays, and control flow.  

---

## 🧠 概念導入 | Concept Analogy  

**中文：**  
模擬面試就像是「上場前的熱身賽」，錄音回顧能幫助你客觀檢視自己表達的弱點，並在真正面試前修正。  
小型專案則是檢視你這段時間學習 C++ 的成果，能夠將知識轉化為一個可執行的作品。  

**English:**  
A mock interview is like a warm-up match before the real game. Recording review helps you objectively spot weaknesses in your speaking and logic.  
The C++ mini project is your chance to transform learning into a working product, proving mastery of the basics.  

---

## 🔍 任務內容 | Task Breakdown  

### PM 模擬面試  
1. 準備 **3 分鐘自我介紹**（含 PM 能力與專題介紹）。  
2. 回答 **3 個常見 PM 面試問題**：  
   - 為什麼想成為 PM？  
   - 請分享一次與跨部門合作的經驗。  
   - 如果開發時程落後，你會怎麼處理？  
3. 錄音並回放，檢查語速、邏輯與重點是否清楚。  

### C++ 小專案  
實作一個 **學生成績管理系統**，功能包括：  
- 新增學生與分數  
- 計算平均分數  
- 找出最高分與最低分  
- 使用陣列與函式分工  

---

## ✍ 實作任務 | Practice  

1. **PM 模擬面試**  
   - 寫下你的自我介紹逐字稿  
   - 錄音，並在 Notion 記錄回顧心得  

2. **C++ 小專案**  
   ```cpp
   #include <iostream>
   using namespace std;

   const int MAX = 100;

   void addScore(int scores[], int &count, int score) {
       scores[count++] = score;
   }

   double getAverage(int scores[], int count) {
       double sum = 0;
       for(int i = 0; i < count; i++) sum += scores[i];
       return count > 0 ? sum / count : 0;
   }

   int getMax(int scores[], int count) {
       int maxVal = scores[0];
       for(int i = 1; i < count; i++) 
           if(scores[i] > maxVal) maxVal = scores[i];
       return maxVal;
   }

   int getMin(int scores[], int count) {
       int minVal = scores[0];
       for(int i = 1; i < count; i++) 
           if(scores[i] < minVal) minVal = scores[i];
       return minVal;
   }

   int main() {
       int scores[MAX], count = 0;
       addScore(scores, count, 85);
       addScore(scores, count, 92);
       addScore(scores, count, 76);

       cout << "平均分數: " << getAverage(scores, count) << endl;
       cout << "最高分: " << getMax(scores, count) << endl;
       cout << "最低分: " << getMin(scores, count) << endl;
       return 0;
   }
```
## 📖 詞彙對照表 | Glossary  

| 中文       | English            | 說明 |
| ---------- | ------------------ | ---- |
| 模擬面試   | Mock Interview     | 練習面試的模擬場景 |
| 錄音回顧   | Recording Review   | 回放檢查自己的口語表達 |
| 專案       | Project            | 用來驗證技能的實作成果 |
| 陣列       | Array              | 存放多個元素的資料結構 |
| 函式       | Function           | 可重複使用的程式模組 |

---

## 🗂 GitHub 任務 | GitHub Task  

- 建立一個新資料夾 `Day21-MockInterview-CPPProject`  
- 上傳：  
  - PM 模擬面試逐字稿（`interview_notes.md`）  
  - 錄音回顧心得（`reflection.md`）  
  - C++ 小專案程式碼（`student_scores.cpp`）  

---

## 🎒 功課清單 | Homework Checklist  

- [ ] 撰寫並錄製 PM 模擬面試逐字稿  
- [ ] 完成錄音回顧與心得  
- [ ] 實作並測試 C++ 小專案  
- [ ] 上傳所有成果到 GitHub  

---

## 🎯 小結 Summary  

**中文：**  
今天整合了 **PM 面試練習** 與 **C++ 小專案**，一方面訓練表達與邏輯，另一方面檢視技術實力。這能幫助你在未來面試時更具自信，也能在作品集上展示多元能力。  

**English:**  
Today combines **PM interview practice** with a **C++ mini project**. It trains communication and logical skills while validating your technical knowledge. This dual preparation boosts confidence for interviews and enriches your portfolio.  