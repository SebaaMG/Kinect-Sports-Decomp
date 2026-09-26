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


undefined8 fn_82E65700(int param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((ulonglong)*(uint *)(param_1 + 0x10) < (param_2 & 0xffffffff)) {
    return 0xffffffff80070057;
  }
                    /* WARNING: Could not recover jumptable at 0x82e65734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                    (*(int **)(param_1 + 8),*(uint *)(param_1 + 0x14) + param_2);
  return uVar1;
}

