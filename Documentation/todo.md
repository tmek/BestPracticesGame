# To-Do

- [ ] Need to setup automatic build, run, test, verify of the solution locally before check-ins. 

- [ ] Find out what setting on Rider is removing what it calls the redundant "string" specifier in code cleanup and disable it
```cpp
        PublicIncludePaths.AddRange(
            new[]
            {
                "BestPracticesEditor"
            }
        );

        PrivateIncludePaths.AddRange(
            new string[]
            {
            }
        );
```

- [ ] Document why SNDBS needed write access to `\Epic Games\UE_5.2\Engine\Intermediate\Build\SNDBS\cl-filter.exe.sn-dbs-tool.ini` in my UE5.2 installation.