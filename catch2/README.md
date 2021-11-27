Result of three runs:

(.venv) kevin.albertson@Kevins-MBP-2 canary % ./run.sh 

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
canary is a Catch v2.13.7 host application.
Run with -? for options

-------------------------------------------------------------------------------
variations on strcmp
-------------------------------------------------------------------------------
/Users/kevin.albertson/c_benchmarking_poc/catch2/canary/canary.cpp:35
...............................................................................

benchmark name                       samples       iterations    estimated
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
Strcmp                                         100          4263     5.5419 ms 
                                        11.8828 ns    11.5885 ns    13.0228 ns 
                                        2.55662 ns   0.554929 ns     5.8878 ns 
                                                                               
CustomStrcmp                                   100          1770      5.487 ms 
                                        29.0545 ns    27.6849 ns    30.9928 ns 
                                        8.21547 ns    6.12664 ns    10.9861 ns 
                                                                               

===============================================================================
All tests passed (4 assertions in 2 test cases)

(.venv) kevin.albertson@Kevins-MBP-2 canary % ./run.sh

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
canary is a Catch v2.13.7 host application.
Run with -? for options

-------------------------------------------------------------------------------
variations on strcmp
-------------------------------------------------------------------------------
/Users/kevin.albertson/c_benchmarking_poc/catch2/canary/canary.cpp:35
...............................................................................

benchmark name                       samples       iterations    estimated
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
Strcmp                                         100          4346     4.7806 ms 
                                        11.5354 ns    11.4917 ns    11.6036 ns 
                                       0.273847 ns   0.200456 ns   0.400311 ns 
                                                                               
CustomStrcmp                                   100          1685      5.055 ms 
                                        29.0942 ns     27.736 ns    32.2599 ns 
                                        10.0069 ns    5.35963 ns    20.4172 ns 
                                                                               

===============================================================================
All tests passed (4 assertions in 2 test cases)

(.venv) kevin.albertson@Kevins-MBP-2 canary % ./run.sh

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
canary is a Catch v2.13.7 host application.
Run with -? for options

-------------------------------------------------------------------------------
variations on strcmp
-------------------------------------------------------------------------------
/Users/kevin.albertson/c_benchmarking_poc/catch2/canary/canary.cpp:35
...............................................................................

benchmark name                       samples       iterations    estimated
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
Strcmp                                         100          4461     4.9071 ms 
                                        13.1033 ns    13.0624 ns    13.1738 ns 
                                       0.268034 ns   0.176164 ns   0.372545 ns 
                                                                               
CustomStrcmp                                   100          1795     5.2055 ms 
                                         26.818 ns    25.5002 ns    28.8437 ns 
                                        8.20807 ns     6.0195 ns     14.231 ns 
                                                                               

===============================================================================
All tests passed (4 assertions in 2 test cases)