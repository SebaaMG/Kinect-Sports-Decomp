typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82FF5200();


undefined8 fn_82FF5028(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  
  RtlEnterCriticalSection(param_1 + 0x88);
  piVar1 = (int *)fn_82FF5200(param_1 + 4,param_2);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
    *param_4 = piVar1[10];
  }
  RtlLeaveCriticalSection(param_1 + 0x88);
  return 1;
}

