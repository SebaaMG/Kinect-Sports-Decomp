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


void fn_82D49968(int param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x18)) {
    uVar2 = *(undefined4 *)
             ((*(int *)(*(int *)(iVar1 + 0x14) + (int)((param_2 & 0xffffffff) << 2)) + 1) * 4 +
             *(int *)(iVar1 + 8));
  }
  else {
    uVar2 = *(undefined4 *)
             ((int)((param_2 - *(uint *)(iVar1 + 0x18) & 0xffffffff) << 2) + *(int *)(iVar1 + 0x20))
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x82d499c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + 0x10))
            (*(int *)(param_1 + 0xc) + 0x10,uVar2);
  return;
}

