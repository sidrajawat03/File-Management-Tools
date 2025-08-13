# File-Management-Tools
**COMPANY:** Codtech IT Solutions  
**NAME:** Siddharth singh Rajawat 
**INTERN ID:** CT04DZ475  
**DOMAIN:** C++ Programming  
**DURATION:** 4 Weeks  
**MENTOR:** Neela Santhosh  

A lightweight console-based file manager built in C++ using fstream. It allows users to overwrite, append, and view text file content through an interactive menu-driven interface.

---

## 🚀 Overview

This command-line utility demonstrates practical file handling in C++. Designed with simplicity and clarity, it lets users interact with a text file by writing new content, appending additional lines, or reading the entire file — all using core features of the C++ fstream library.
Perfect for learners aiming to strengthen their understanding of file I/O operations in a real-world context.


---

## ✨ Key Features

- ✏️ **Write to File** – Clears previous content and saves new input
- ➕ **Append to File** – Adds new lines without affecting existing data 
- 📖 **Read from File** – Displays file contents line-by-line 
- ⚠️ **Error Handling** – Alerts user if file access fails  
- 🔁 **Looping Menu** – Allows repeated actions until exit is chosen 

---

## 🛠️ Technology Stack

**Language:**  
- C++

**Libraries Used:**  
- `iostream`  
- `fstream`  
- `string`

**Tools Used:**  
- g++ (GNU Compiler Collection)  
- Terminal or Command Prompt  
- VS Code (Recommended)

---

## 📁 Project Structure

```
Task1_FileManagement/
├── main1.cpp         # Source code with menu-based logic  
├── managed_file.txt # Runtime-generated file for storing input  
└── README.md        # Project documentation  
```

---

## ⚙️ Quick Start

### 🔧 Prerequisites

- C++ compiler (e.g., g++)
- Command line access (Linux, macOS, or Windows)

### ▶️ Compilation

```bash
g++ main.cpp -o filemanager
```

### ▶️ Execution

```bash
./filemanager
```

---

## 🧪 Sample Interaction

```
=== File Management Tool ===
1. Write to File
2. Read from File
3. Append to File
4. Exit

Enter your choice: 1  
Enter text to write to the file: Hello Codtech  
Data written successfully.

Enter your choice: 3  
Enter text to append: This is Task 1!  
Data appended successfully.

Enter your choice: 2  
Contents of the file:  
Hello Codtech  
This is Task 1!
```

---

## 🌍 Real-World Use Cases

- 📚 **Learning Tool** – Ideal for beginners in file I/O and stream operations  
- 🔧 **Utility Scripts** – Create basic data manipulation scripts  
- 🧪 **Prototyping** – Build quick CLI prototypes using file handling  
- 📁 **Log Management** – Store logs or input/output operations  
- 🧑‍💻 **Interview Prep** – Strengthen concepts of file streams and I/O handling  

---

## 🧠 Architecture & Logic Flow

### 📌 Program Flow

1. User selects an operation from the menu  
2. Based on selection:  
   - Input is taken and written/appended using `ofstream`  
   - File is read using `ifstream`  
   - Errors are handled gracefully  
3. Loop continues until the user exits  

---

## 📊 Performance & Design

- ⚡ **Efficient** – Minimal runtime and quick compilation  
- 🎯 **Lightweight** – No external dependencies  
- 🛡️ **Robust** – Prevents invalid file access and handles edge cases  
- 👨‍💻 **Simple UI** – Easy to interact with, even for beginners  

---

## 🔧 Configuration & Customization

- 📝 **Change Target Filename** – Modify `"managed_file.txt"` in the source code  
- 🧱 **Extend Functionality** – Add support for file deletion, renaming, or search  
- 🎨 **Customize UI Prompts** – Update messages and labels for branding  

---

## ✅ Testing Guidelines

### Manual Testing

- Compile and run the tool  
- Provide different types of input  
- Verify contents of `managed_file.txt` after each operation  
- Check for edge cases like empty input or invalid file access  

---

## 🚧 Future Enhancements

- 📁 Support for multiple files  
- 🗑️ File deletion and rename options  
- 🧃 GUI wrapper using Qt or a similar framework  

---

## 🤝 Contributing

Open to contributions! Feel free to fork and enhance the tool with new features or improvements.
### 💡 How to Contribute

```bash
git clone https://github.com/aradhyaverma/file-manager-cpp.git
cd file-manager-cpp
git checkout -b enhancement/YourFeature
# Make changes and commit
git push origin enhancement/YourFeature
# Submit a Pull Request!

```

---

## 📄 License

This project is developed as part of Codtech’s Internship Program. Refer to the LICENSE file for usage terms.

---

## 👨‍💻 Author

**Siddharth singh Rajawat**  
C++ Enthusiast | Codtech Intern – Task 1  
Skilled in building structured console tools and mastering core C++ concepts  

---

## 🙏 Acknowledgments

- Codtech IT Solutions for the opportunity  
- Neela Santhosh for guidance and mentorship  
- The open-source community for tutorials and resources  
- Everyone who provided feedback during development  

### 🔗 Gallerry
