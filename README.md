<div align="center">
<h2> Fail-safe API library that minimize C/C++ application crash when generating log messages.</h2>
</div>

The primary benefit using this fail-safe and adjustable C/C++ Program application API logger library is that the API performs extensive runtime checks and validations to identify programmatic faults/errors and take appropriate programmatic actions to minimize the application from crashing. The API handles many common printf() style pitfalls that often leads to unpredictable execution errors and segmentation faults. (e.g., passing %s specification values of NULL, 0 or negative numbers). Furthermore, if a runtime validation check fails the API generates an error code and simply returns, allowing the application to continue normal processing (no need for the application to check return status and/or stop processing).

During runtime, the API decode, analyze and apply 18 different (WandiSSAL-Bound-Capabilities.pdf) verification techniques to ensure log messages are used accurately, fail-safe and reliable to generate log messages.

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
