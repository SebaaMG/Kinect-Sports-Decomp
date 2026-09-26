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
extern int fn_82640058();
extern int fn_82677F48();
extern int fn_82678428();


void fn_82678820(int param_1,ulonglong param_2,longlong param_3)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(int *)(param_1 + 0x1bc) != 0)) {
    fn_82677F48(param_1 + 0x2294,param_1);
    fn_82678428(param_1,param_1 + 0x11c);
    fn_82640058(*(undefined4 *)(param_1 + 0xd8),3,param_3 + 1,
                      (param_2 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x1bc),4);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
    *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + (int)param_3;
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + (int)param_3;
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
  }
  return;
}

