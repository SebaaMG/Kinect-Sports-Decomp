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
extern int fn_82BE5240();
extern int fn_82BE6148();
extern int fn_82F68CC0();


undefined8 fn_82BE6268(int param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x28) < 1)) {
    uVar3 = 0xffffffff820e9580;
  }
  else {
    if (((param_2 & 0xffffffff) != 0) && (0 < (int)param_3)) {
      lVar2 = (ulonglong)*(uint *)(param_1 + 0x24) + param_3;
      if ((*(int *)(param_1 + 0x28) < (int)lVar2) &&
         (iVar1 = fn_82BE6148(param_1,lVar2,0x40), iVar1 == 0)) {
        return 0;
      }
      fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x1c),
                   param_2,param_3);
      iVar1 = *(int *)(param_1 + 0x24) + (int)param_3;
      *(int *)(param_1 + 0x24) = iVar1;
      *(int *)(param_1 + 0x20) = iVar1;
      return 1;
    }
    uVar3 = 0xffffffff820e9544;
  }
  fn_82BE5240(param_1,0x65,uVar3);
  return 0;
}

