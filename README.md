# QMX CORPORATION - SCM (SYSTEM CONTROL MANAGER)
> The Best System Control Version.

## SCM (SYSTEM CONTROL MANAGER)
![ControlManager](https://img.shields.io/badge/System--V-green)
![License](https://img.shields.io/badge/License-BSD--2--Clause-blue)
![Status](https://img.shields.io/badge/Pure--C--Programs-orange)
![Security](https://img.shields.io/badge/Security--IS-red)

---

## Navigation
- [LICENSE HEADER](#license-header)
- [RULES](#rules)
- [FUTURE IMPLEMENTATIONS](next-implementations)

---

### LICENSE HEADER
* **BCD-2: Capsule of Two Patent**
* **Copyright (C) 2026 QMX Corporation**

---

### RULES 
* **Problems: If you no resolving a problem, the PR is canceled**
* **Mantainers-PR: Excect me, please open a PR for me review**
* **Is mandatory in ALL Atuals and Futures Files/Folders the License Header**
* **Thanks for conttribute with project! Happy Coding!**

---

## 🛠️ System Toolchain

| Technology | Component | Status |
| :--- | :--- | :--- |
| 🖥️ **Assembly** | NASM (Netwide Assembler) | `Integrated` |
| 🦾 **C / C++** | Clang v19.x Engine | `Active` |
| 🔗 **Linker** | LLVM `ld.lld` Utilities | `Optimized` |

---

## IMPLEMT 
### NEXT IMPLEMENTATIONS 
* **Remote Servers, Upload, Fetch etc**
* **Files Control (FIC)**
* **Store the Exact Byte in a Path for continue the Clone in critical cases (example: Shutdowm the PC)**

---

## PRE-REQUISITES
### WHAT I USES FOR COMPILE THE OVAM?
* **Clang, OPTIONAL: Compiler MSCV (Visual Studio)**
* **Linker: LLVM**
* **Operating System: Windows, Unix, Linux, MacOS or Android**
* **Caller: Make**
* **WARNING: The Flow is: Make -> build.bat/build.sh -> Compiler -> Linker -> App Signer -> File .bin**

---

## SIGNATURE
### SIGNER 
* **In Windows: Signtool (signtool.exe) in Windows SDKs**
* **In Unix, Linux, Android or MacOS: The App Signer Supported. e.g: OpenSSL/OpenSSH**
* **RFC 3161 Modern**

---
```text
| SCM 
     | .devcontainer # Docker Container
          | devcontainer.json # Define basic configs for Container 
          | DockerFile # The HelpRunner of Install Dependencies
     | .github # Workspaces, PR, Issues etc
           | ISSUE_TEMPLATE # Issues 
              | bug_report.md # Report Bugs 
              | feature_request.md # Requests Features / New Ideas
         | pull_request_template.md # The 'God' of PRs
     | PathWrapper # Buffers, Logs Debugger
         | path.c # The Control Buffers-Requests-Sends
         | path.h # The Lib of Buffers and Requests/Sends
         | wrapper.c # The Control Logs-Debug 
         | wrapper.h # Lib of Logs and Debugging
     | .gitattributes  # Essential Git File (EGF)
     | .gitignore  # Essential Git File (EGF)
     | .gitmodules # Essential Git File (EGF)
     | CHANGELOG.md  # The Logs of Changes
     | CONTRIBUTING.md  # With I collaborating with OVAM Project?
     | CONTRIBUTORS.md  # The Contributors
     | GOVERNANCE.md  # BDFL and System Updates
     | LICENSE  # BSD-2 License
     | README.md  # The README
     | ROADMAP.md # RoadMaps
     | SECURITY.md # Politics Security
     | SUPPORT.md # Politics Support
```
* **WARNING:**
* **In build.sh, please modify the App Signer for App Signer Installed**
* **But, not commit your alteration in build.sh**

---

## LICENSE
### BSD-2 
* **The License is the BSD-2. See the File 'LICENSE' for more informations**