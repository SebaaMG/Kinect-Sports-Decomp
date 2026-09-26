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
extern int fn_82563400();


void fn_8252D020(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x18c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x8c0) + 0x54))();
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  iVar1 = *(int *)(param_1 + 400);
  if (iVar1 != 0) {
    if ((param_2 != 0) && (uVar4 = 0, *(int *)(iVar1 + 0x18c) != 0)) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)(*(int *)(iVar1 + 400) + iVar5);
        if (((*(int *)(iVar3 + 0x180) != 0) && (*(int *)(iVar3 + 0x164) != 0)) &&
           (*(int *)(iVar3 + 0x110) != 0)) {
          fn_82563400(*(int *)(iVar3 + 0x110),*(undefined4 *)(iVar3 + 0x17c),
                            *(int *)(iVar3 + 0x164),*(undefined4 *)(iVar3 + 0x170),
                            *(undefined4 *)(iVar3 + 0x174),*(undefined4 *)(iVar3 + 0x178));
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(uint *)(iVar1 + 0x18c));
    }
    puVar2 = *(undefined4 **)(param_1 + 400);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
}

