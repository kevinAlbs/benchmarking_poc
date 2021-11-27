Results of three runs on my macOS laptop:

2021-11-27T09:26:58-05:00
Running ./cmake-build/canary
Run on (8 X 2300 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 512 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 2.35, 2.38, 2.93
----------------------------------------------------------
Benchmark                Time             CPU   Iterations
----------------------------------------------------------
BM_Strcmp             8.76 ns         8.75 ns     75694497
BM_CustomStrcmp       27.8 ns         27.7 ns     26018436
(.venv) kevin.albertson@Kevins-MBP-2 canary % ./run.sh
2021-11-27T09:27:02-05:00
Running ./cmake-build/canary
Run on (8 X 2300 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 512 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 2.35, 2.38, 2.93
----------------------------------------------------------
Benchmark                Time             CPU   Iterations
----------------------------------------------------------
BM_Strcmp             8.97 ns         8.97 ns     62586056
BM_CustomStrcmp       27.9 ns         27.8 ns     26178892
(.venv) kevin.albertson@Kevins-MBP-2 canary % ./run.sh
2021-11-27T09:27:08-05:00
Running ./cmake-build/canary
Run on (8 X 2300 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 512 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 2.48, 2.40, 2.93
----------------------------------------------------------
Benchmark                Time             CPU   Iterations
----------------------------------------------------------
BM_Strcmp             8.71 ns         8.71 ns     76135783
BM_CustomStrcmp       25.8 ns         25.8 ns     25768831