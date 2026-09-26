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
extern int fn_82ABE190();
extern int fn_82AD1A40();


void fn_82ACB660(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  uint *puVar9;
  uint *puVar11;
  ulonglong uVar10;
  int *piVar12;
  uint uVar13;
  
  puVar11 = *(uint **)(param_2 + 4);
  for (puVar9 = puVar11; puVar9 != (uint *)0x0; puVar9 = (uint *)puVar9[2]) {
    if ((*puVar9 & 0xe000000) != 0) {
      bVar6 = true;
      if ((*puVar9 >> 0x1e & 1) != 0) goto LAB_82acb6a8;
      break;
    }
  }
  bVar6 = false;
LAB_82acb6a8:
  if (bVar6) {
    iVar1 = *(int *)(param_2 + 0x1c);
    for (; (puVar11 != (uint *)0x0 && ((*puVar11 & 0xe000000) == 0)); puVar11 = (uint *)puVar11[2])
    {
    }
    uVar7 = (ulonglong)(*puVar11 >> 0xc) & 0x1fe0 | (ulonglong)*(uint *)(param_2 + 8) & 0x1e;
    uVar13 = *(uint *)((param_2 & 0xfffffffe) + 0x24);
    while ((uVar13 & 1) == 0) {
      piVar5 = (int *)(uVar13 & 0xfffffffe);
      if (piVar5 + -10 == (int *)0x0) break;
      if ((piVar5[-8] & 0x3f80U) != 0x3700) {
        piVar12 = piVar5;
        for (uVar13 = 0; piVar12 = piVar12 + 1, uVar13 < ((uint)piVar5[-8] >> 0x13 & 7);
            uVar13 = uVar13 + 1) {
          puVar11 = (uint *)*piVar12;
          cVar8 = fn_82ABE190(puVar11);
          if ((((cVar8 != '\0') && ((*(uint *)(puVar11[3] + 8) >> 0x17 & 1) != 0)) &&
              (uVar10 = (ulonglong)(*puVar11 >> 0xd) & 0xfff,
              ((uVar10 ^ uVar7 >> 1) & 0xfffffff0) == 0)) && ((uVar10 & uVar7 >> 1 & 0xf) != 0)) {
            fn_82AD1A40(param_2,piVar5 + -10,param_1);
          }
        }
      }
      uVar13 = piVar5[-1];
    }
    for (iVar2 = *(int *)(param_2 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      uVar13 = *(uint *)(iVar2 + 0x10);
      if ((((uVar13 != 0) && (cVar8 = fn_82ABE190(iVar2), cVar8 != '\0')) &&
          (*(int *)(uVar13 + 0x1c) == iVar1)) &&
         ((uVar3 = *(uint *)(uVar13 + 8) >> 7 & 0x7f, uVar3 != 0x70 &&
          (uVar4 = uVar13, uVar3 != 0x6e)))) {
        while ((uVar4 = *(uint *)((uVar4 & 0xfffffffe) + 0x28), (uVar4 & 1) == 0 && (uVar4 != 0))) {
          uVar3 = *(uint *)(uVar4 + 8);
          if (((uVar3 >> 0x17 & 1) != 0) && ((uVar3 & 0x3f80) != 0x3700)) {
            puVar11 = *(uint **)(uVar4 + 4);
            for (puVar9 = puVar11; puVar9 != (uint *)0x0; puVar9 = (uint *)puVar9[2]) {
              if ((*puVar9 & 0xe000000) != 0) {
                bVar6 = true;
                if ((*puVar9 >> 0x1e & 1) != 0) goto LAB_82acb830;
                break;
              }
            }
            bVar6 = false;
LAB_82acb830:
            if (bVar6) {
              for (; (puVar11 != (uint *)0x0 && ((*puVar11 & 0xe000000) == 0));
                  puVar11 = (uint *)puVar11[2]) {
              }
              uVar10 = (ulonglong)(*puVar11 >> 0xc) & 0x1fe0 | (ulonglong)uVar3 & 0x1e;
              if ((((uVar10 ^ uVar7) >> 1 & 0xfffffff0) == 0) &&
                 (((uVar10 & uVar7) >> 1 & 0xf) != 0)) {
                fn_82AD1A40(uVar4,uVar13,param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
}

