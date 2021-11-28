Running on ubuntu1804-large:

ubuntu@ip-10-122-14-82:~/code/benchmarking_poc/google_benchmark/workload_find$ MONGO_C_VERSION=1.20.0 ./run.sh
Running MONGO_C_VERSION=1.20.0
2021-11-27T18:51:11+00:00
Running ./cmake-build/workload_find.out
Run on (16 X 2300.16 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x8)
  L1 Instruction 32 KiB (x8)
  L2 Unified 256 KiB (x8)
  L3 Unified 46080 KiB (x1)
Load Average: 0.01, 0.03, 0.05
mongoc_version 1.20.0
----------------------------------------------------------------------------------------------------------------
Benchmark                                                      Time             CPU   Iterations UserCounters...
----------------------------------------------------------------------------------------------------------------
BM_WorkloadFind/repeats:3/real_time/threads:1                141 us         75.9 us         5039 bytes_per_second=96.8023k/s
BM_WorkloadFind/repeats:3/real_time/threads:1                140 us         75.7 us         5039 bytes_per_second=97.7477k/s
BM_WorkloadFind/repeats:3/real_time/threads:1                140 us         75.6 us         5039 bytes_per_second=97.5118k/s
BM_WorkloadFind/repeats:3/real_time/threads:1_mean           140 us         75.7 us            3 bytes_per_second=97.3539k/s
BM_WorkloadFind/repeats:3/real_time/threads:1_median         140 us         75.7 us            3 bytes_per_second=97.5118k/s
BM_WorkloadFind/repeats:3/real_time/threads:1_stddev       0.711 us        0.167 us            3 bytes_per_second=503.885/s
BM_WorkloadFind/repeats:3/real_time/threads:1_cv            0.51 %          0.22 %             3 bytes_per_second=0.51%
BM_WorkloadFind/repeats:3/real_time/threads:2               73.5 us         79.1 us         9686 bytes_per_second=185.896k/s
BM_WorkloadFind/repeats:3/real_time/threads:2               72.9 us         77.5 us         9686 bytes_per_second=187.664k/s
BM_WorkloadFind/repeats:3/real_time/threads:2               76.4 us         77.6 us         9686 bytes_per_second=178.912k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_mean          74.3 us         78.0 us            3 bytes_per_second=184.157k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_median        73.5 us         77.6 us            3 bytes_per_second=185.896k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_stddev        1.89 us        0.885 us            3 bytes_per_second=4.62774k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_cv            2.54 %          1.13 %             3 bytes_per_second=2.51%
BM_WorkloadFind/repeats:3/real_time/threads:4               42.8 us         95.2 us        17820 bytes_per_second=319.228k/s
BM_WorkloadFind/repeats:3/real_time/threads:4               41.3 us         92.8 us        17820 bytes_per_second=331.322k/s
BM_WorkloadFind/repeats:3/real_time/threads:4               39.9 us         88.7 us        17820 bytes_per_second=342.587k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_mean          41.3 us         92.2 us            3 bytes_per_second=331.045k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_median        41.3 us         92.8 us            3 bytes_per_second=331.322k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_stddev        1.46 us         3.25 us            3 bytes_per_second=11.682k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_cv            3.54 %          3.53 %             3 bytes_per_second=3.53%
BM_WorkloadFind/repeats:3/real_time/threads:8               23.0 us          100 us        30504 bytes_per_second=594.031k/s
BM_WorkloadFind/repeats:3/real_time/threads:8               22.9 us         99.9 us        30504 bytes_per_second=597.844k/s
BM_WorkloadFind/repeats:3/real_time/threads:8               23.0 us          101 us        30504 bytes_per_second=593.837k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_mean          23.0 us          100 us            3 bytes_per_second=595.237k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_median        23.0 us          100 us            3 bytes_per_second=594.031k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_stddev       0.087 us        0.459 us            3 bytes_per_second=2.25931k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_cv            0.38 %          0.46 %             3 bytes_per_second=0.38%
BM_WorkloadFind/repeats:3/real_time/threads:16              13.2 us         92.8 us        50464 bytes_per_second=1034.13k/s
BM_WorkloadFind/repeats:3/real_time/threads:16              13.0 us         92.3 us        50464 bytes_per_second=1052.13k/s
BM_WorkloadFind/repeats:3/real_time/threads:16              13.1 us         92.7 us        50464 bytes_per_second=1044.27k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_mean         13.1 us         92.6 us            3 bytes_per_second=1043.51k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_median       13.1 us         92.7 us            3 bytes_per_second=1044.27k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_stddev      0.113 us        0.288 us            3 bytes_per_second=9.02443k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_cv           0.87 %          0.31 %             3 bytes_per_second=0.86%
BM_WorkloadFind/repeats:3/real_time/threads:32              11.9 us         91.2 us        59616 bytes_per_second=1.11992M/s
BM_WorkloadFind/repeats:3/real_time/threads:32              12.0 us         92.5 us        59616 bytes_per_second=1.1169M/s
BM_WorkloadFind/repeats:3/real_time/threads:32              11.9 us         91.1 us        59616 bytes_per_second=1.12357M/s
BM_WorkloadFind/repeats:3/real_time/threads:32_mean         11.9 us         91.6 us            3 bytes_per_second=1.12013M/s
BM_WorkloadFind/repeats:3/real_time/threads:32_median       11.9 us         91.2 us            3 bytes_per_second=1.11992M/s
BM_WorkloadFind/repeats:3/real_time/threads:32_stddev      0.036 us        0.805 us            3 bytes_per_second=3.42181k/s
BM_WorkloadFind/repeats:3/real_time/threads:32_cv           0.30 %          0.88 %             3 bytes_per_second=0.30%
BM_WorkloadFind/repeats:3/real_time/threads:64              11.7 us         90.6 us        70208 bytes_per_second=1.14364M/s
BM_WorkloadFind/repeats:3/real_time/threads:64              11.8 us         92.5 us        70208 bytes_per_second=1.13192M/s
BM_WorkloadFind/repeats:3/real_time/threads:64              11.7 us         92.0 us        70208 bytes_per_second=1.13715M/s
BM_WorkloadFind/repeats:3/real_time/threads:64_mean         11.7 us         91.7 us            3 bytes_per_second=1.13757M/s
BM_WorkloadFind/repeats:3/real_time/threads:64_median       11.7 us         92.0 us            3 bytes_per_second=1.13715M/s
BM_WorkloadFind/repeats:3/real_time/threads:64_stddev      0.061 us        0.967 us            3 bytes_per_second=6.01088k/s
BM_WorkloadFind/repeats:3/real_time/threads:64_cv           0.52 %          1.05 %             3 bytes_per_second=0.52%

--

ubuntu@ip-10-122-14-82:~/code/benchmarking_poc/google_benchmark/workload_find$ MONGO_C_VERSION=1.19.2 ./run.sh
Running MONGO_C_VERSION=1.19.2
2021-11-27T18:54:36+00:00
Running ./cmake-build/workload_find.out
Run on (16 X 2300.16 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x8)
  L1 Instruction 32 KiB (x8)
  L2 Unified 256 KiB (x8)
  L3 Unified 46080 KiB (x1)
Load Average: 0.14, 0.35, 0.19
mongoc_version 1.19.2
----------------------------------------------------------------------------------------------------------------
Benchmark                                                      Time             CPU   Iterations UserCounters...
----------------------------------------------------------------------------------------------------------------
BM_WorkloadFind/repeats:3/real_time/threads:1                144 us         78.0 us         4982 bytes_per_second=94.9791k/s
BM_WorkloadFind/repeats:3/real_time/threads:1                145 us         78.7 us         4982 bytes_per_second=94.4904k/s
BM_WorkloadFind/repeats:3/real_time/threads:1                142 us         77.7 us         4982 bytes_per_second=96.4069k/s
BM_WorkloadFind/repeats:3/real_time/threads:1_mean           143 us         78.1 us            3 bytes_per_second=95.2921k/s
BM_WorkloadFind/repeats:3/real_time/threads:1_median         144 us         78.0 us            3 bytes_per_second=94.9791k/s
BM_WorkloadFind/repeats:3/real_time/threads:1_stddev        1.49 us        0.505 us            3 bytes_per_second=1019.75/s
BM_WorkloadFind/repeats:3/real_time/threads:1_cv            1.04 %          0.65 %             3 bytes_per_second=1.05%
BM_WorkloadFind/repeats:3/real_time/threads:2               73.4 us         78.0 us         9624 bytes_per_second=186.197k/s
BM_WorkloadFind/repeats:3/real_time/threads:2               72.7 us         77.9 us         9624 bytes_per_second=188.071k/s
BM_WorkloadFind/repeats:3/real_time/threads:2               74.4 us         80.5 us         9624 bytes_per_second=183.88k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_mean          73.5 us         78.8 us            3 bytes_per_second=186.049k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_median        73.4 us         78.0 us            3 bytes_per_second=186.197k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_stddev       0.830 us         1.48 us            3 bytes_per_second=2.09947k/s
BM_WorkloadFind/repeats:3/real_time/threads:2_cv            1.13 %          1.88 %             3 bytes_per_second=1.13%
BM_WorkloadFind/repeats:3/real_time/threads:4               39.5 us         87.7 us        16896 bytes_per_second=346.167k/s
BM_WorkloadFind/repeats:3/real_time/threads:4               42.4 us         96.8 us        16896 bytes_per_second=322.517k/s
BM_WorkloadFind/repeats:3/real_time/threads:4               42.3 us         95.6 us        16896 bytes_per_second=323.12k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_mean          41.4 us         93.4 us            3 bytes_per_second=330.602k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_median        42.3 us         95.6 us            3 bytes_per_second=323.12k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_stddev        1.65 us         4.97 us            3 bytes_per_second=13.4835k/s
BM_WorkloadFind/repeats:3/real_time/threads:4_cv            3.98 %          5.32 %             3 bytes_per_second=4.08%
BM_WorkloadFind/repeats:3/real_time/threads:8               29.6 us          142 us        24184 bytes_per_second=461.262k/s
BM_WorkloadFind/repeats:3/real_time/threads:8               29.4 us          140 us        24184 bytes_per_second=465.481k/s
BM_WorkloadFind/repeats:3/real_time/threads:8               29.2 us          140 us        24184 bytes_per_second=468.06k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_mean          29.4 us          141 us            3 bytes_per_second=464.934k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_median        29.4 us          140 us            3 bytes_per_second=465.481k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_stddev       0.217 us         1.14 us            3 bytes_per_second=3.43205k/s
BM_WorkloadFind/repeats:3/real_time/threads:8_cv            0.74 %          0.81 %             3 bytes_per_second=0.74%
BM_WorkloadFind/repeats:3/real_time/threads:16              25.1 us          188 us        28080 bytes_per_second=545.228k/s
BM_WorkloadFind/repeats:3/real_time/threads:16              24.9 us          186 us        28080 bytes_per_second=548.992k/s
BM_WorkloadFind/repeats:3/real_time/threads:16              25.0 us          187 us        28080 bytes_per_second=546.193k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_mean         25.0 us          187 us            3 bytes_per_second=546.804k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_median       25.0 us          187 us            3 bytes_per_second=546.193k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_stddev      0.089 us        0.684 us            3 bytes_per_second=1.95479k/s
BM_WorkloadFind/repeats:3/real_time/threads:16_cv           0.36 %          0.37 %             3 bytes_per_second=0.36%
BM_WorkloadFind/repeats:3/real_time/threads:32              24.9 us          192 us        30112 bytes_per_second=548.521k/s
BM_WorkloadFind/repeats:3/real_time/threads:32              24.8 us          191 us        30112 bytes_per_second=550.454k/s
BM_WorkloadFind/repeats:3/real_time/threads:32              24.9 us          192 us        30112 bytes_per_second=549.51k/s
BM_WorkloadFind/repeats:3/real_time/threads:32_mean         24.9 us          191 us            3 bytes_per_second=549.495k/s
BM_WorkloadFind/repeats:3/real_time/threads:32_median       24.9 us          192 us            3 bytes_per_second=549.51k/s
BM_WorkloadFind/repeats:3/real_time/threads:32_stddev      0.044 us        0.418 us            3 bytes_per_second=989.896/s
BM_WorkloadFind/repeats:3/real_time/threads:32_cv           0.18 %          0.22 %             3 bytes_per_second=0.18%
BM_WorkloadFind/repeats:3/real_time/threads:64              24.6 us          192 us        30720 bytes_per_second=556.081k/s
BM_WorkloadFind/repeats:3/real_time/threads:64              24.6 us          195 us        30720 bytes_per_second=555.302k/s
BM_WorkloadFind/repeats:3/real_time/threads:64              24.1 us          193 us        30720 bytes_per_second=566.362k/s
BM_WorkloadFind/repeats:3/real_time/threads:64_mean         24.4 us          194 us            3 bytes_per_second=559.248k/s
BM_WorkloadFind/repeats:3/real_time/threads:64_median       24.6 us          193 us            3 bytes_per_second=556.081k/s
BM_WorkloadFind/repeats:3/real_time/threads:64_stddev      0.268 us         1.64 us            3 bytes_per_second=6.17282k/s
BM_WorkloadFind/repeats:3/real_time/threads:64_cv           1.10 %          0.84 %             3 bytes_per_second=1.10%