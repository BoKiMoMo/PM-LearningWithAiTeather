#📘 Day 8 – PRD 優化與案例分析 + C++ 練習
## 🎯 主題說明｜Topic Introduction

---

**中文：**

本日目標是基於 Day 7 的 AI Meeting Streaming Tool PRD V1，進行內容優化與結構調整，確保產品文件在開發、設計、行銷與投資人之間能夠清楚傳達。最後會附上簡單的 C++ 練習，維持程式思維的敏銳度。

**English:**

Today’s goal is to refine the AI Meeting Streaming Tool PRD V1 from Day 7, improving structure and clarity to ensure clear communication between development, design, marketing, and investors. We’ll also include a short C++ exercise to keep programming skills sharp.

---

## 🛠 PRD 優化重點｜PRD Refinement Focus

1. **目的明確化（Clarify Purpose）**
    - 突顯產品核心價值與差異化特點。
    - 加入使用者痛點與產品解決方案對應表。
2. **結構優化（Improve Structure）**
    - 使用更清楚的標題與分段格式。
    - 增加流程圖與互動示意圖，降低閱讀障礙。
3. **指標量化（Quantify Metrics）**
    - 在成功指標中增加數據化目標。
    - 加入短期與長期的產品 KPI。
4. **風險與對策（Risk & Mitigation）**
    - 補充產品開發過程中可能遇到的風險與應對方式。

---

## 📄 優化後 PRD – AI Meeting Streaming Tool

### 1. 核心價值主張（Core Value Proposition）

> 中文： 為需要高效會議紀錄與資訊管理的團隊提供精準、即時、可整合的會議助手，減少重複溝通成本，提高專案推進效率。
> 
> 
> **English:** Provide teams needing efficient meeting documentation and information management with an accurate, real-time, and integrable meeting assistant, reducing redundant communication costs and improving project progress efficiency.
> 

---

### 2. 使用者痛點與解決方案（Pain Points & Solutions）

| 痛點 | 解決方案 |
| --- | --- |
| 會議後需要花時間整理筆記 | 自動生成摘要與行動項目 |
| 無法辨識不同講者內容 | 多麥克風講者識別技術 |
| 會議紀錄無法即時同步 | 雲端自動整合 Notion/Trello/Jira |
| 無法快速搜尋歷史紀錄 | 標籤化與分類功能 |

---

### 3. 產品流程（Product Workflow）

Idea → Research → Planning → Development → Testing → Launch → Iteration

*(附上簡單流程圖，可用 Figma 或 Excalidraw 製作)*

---

### 4. 成功指標（Success Metrics）

- 轉錄準確率 ≥ 90%
- 會議摘要生成時間 ≤ 60 秒
- 使用者留存率 ≥ 80%（一週內）
- 50% 以上會議記錄自動同步至第三方工具

---

### 5. 風險與對策（Risks & Mitigation）

| 風險 | 對策 |
| --- | --- |
| 環境噪音影響辨識 | 增加降噪演算法 |
| AI 成本過高 | 引入本地推理或混合運算模式 |
| 隱私疑慮 | 全程加密與錄音同意提示 |

---

## 💻 C++ 練習題｜C++ Exercise

**題目：**

寫一個程式，讓使用者輸入會議參與者的姓名與角色（例如 "Alice - PM"），並將這些資料儲存在陣列中，最後輸出參與者列表。

**範例輸入：**

輸入人數：3

1. Alice - PM
2. Bob - Engineer
3. Carol - Designer

會議參與者：

1. Alice - PM
2. Bob - Engine
3. Carol - Designer

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "輸入人數：";
    cin >> n;
    cin.ignore(); // 清除換行符

    string participants[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        getline(cin, participants[i]);
    }

    cout << "\n會議參與者：" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << participants[i] << endl;
    }
    return 0;
}

```

---

## 📂 GitHub 任務｜GitHub Task

- 新增資料夾 `PRD/Day8`
- 上傳優化後的 PRD 文件（Markdown 格式）
- 上傳 C++ 練習程式檔案 `meeting_participants.cpp`

---

## 🎒 功課清單｜Homework Checklist

- [x]  完成 PRD 優化
- [x]  撰寫 Pain Points & Solutions 對應表
- [ ]  繪製產品流程圖並附於文件
- [ ]  完成 C++ 陣列練習並上傳至 GitHub

---

## 🎯 小結｜Summary

**中文：**

經過優化後，PRD 不僅對產品核心價值與功能進行了清楚描述，也加入了量化指標與風險對策，讓開發與溝通更加順暢。

**English:**

After refinement, the PRD now clearly communicates the core value and features, with quantified metrics and risk mitigation strategies, making development and communication more efficient.