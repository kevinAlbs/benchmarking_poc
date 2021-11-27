Run on my macOS laptop:

(.venv) kevin.albertson@Kevins-MBP-2 workload_find % MONGO_C_VERSION=master ./run.sh
Running MONGO_C_VERSION=master
2021-11-27T13:18:09-05:00
Running ./cmake-build/workload_find.out
Run on (8 X 2300 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 512 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 6.48, 13.35, 9.28
mongoc_version 1.20.0-pre
--------------------------------------------------------------------------------------------------------------------------------
Benchmark                                                                      Time             CPU   Iterations UserCounters...
--------------------------------------------------------------------------------------------------------------------------------
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1                119 us         43.4 us       103763 bytes_per_second=122.653k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1                121 us         43.7 us       103763 bytes_per_second=120.944k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1                120 us         43.5 us       103763 bytes_per_second=122.336k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_mean           120 us         43.5 us            3 bytes_per_second=121.978k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_median         120 us         43.5 us            3 bytes_per_second=122.336k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_stddev       0.899 us        0.164 us            3 bytes_per_second=931.258/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_cv            0.75 %          0.38 %             3 bytes_per_second=0.75%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2               69.5 us         50.2 us       203496 bytes_per_second=210.647k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2               68.4 us         49.3 us       203496 bytes_per_second=214.217k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2               66.1 us         47.5 us       203496 bytes_per_second=221.656k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_mean          68.0 us         49.0 us            3 bytes_per_second=215.507k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_median        68.4 us         49.3 us            3 bytes_per_second=214.217k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_stddev        1.76 us         1.39 us            3 bytes_per_second=5.6166k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_cv            2.58 %          2.84 %             3 bytes_per_second=2.61%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4               42.8 us         63.5 us       336864 bytes_per_second=342.179k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4               44.1 us         65.4 us       336864 bytes_per_second=331.792k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4               43.8 us         65.1 us       336864 bytes_per_second=334.341k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_mean          43.6 us         64.7 us            3 bytes_per_second=336.104k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_median        43.8 us         65.1 us            3 bytes_per_second=334.341k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_stddev       0.697 us         1.04 us            3 bytes_per_second=5.41327k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_cv            1.60 %          1.60 %             3 bytes_per_second=1.61%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8               32.0 us         74.2 us       477864 bytes_per_second=458.184k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8               32.6 us         73.9 us       477864 bytes_per_second=449.987k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8               29.4 us         72.4 us       477864 bytes_per_second=498.485k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_mean          31.3 us         73.5 us            3 bytes_per_second=468.885k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_median        32.0 us         73.9 us            3 bytes_per_second=458.184k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_stddev        1.69 us         1.00 us            3 bytes_per_second=25.9594k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_cv            5.39 %          1.36 %             3 bytes_per_second=5.54%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16              29.8 us         67.3 us       466144 bytes_per_second=490.961k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16              30.3 us         67.3 us       466144 bytes_per_second=484.213k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16              30.6 us         67.5 us       466144 bytes_per_second=478.848k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_mean         30.2 us         67.4 us            3 bytes_per_second=484.674k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_median       30.3 us         67.3 us            3 bytes_per_second=484.213k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_stddev      0.378 us        0.137 us            3 bytes_per_second=6.06993k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_cv           1.25 %          0.20 %             3 bytes_per_second=1.25%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32              32.2 us         69.7 us       320000 bytes_per_second=455.232k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32              29.9 us         67.7 us       320000 bytes_per_second=490.346k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32              31.4 us         69.8 us       320000 bytes_per_second=466.209k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_mean         31.2 us         69.1 us            3 bytes_per_second=470.596k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_median       31.4 us         69.7 us            3 bytes_per_second=466.209k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_stddev       1.17 us         1.18 us            3 bytes_per_second=17.9631k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_cv           3.77 %          1.71 %             3 bytes_per_second=3.82%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64              30.5 us         70.1 us       428160 bytes_per_second=480.74k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64              30.2 us         70.4 us       428160 bytes_per_second=485.097k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64              30.2 us         70.2 us       428160 bytes_per_second=485.592k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_mean         30.3 us         70.2 us            3 bytes_per_second=483.81k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_median       30.2 us         70.2 us            3 bytes_per_second=485.097k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_stddev      0.168 us        0.157 us            3 bytes_per_second=2.66994k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_cv           0.55 %          0.22 %             3 bytes_per_second=0.55%


Running ./cmake-build/workload_find.out
Run on (8 X 2300 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 512 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 9.67, 5.94, 4.54
mongoc_version 1.19.2
--------------------------------------------------------------------------------------------------------------------------------
Benchmark                                                                      Time             CPU   Iterations UserCounters...
--------------------------------------------------------------------------------------------------------------------------------
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1                123 us         44.4 us       106422 bytes_per_second=119.219k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1                121 us         43.9 us       106422 bytes_per_second=120.77k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1                119 us         42.6 us       106422 bytes_per_second=123.597k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_mean           121 us         43.6 us            3 bytes_per_second=121.195k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_median         121 us         43.9 us            3 bytes_per_second=120.77k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_stddev        2.20 us        0.947 us            3 bytes_per_second=2.2198k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:1_cv            1.82 %          2.17 %             3 bytes_per_second=1.83%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2               69.6 us         50.1 us       200338 bytes_per_second=210.584k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2               70.8 us         51.5 us       200338 bytes_per_second=206.756k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2               70.3 us         50.6 us       200338 bytes_per_second=208.388k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_mean          70.2 us         50.7 us            3 bytes_per_second=208.576k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_median        70.3 us         50.6 us            3 bytes_per_second=208.388k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_stddev       0.646 us        0.700 us            3 bytes_per_second=1.92118k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:2_cv            0.92 %          1.38 %             3 bytes_per_second=0.92%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4               47.5 us         71.0 us       302752 bytes_per_second=308.656k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4               45.5 us         69.6 us       302752 bytes_per_second=322.078k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4               45.1 us         69.3 us       302752 bytes_per_second=324.611k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_mean          46.0 us         70.0 us            3 bytes_per_second=318.448k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_median        45.5 us         69.6 us            3 bytes_per_second=322.078k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_stddev        1.26 us        0.915 us            3 bytes_per_second=8.57473k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:4_cv            2.73 %          1.31 %             3 bytes_per_second=2.69%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8               31.5 us         83.3 us       443328 bytes_per_second=465.561k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8               31.7 us         82.7 us       443328 bytes_per_second=462.21k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8               31.6 us         82.0 us       443328 bytes_per_second=462.863k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_mean          31.6 us         82.7 us            3 bytes_per_second=463.545k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_median        31.6 us         82.7 us            3 bytes_per_second=462.863k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_stddev       0.121 us        0.632 us            3 bytes_per_second=1.77641k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:8_cv            0.38 %          0.76 %             3 bytes_per_second=0.38%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16              30.4 us         72.8 us       380336 bytes_per_second=482.296k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16              30.0 us         73.0 us       380336 bytes_per_second=488.877k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16              29.4 us         72.7 us       380336 bytes_per_second=497.725k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_mean         29.9 us         72.8 us            3 bytes_per_second=489.633k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_median       30.0 us         72.8 us            3 bytes_per_second=488.877k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_stddev      0.472 us        0.169 us            3 bytes_per_second=7.74238k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:16_cv           1.58 %          0.23 %             3 bytes_per_second=1.58%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32              32.1 us         75.3 us       462176 bytes_per_second=456.767k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32              30.2 us         74.4 us       462176 bytes_per_second=485.644k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32              30.8 us         74.6 us       462176 bytes_per_second=476.02k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_mean         31.0 us         74.8 us            3 bytes_per_second=472.81k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_median       30.8 us         74.6 us            3 bytes_per_second=476.02k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_stddev      0.974 us        0.443 us            3 bytes_per_second=14.7033k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:32_cv           3.14 %          0.59 %             3 bytes_per_second=3.11%
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64              31.3 us         76.4 us       442816 bytes_per_second=468.1k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64              30.8 us         76.6 us       442816 bytes_per_second=475.313k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64              30.8 us         77.0 us       442816 bytes_per_second=475.183k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_mean         31.0 us         76.7 us            3 bytes_per_second=472.865k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_median       30.8 us         76.6 us            3 bytes_per_second=475.183k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_stddev      0.272 us        0.306 us            3 bytes_per_second=4.12769k/s
BM_WorkloadFind/min_time:10.000/repeats:3/real_time/threads:64_cv           0.88 %          0.40 %             3 bytes_per_second=0.87%