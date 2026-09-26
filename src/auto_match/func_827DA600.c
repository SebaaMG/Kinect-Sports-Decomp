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


void fn_827DA600(int param_1,undefined8 param_2,uint param_3,code *UNRECOVERED_JUMPTABLE)

{
  int *piVar1;
  
  if (param_3 != 0xffffffff) {
    if (param_3 < 0x40) {
      piVar1 = *(int **)((param_3 + 0x295) * 4 + param_1);
    }
    else {
      piVar1 = (int *)0x0;
    }
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x827da650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x24))(piVar1,param_2,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x827da65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,0);
  return;
}

