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
extern unsigned int *auStack_30;


ulonglong fn_82CF6F58(int param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint auStack_30 [12];
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    uVar5 = (**(code **)(**(int **)(param_1 + 4) + 4))
                      (*(int **)(param_1 + 4),
                       *(undefined4 *)((int)((param_2 + 0x25 & 0xffffffff) << 2) + param_1));
  }
  else {
    if (3 < (int)uVar1) {
      uVar5 = 4;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x18))
              (*(int **)(param_1 + 4),auStack_30,uVar5,
               *(undefined4 *)((int)((param_2 + 0x25 & 0xffffffff) << 2) + param_1));
    param_1 = (int)((param_2 & 0xffffffff) << 3) + param_1;
    if (1 < (int)uVar5) {
      lVar4 = uVar5 - 1;
      puVar3 = auStack_30;
      do {
        puVar3 = puVar3 + 1;
        puVar2 = (undefined4 *)*puVar3;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *puVar2 = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xc) = puVar2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar5 = (ulonglong)auStack_30[0];
  }
  return uVar5;
}

