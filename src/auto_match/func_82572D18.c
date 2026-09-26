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
extern int fn_8251E5A0();


void fn_82572D18(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 < param_4) {
    puVar5 = (uint *)(param_1 + 4);
    puVar4 = (uint *)(param_1 + 0x18);
    puVar3 = (uint *)(param_1 + 0x2c);
    puVar2 = (uint *)(param_1 + 0x40);
    piVar6 = (int *)(param_3 + 4);
    iVar1 = ((param_4 - param_3) - 1) / 0xc + 1;
    do {
      if (param_2 == piVar6[-1]) {
        if (((*(char *)(param_1 + 0xc0) != '\0') && (*(int *)(param_1 + 0xa0) != 0)) &&
           (*(int *)(param_1 + 0xac) == *piVar6)) {
          *(undefined1 *)(param_1 + 0xc0) = 0;
          *(undefined4 *)(param_1 + 0xa0) = 0;
        }
        if (((*(char *)(param_1 + 0x130) != '\0') && (*(int *)(param_1 + 0x110) != 0)) &&
           (*(int *)(param_1 + 0x11c) == *piVar6)) {
          *(undefined1 *)(param_1 + 0x130) = 0;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
        uVar7 = *(uint *)(param_1 + 8);
        for (uVar8 = *puVar5; uVar8 < uVar7; uVar8 = uVar8 + 0x60) {
          if (*(int *)(uVar8 + 0x4c) == *piVar6) {
            fn_8251E5A0(puVar5,uVar8);
            uVar8 = uVar8 - 0x60;
            uVar7 = uVar7 - 0x60;
          }
        }
        uVar7 = *(uint *)(param_1 + 0x1c);
        for (uVar8 = *puVar4; uVar8 < uVar7; uVar8 = uVar8 + 0x60) {
          if (*(int *)(uVar8 + 0x4c) == *piVar6) {
            fn_8251E5A0(puVar4,uVar8);
            uVar8 = uVar8 - 0x60;
            uVar7 = uVar7 - 0x60;
          }
        }
        uVar7 = *(uint *)(param_1 + 0x30);
        for (uVar8 = *puVar3; uVar8 < uVar7; uVar8 = uVar8 + 0x50) {
          if (*(int *)(uVar8 + 0x44) == *piVar6) {
            fn_8251E5A0(puVar3,uVar8);
            uVar8 = uVar8 - 0x50;
            uVar7 = uVar7 - 0x50;
          }
        }
        uVar7 = *(uint *)(param_1 + 0x44);
        for (uVar8 = *puVar2; uVar8 < uVar7; uVar8 = uVar8 + 0x50) {
          if (*(int *)(uVar8 + 0x44) == *piVar6) {
            fn_8251E5A0(puVar2,uVar8);
            uVar8 = uVar8 - 0x50;
            uVar7 = uVar7 - 0x50;
          }
        }
      }
      else {
        if (((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0xa0) == piVar6[-1])) &&
           (*(int *)(param_1 + 0xb0) == *piVar6)) {
          *(undefined1 *)(param_1 + 0xc0) = 0;
          *(undefined4 *)(param_1 + 0xa0) = 0;
        }
        if (((*(int *)(param_1 + 0x110) != 0) && (*(int *)(param_1 + 0x110) == piVar6[-1])) &&
           (*(int *)(param_1 + 0x120) == *piVar6)) {
          *(undefined1 *)(param_1 + 0x130) = 0;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
        uVar7 = *(uint *)(param_1 + 8);
        for (uVar8 = *puVar5; uVar8 < uVar7; uVar8 = uVar8 + 0x60) {
          if ((*(int *)(uVar8 + 0x40) == piVar6[-1]) && (*(int *)(uVar8 + 0x50) == *piVar6)) {
            fn_8251E5A0(puVar5,uVar8);
            uVar8 = uVar8 - 0x60;
            uVar7 = uVar7 - 0x60;
          }
        }
        uVar7 = *(uint *)(param_1 + 0x1c);
        for (uVar8 = *puVar4; uVar8 < uVar7; uVar8 = uVar8 + 0x60) {
          if ((*(int *)(uVar8 + 0x40) == piVar6[-1]) && (*(int *)(uVar8 + 0x50) == *piVar6)) {
            fn_8251E5A0(puVar4,uVar8);
            uVar8 = uVar8 - 0x60;
            uVar7 = uVar7 - 0x60;
          }
        }
        uVar7 = *(uint *)(param_1 + 0x30);
        for (uVar8 = *puVar3; uVar8 < uVar7; uVar8 = uVar8 + 0x50) {
          if ((*(int *)(uVar8 + 0x40) == piVar6[-1]) && (*(int *)(uVar8 + 0x48) == *piVar6)) {
            fn_8251E5A0(puVar3,uVar8);
            uVar8 = uVar8 - 0x50;
            uVar7 = uVar7 - 0x50;
          }
        }
        uVar7 = *(uint *)(param_1 + 0x44);
        for (uVar8 = *puVar2; uVar8 < uVar7; uVar8 = uVar8 + 0x50) {
          if ((*(int *)(uVar8 + 0x40) == piVar6[-1]) && (*(int *)(uVar8 + 0x48) == *piVar6)) {
            fn_8251E5A0(puVar2,uVar8);
            uVar8 = uVar8 - 0x50;
            uVar7 = uVar7 - 0x50;
          }
        }
      }
      iVar1 = iVar1 + -1;
      piVar6 = piVar6 + 3;
    } while (iVar1 != 0);
  }
  return;
}

