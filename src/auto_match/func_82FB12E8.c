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
extern int fn_82FA5190();
extern int fn_82FAF408();
extern unsigned int lbl_831BC768;


void fn_82FB12E8(int param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 != *(int *)(param_1 + 0x9c)) {
    do {
      if ((ulonglong)*(uint *)(iVar3 + 4) == (param_2 & 0xffffffff)) {
        param_3 = (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x18;
        if (1 < param_3) {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x9c) + -0x1c);
          puVar4 = (undefined4 *)(iVar3 + -4);
          lVar8 = 6;
          do {
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = *puVar5;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -0x18;
      }
      else {
        iVar3 = iVar3 + 0x18;
      }
    } while (iVar3 != *(int *)(param_1 + 0x9c));
  }
  uVar2 = lbl_831BC768;
  for (puVar6 = *(uint **)(param_1 + 0x88);
      (puVar6 != *(uint **)(param_1 + 0x8c) && ((ulonglong)*puVar6 != (param_2 & 0xffffffff)));
      puVar6 = puVar6 + 2) {
  }
  uVar1 = (uint)(*(uint **)(param_1 + 0x8c) != puVar6);
  piVar7 = (int *)(-(uint)(uVar1 != 0) & (uint)(puVar6 + 1));
  if (piVar7 != (int *)0x0) {
    puVar5 = (undefined4 *)*piVar7;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,0,param_3,-uVar1);
      fn_82FA5190(uVar2,puVar5);
    }
    fn_82FAF408(param_1 + 0x88,param_2);
  }
  return;
}

