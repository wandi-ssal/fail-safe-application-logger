<div align="center">
<h2> Fail-safe API library that minimize C/C++ application crash when generating log messages.</h2>
</div>

The primary benefit using this fail-safe C-Program API library over other application loggers, is that it does extensive runtime validation to prevent the application from crashing due to common programmers printf() style pitfalls or unpredictable execution segmentation faults. (e.g., string type %s using NULL, 0 or negative value).
During runtime, the API decode, analyze and apply 18 different Bound Parameter verification techniques (see WandiSSAL-Bound-Capabilities.pdf) to ensure log messages are used accurately, fail-safe and reliable. If a runtime validation fails the API generates an error code and simple returns, allowing the application to continue normal processing (no need for the application to check/stop processing).
In addition, the library was designed and implemented using secure coding practices and techniques. It was further tested with Common Weakness Enumeration (CWE) security scanning tools to identify CWE vulnerabilities and weaknesses applicable to the library codebase. Based on those finding the codebase was enhanced to incorporate CWE recommended solutions to reduce security risks and increase software reliability. This includes but not limited to the following CWEs:
* CWE-362: Concurrent Execution using Shared Resource with Improper Synchronization ('Race Condition').
* CWE-120: Buffer Copy without Checking Size of Input ('Classic Buffer Overflow').
* CWE-134: Use of Externally-Controlled Format String.
* CWE-126: Buffer Over-read.
* CWE-119: Improper Restriction of Operations within the Bounds of a Memory Buffer.
* CWE-190: Integer Overflow or Wraparound.
* CWE-787: Out-of-bounds Write.
* CWE-22: Improper Limitation of a Pathname to a Restricted Directory ('Path Traversal')
* CWE-20: Improper Input Validation.
* CWE-284: Improper Access Control.
* CWE-200: Exposure of Sensitive Information to an Unauthorized Actor.
* CWE-770: Allocation of Resources Without Limits or Throttling.

The library API:
*	provides print() style interface that is commonly used for logging messages.
*	decodes log message specifications and arguments into element/value pairs.
*	defines boundaries for element/value pairs specification and argument.
*	analyzes element/value pairs for accurate specification and argument usage.
*	validates element/value pairs for unintentional programmer’s printf() misuse.
*	checks element/value pairs for some printf() attacker malicious patterns.
*	filters log messages for development and/or deployment environments.
*	enables/disables log message processing and generation.
*	provides a highly robust, fail-safe and reliable log message operations.

Explanation on how to use the API functions (WandiSSAL-Using-API-Function.pdf), and a simple example program (WandiSSAL-simple-example.c)
* Manual page for WandiSSAL_LoggerStartUp() function (WandiSSAL-API-LoggerStartUp-Function.pdf).
*	Manual page for WandiSSAL_LoggerAppsMsg() function (WandiSSAL-API-LoggerAppsMsg-Function.pdf).
*	Manual page for WandiSSAL_LoggerShutDown() function (WandiSSAL-API-LoggerShutDown-Function.pdf).

Explanation about the validation capabilities benefit (WandiSSAL-Bound-Capabilities.pdf) and program examples demonstrating the validations use (WandiSSAL-bound-examples.c)

A setup file example (LoggerMessageDefines.txt) and corresponding description about how to the define the file parameters (WandiSSAL-LoggerMessageDefines.pdf).

Extracting and verifying zip file for authenticity:
*	download WandiSSAL-LoggerLib-2.1-linux-arm64-gnu.zip and WandiSSAL-LoggerLib-2.1-linux-arm64-gnu.zip.asc files.
*	verify zip file integrity: gpg --verify WandiSSAL-LoggerLib-2.1-linux-arm64-gnu.zip.asc WandiSSAL-LoggerLib-2.1-linux-arm64-gnu.zip
*	if OK then unzip file: unzip WandiSSAL-LoggerLib-2.1-linux-arm64-gnu.zip
*	read the extracted README-first and README files for further installation and execution instructions.

Contact: **bwoodley@istech.com**
