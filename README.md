<div align="center">
<h2> Fail-safe application API logger that minimize application crash when generating log messages.</h2>
</div>

The primary benefit using this fail-safe C-Program API library over other application loggers, is that it does extensive runtime validation to prevent the application from crashing due to common printf() style pitfalls (e.g., using NULL, 0 or negative value for %s). If a runtime validation fails the API generates an error code and simply returns, allowing the application to continue normal processing (no need for the application to stop processing). The API uses a [Bound Parameter approach](WandiSSAL-Bound-Capabilities.pdf) approach to decode, analyze and validate log arguments to ensure valid API usage, fail-safe execution and reliable log message generation.

This library is part of another effort to provide [Secure Software Adaptable Logging](Advanced-Logging-Capabilities.pdf) currently does exist with other logging tools, utilities and systems.

The library API:
1. uses C-Program print() style interface that is often used by programmers to log messages.
2. decodes log message strings and arguments into element/value pairs.
3. analyzes element/value pairs for accurate use of log message arguments.
4. validates element/value pairs for unintentional programmer’s misuse of log argument.
5. checks element/value pairs for some attackers printf() malicious patterns.
7. generates log messages for development and deployment environments.
8. provides robust, fail-safe and reliable API operations.

Quick how to use [Wandi-SSAL API functions in C/C++ Program application.](WandiSSAL-Using-API-Function.pdf)
* Details for [LoggerStartUp()](WandiSSAL-API-LoggerStartUp-Function.pdf) function.
* Details for [LoggerAppsMsg()](WandiSSAL-API-LoggerAppsMsg-Function.pdf) function.
* Details for [LoggerShutDown()](WandiSSAL-API-LoggerShutDown-Function.pdf) function.

Setup [LoggerMessageDefines.txt](WandiSSAL-LoggerMessageDefines.pdf) file used by Wandi-SSAL API functions.

Refer to [WandiSSAL-examples.c](WandiSSAL-examples.c) for detailed application examples using the Bound Capability Parameter Validation.

For Linux OS:
* download [WandiSSAL-LoggerLib-2.0-linux-arm64-gnu.zip](./WandiSSAL-LoggerLib-2.0-linux-arm64-gnu.zip) and [WandiSSAL-LoggerLib-2.0-linux-arm64-gnu.zip.asc](./WandiSSAL-LoggerLib-2.0-linux-arm64-gnu.zip.asc) files.
* verify zip file integrity: `gpg --verify WandiSSAL-LoggerLib-2.0-linux-arm64-gnu.zip.asc WandiSSAL-LoggerLib-2.0-linux-arm64-gnu.zipp`
* if OK then unzip file: `unzip WandiSSAL-LoggerLib-2.0-linux-arm64-gnu.zip`
* and refer to the **README** file for further installation and execution instructions.



Github repository for [files and downloads](https://github.com/wandi-ssal/fail-safe-application-logger)

Contact: **bwoodley@istech.com**
