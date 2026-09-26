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


undefined8 fn_829548C8(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = *(int **)(param_1 + 0x1b4);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x120);
    if (((ulonglong)uVar2 < (ulonglong)*(uint *)(param_1 + 0x114)) &&
       (*(int *)(param_1 + 0xd4) == 0)) {
      iVar3 = *(int *)(param_1 + 0x104);
      uVar5 = 0;
      uVar6 = 0;
      if ((iVar3 != 0) &&
         ((*(int *)(iVar3 + 0x3c) != 0 && (*(int *)(*(int *)(iVar3 + 0x3c) + 4) == 0xe)))) {
        uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 0x40);
        uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 0x44);
      }
      uVar4 = (**(code **)(*piVar1 + 0xc))
                        (piVar1,uVar5,uVar6,
                         ((ulonglong)uVar2 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x110)
                         ,(ulonglong)*(uint *)(param_1 + 0x114) - (ulonglong)uVar2);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x114);
      return uVar4;
    }
  }
  return 0;
}

