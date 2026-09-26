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


void fn_82D035B0(int *param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -0x10);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x82d035ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x26] + 0x28))
              ((int *)param_1[0x26],(int *)(param_2 + -0x10),param_3 + 0x1fU & 0xfffffff0);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82d035d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

