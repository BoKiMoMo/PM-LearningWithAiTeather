📘 Day 10 – MVP 設計與驗證 (MVP Design & Validation) + C++ 陣列練習
🎯 主題說明 | Topic Introduction
中文：
最小可行產品（Minimum Viable Product, MVP）是一種快速驗證產品假設的開發策略。它的核心目標是用最少的資源與功能，驗證市場需求與用戶反應，並為後續開發提供依據。

English:
A Minimum Viable Product (MVP) is a development strategy for quickly validating product hypotheses. Its main goal is to use minimal resources and features to test market demand and user response, providing data for future development.

🧠 核心概念 | Core Concepts
1. 為什麼要做 MVP？ | Why Build an MVP?
降低風險（Reduce Risk）
減少一次投入過多資源導致失敗的風險。

快速驗證（Validate Quickly）
及早獲得用戶反饋，判斷方向是否正確。

節省成本（Save Cost）
先做核心功能，避免浪費時間與金錢。

2. MVP 設計流程 | MVP Design Process
定義核心價值（Define Core Value）

用一句話說明產品要解決的問題。

列出必要功能（List Essential Features）

選擇能實現核心價值的最少功能。

選擇驗證方法（Choose Validation Method）

登陸頁（Landing Page）、假門（Fake Door）、互動原型（Interactive Prototype）、人工服務（Wizard of Oz）。

收集反饋（Collect Feedback）

用戶訪談、數據分析、問卷調查。

迭代優化（Iterate & Improve）

根據數據結果優化功能與體驗。

🔍 常見 MVP 類型 | Common MVP Types
類型	說明	範例
登陸頁 MVP	用一個頁面測試用戶是否有興趣	Dropbox 早期介紹影片
假門 MVP	提供功能入口，但尚未實作	Google Docs 新功能按鈕
互動原型	用設計工具模擬功能	Figma、InVision 原型
Wizard of Oz	前端看似自動化，實際人工處理	Zappos 早期賣鞋模式

✍ 實作任務 | Practice
選擇一個你的產品構想，寫下它的 核心價值描述（一句話）。

列出 3 個必要功能，並標記優先級（P1、P2、P3）。

選擇一種 MVP 形式（如登陸頁、假門等）。

設計一份 MVP 驗證計畫（包含目標、驗證方法、成功指標）。

🗂 GitHub 任務 | GitHub Task
在 PM-Notes repo 中建立 Day10_MVP.md

上傳：

核心價值描述

功能優先級表

MVP 驗證計畫

📖 詞彙對照表 | Glossary
中文	English	說明
最小可行產品	Minimum Viable Product (MVP)	最小成本驗證假設的產品
核心價值	Core Value	產品的核心解決方案
假門	Fake Door	提供入口但功能尚未實作
登陸頁	Landing Page	用來收集用戶興趣的單頁網站
成功指標	Success Metric	判斷驗證結果的量化標準

💻 C++ 陣列練習 | C++ Array Practice
題目：
建立一個整數陣列，輸入 5 個分數，計算並輸出：

平均分數

最高分

最低分

程式碼範例：

cpp
複製程式碼
#include <iostream>
using namespace std;

int main() {
    int scores[5];
    int sum = 0;
    int maxScore = -1;
    int minScore = 101;

    cout << "請輸入 5 個分數：" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> scores[i];
        sum += scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];
        if (scores[i] < minScore) minScore = scores[i];
    }

    cout << "平均分數: " << sum / 5.0 << endl;
    cout << "最高分: " << maxScore << endl;
    cout << "最低分: " << minScore << endl;

    return 0;
}
🎯 小結 Summary
中文：
MVP 是用最少的功能快速驗證市場需求的重要策略，避免浪費時間與資源。同時，C++ 陣列的應用能幫助我們在程式中管理資料並做簡單分析。

English:
An MVP is a key strategy to quickly validate market demand with minimal features, avoiding wasted time and resources. Meanwhile, C++ arrays help manage and analyze data efficiently.