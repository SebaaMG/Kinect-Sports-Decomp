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
extern int fn_82490CB8();


void fn_82490DD8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  lVar3 = fn_82490CB8();
  if ((int)lVar3 < 1) {
    lVar3 = 1 - lVar3;
    do {
      puVar5 = *(undefined4 **)(param_1 + 4);
      puVar7 = *(undefined4 **)(param_1 + 0x24);
      uVar1 = *puVar5;
      for (puVar8 = *(undefined4 **)(param_1 + 0x20); puVar8 != puVar7; puVar8 = puVar8 + 1) {
        (**(code **)(*(int *)*puVar8 + 0x18))((int *)*puVar8,uVar1,uVar1);
      }
      puVar8 = *(undefined4 **)(param_1 + 8);
      puVar7 = puVar5 + 2;
      if (puVar5 + 2 != puVar8) {
        puVar5 = puVar5 + -2;
        do {
          puVar5[2] = *puVar7;
          puVar2 = puVar7 + 1;
          puVar7 = puVar7 + 2;
          puVar5[3] = *puVar2;
          puVar5 = puVar5 + 2;
        } while (puVar7 != puVar8);
      }
      iVar6 = *(int *)(param_1 + 8) + -8;
      for (iVar4 = iVar6; iVar4 != *(int *)(param_1 + 8); iVar4 = iVar4 + 8) {
      }
      lVar3 = lVar3 + -1;
      *(int *)(param_1 + 8) = iVar6;
    } while (lVar3 != 0);
  }
  return;
}

