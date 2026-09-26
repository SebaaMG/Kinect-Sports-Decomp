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


void fn_82D55D78(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  iVar2 = iVar1 + 0x5a0;
  if (param_3[5] == 0) {
    iVar2 = iVar1 + 0x1a0;
  }
                    /* WARNING: Could not recover jumptable at 0x82d55dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)*(byte *)(*(int *)(*param_1 + 0xc) * 0x20 + iVar2 + *(int *)(*param_2 + 0xc)) *
               0x14 + iVar1 + 0x9a0))();
  return;
}

