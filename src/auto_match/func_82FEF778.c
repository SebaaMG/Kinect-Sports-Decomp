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


void fn_82FEF778(int *param_1,longlong param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (4 < (param_2 - 1U & 0xffffffff)) {
    return;
  }
  if ((int)(param_2 - 1U) == 0) {
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
      *(byte *)((int)param_1 + 0xd9) = *(byte *)((int)param_1 + 0xd9) | 0x20;
                    /* WARNING: Could not recover jumptable at 0x82fef7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (param_2 != 4) {
                    /* WARNING: Could not recover jumptable at 0x82fef7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if (param_3 != 1) {
      return;
    }
    *(byte *)((int)param_1 + 0xd9) = *(byte *)((int)param_1 + 0xd9) & 0xdb | 4;
  }
  return;
}

