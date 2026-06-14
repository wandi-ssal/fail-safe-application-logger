<div align="center">
<h2> Fail-safe application API logger that prevents process crash when generating log messages.</h2>
</div>

The primary benefit using this fail-safe C-Program API library over other application loggers, is that it does extensive runtime validation to prevent the application from crashing due to common mis-use printf() style issues (e.g., using NULL, 0 or negative value for %s; and string value that is not properly NULL terminated). If a runtime validation fails the API generates an error code and simply returns, allowing the application to continue normal processing (no need for the application to stop processing).

To address printf() style runtime problems the API uses a [Bound Parameter approach]( Wandi-SSAL-Bound-Capabilities.pdf) to decode, analyze and validate log arguments to ensure valid API usage, fail-safe execution and reliable log message generation.

The library API:
1. uses C-Program print() style interface that is often used by programmers to log messages.
2. decodes log message strings and arguments into element/value pairs.
3. analyzes element/value pairs for accurate use of log message arguments.
4. validates element/value pairs for unintentional programmer’s misuse of log argument.
5. checks element/value pairs for some attackers printf() malicious patterns.
7. generates log messages for development and deployment environments.
8. provides robust, fail-safe and reliable API operations.

Quick how to use [Wandi-SSAL API functions in C/C++ Program application.](Wandi-SSAL-Using-API-Function.pdf)
* Details for [LoggerStartUp()](Wandi-SSAL-API-LoggerStartUp-Function.pdf) function.
* Details for [LoggerAppsMsg()](Wandi-SSAL-API-LoggerAppsMsg-Function.pdf) function.
* Details for [LoggerShutDown()](Wandi-SSAL-API-LoggerShutDown-Function.pdf) function.

Setup [LoggerMessageDefines.txt](Wandi-SSAL-LoggerMessageDefines.pdf) file used by Wandi-SSAL API functions.

Refer to [Wandi-SSAL-examples.c](Wandi-SSAL-examples.c) for detailed application examples using the Bound Capability Parameter Validation.

For Linux OS download [Fail-Safe-Application-Logger.zip](./Wandi-SSAL-Free-Install_dst.zip) file, unzip it and refer to the **README** file for further installation and execution instructions.

This library is part of another effort to provide [advanced logging capabilities](Benefit-over-other-logging-systems.pdf) over existing logging tools, utilities and systems.

Github repository for [files and downloads](https://github.com/wandi-ssal/secure-application-logger)

Contact: **bwoodley@istech.com**
