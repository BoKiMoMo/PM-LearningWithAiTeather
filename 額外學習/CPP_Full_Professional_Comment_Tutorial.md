
# 📚 C++ 最完整專業註解教學大全（含 Class、流程、錯誤處理）

---

## ✨ 為什麼要寫專業註解？

- 讓自己與他人快速理解程式結構與功能
- 提高維護性、可讀性
- 支援 Doxygen 工具生成自動文件（API文件）
- 在團隊開發與公開專案（如 GitHub）中顯得更專業
- 幫助自己未來回來看，也能快速理解自己的程式

---

## 📋 必註解的地方總整理

| 類型             | 是否需要註解 | 說明                                  |
|------------------|--------------|--------------------------------------|
| 📄 檔案開頭       | ✅ 必須       | 說明整個檔案的用途                   |
| 🔧 每個函式 Function | ✅ 必須   | 說明功能、參數、回傳值               |
| 🏷️ 重要變數        | ✅ 推薦       | 說明重要或全域變數用途               |
| 🔀 流程分段        | ✅ 推薦       | 用標題分隔流程，例如 `// === 成績輸入 ===` |
| 🔄 迴圈 Loop       | ✅ 推薦       | 說明迴圈目的（特別是複雜迴圈）         |
| ❓ 條件判斷 if/else | ✅ 推薦       | 說明為什麼要這樣判斷                 |
| 🧠 錯誤處理 try/catch（之後學） | ✅ 必須 | 說明錯誤捕捉原因與行為                |
| 🗂️ 資料結構操作（Array, Vector 等） | ✅ 推薦 | 說明資料結構用途與操作目的            |
| 📦 多檔案專案 Module | ✅ 必須 | 每個檔案職責說明（如 MVC 分層）         |

---

## 🧠 Doxygen標準註解格式

### 1️⃣ 檔案註解 `@file`

```cpp
/**
 * @file filename.cpp
 * @brief 檔案主要功能描述
 * @author YourName
 * @date 2025-05-02
 */
```

---

### 2️⃣ 函式註解 `@brief @param @return`

```cpp
/**
 * @brief 加法函式，回傳兩數總和。
 * @param a 第一個整數
 * @param b 第二個整數
 * @return int 兩數的總和
 */
int add(int a, int b) {
    return a + b;
}
```

---

### 3️⃣ 類別註解 `@class`

```cpp
/**
 * @class Student
 * @brief 處理學生基本資料與成績
 */
class Student {
private:
    string name; ///< 學生姓名
    int grade;   ///< 學生成績

public:
    /**
     * @brief 建構子，初始化學生資料
     * @param n 學生姓名
     * @param g 學生成績
     */
    Student(string n, int g);

    /**
     * @brief 顯示學生姓名與成績
     */
    void display();
};
```

---

### 4️⃣ 變數註解 `///<`

```cpp
int score; ///< 使用者輸入的成績
```

---

## 📈 註解快速速查表

| 標籤      | 說明           |
|-----------|----------------|
| `@file`   | 檔案名稱        |
| `@brief`  | 簡要描述        |
| `@param`  | 函式參數說明    |
| `@return` | 函式回傳值說明  |
| `@class`  | 類別描述        |
| `@author` | 作者姓名        |
| `@date`   | 建立或更新日期  |
| `@note`   | 額外補充說明    |
| `@warning`| 特別注意事項    |

---

## 📚 完整示範（含 Class、流程、條件、迴圈）

```cpp
/**
 * @file grade_checker.cpp
 * @brief 處理使用者輸入成績並分類等級，並包含基本錯誤檢查。
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief 主程式：成績輸入、檢查、分類顯示。
 * @return int 程式結束狀態
 */
int main() {
    int a = 0; ///< 使用者輸入的成績

    // === 成績輸入迴圈 ===
    while (true) {
        cout << "
請輸入使用者的成績 : (輸入-1離開) " << endl;
        cin >> a;

        // 離開條件
        if (a == -1) {
            cout << "程式結束，謝謝使用!" << endl;
            break;
        }

        // 成績錯誤範圍檢查
        if (a > 100 || a < 0) {
            cout << "無效成績，請重新輸入。" << endl << endl;
            continue;
        }

        // === 成績等級分類 ===
        if (a >= 90)
            cout << "優等" << endl;
        else if (a >= 80)
            cout << "甲等" << endl;
        else if (a >= 70)
            cout << "乙等" << endl;
        else if (a >= 60)
            cout << "丙等" << endl;
        else
            cout << "不及格" << endl;
    }

    return 0;
}
```

---

# 📣 最後總結

✅ 養成每次寫：
- 檔案說明
- 函式說明
- 重要變數說明
- 流程區段說明

✅ 記住：「**不要只翻譯，要解釋為什麼**」。

✅ 未來結合工具（如 Doxygen）可以直接生成專案說明文件！

---

# 📦 快速複製用註解模板

```cpp
/**
 * @file filename.cpp
 * @brief 簡要描述
 * @author YourName
 * @date yyyy-mm-dd
 */

/**
 * @brief 函式說明
 * @param 參數名 說明
 * @return 回傳說明
 */
回傳型別 函式名稱(參數們) {
    // 程式內容
}
```

---

🎯 從今天起，讓你的每份程式都變得專業又有溫度！
