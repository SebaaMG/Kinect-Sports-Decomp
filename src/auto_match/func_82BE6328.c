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


undefined8 fn_82BE6328(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x28) < 1)) {
    uVar2 = 0xffffffff820e95e4;
  }
  else {
    if (((param_2 & 0xffffffff) != 0) && (0 < param_3)) {
      iVar1 = *(int *)(param_1 + 0x24) + param_3;
      if ((*(int *)(param_1 + 0x28) < iVar1) &&
         (iVar1 = fn_82BE6148(param_1,iVar1,0x40), iVar1 == 0)) {
        return 0;
      }
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x24);
      lVar5 = uVar4 - 1;
      if (-1 < lVar5) {
        do {
          puVar3 = (undefined1 *)((int)lVar5 + *(int *)(param_1 + 0x1c));
          lVar5 = lVar5 + -1;
          puVar3[param_3] = *puVar3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x1c),param_2,param_3);
      param_3 = *(int *)(param_1 + 0x24) + param_3;
      *(int *)(param_1 + 0x24) = param_3;
      *(int *)(param_1 + 0x20) = param_3;
      return 1;
    }
    uVar2 = 0xffffffff820e95a4;
  }
  fn_82BE5240(param_1,0x65,uVar2);
  return 0;
}

