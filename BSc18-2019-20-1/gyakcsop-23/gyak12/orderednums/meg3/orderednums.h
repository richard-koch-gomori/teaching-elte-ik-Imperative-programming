

#if defined orderednums_included
    #endinput
#endif

#define orderednums_included


extern int orderednums_Initialize();
extern void orderednums_PrintAll();
extern int orderednums_AddNumber(int num);
extern int orderednums_IsContained(int num);
extern void orderednums_Finalize();

