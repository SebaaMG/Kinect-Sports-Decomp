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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82AF54E0();
extern int fn_82AF6268();
extern int fn_82AF8E30();
extern int fn_82AFA478();
extern int fn_82B006B0();
extern int fn_82B09BE0();
extern int fn_82B16698();
extern unsigned int uStack_68;
extern unsigned int uStack_78;


bool fn_82B0A2F8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char cVar6;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint auStack_90 [4];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 6;
  piVar8 = (int *)0x0;
  uVar7 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  uVar9 = 0;
  uVar10 = 0;
  for (uVar3 = *(uint *)((param_2 & 0xfffffffe) + 0x24); (uVar3 & 1) == 0;
      uVar3 = *(uint *)(uVar3 - 4)) {
    uVar3 = uVar3 & 0xfffffffe;
    piVar11 = (int *)(uVar3 - 0x28);
    if (piVar11 == (int *)0x0) break;
    for (iVar5 = *(int *)(uVar3 - 0x24); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      iVar1 = *(int *)(iVar5 + 0x10);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_3)) &&
         ((*(uint *)(iVar1 + 0x14) & 2) != 0)) {
        *(uint *)(uVar3 - 0x14) = *(uint *)(uVar3 - 0x14) | 2;
        goto LAB_82b0a46c;
      }
    }
    if ((*(uint *)(uVar3 - 0x20) >> 7 & 0x7f) == uVar7) {
      if ((*(uint *)(uVar3 - 0x20) >> 0x1a & 1) != 0) {
        fn_82B16698(param_1,piVar11,*(undefined4 *)(param_1 + 0x294));
      }
      cVar6 = fn_82AF6268(param_1,piVar11);
      if ((cVar6 == '\0') &&
         (uVar4 = fn_82AF8E30(param_1,param_2,piVar11,auStack_80), uVar4 < 5)) {
        uVar2 = fn_82AF54E0(param_1,param_2,piVar11);
        if (((uVar10 <= uVar2) && ((uVar2 != uVar10 || (uVar9 < uVar4)))) &&
           (iVar5 = fn_82B09BE0(param_1,param_2,piVar11,auStack_90,auStack_80), iVar5 == 0)) {
          if (*(uint *)(param_1 + 0x298) < auStack_90[0]) {
            fn_82AFA478(param_1,param_2);
          }
          else {
            uStack_68 = uStack_78;
            piVar8 = piVar11;
            uVar9 = uVar4;
            uVar10 = uVar2;
          }
        }
      }
    }
LAB_82b0a46c:;}
  piVar11 = *(int **)((param_2 & 0xfffffffe) + 0x28);
  do {
    if ((((uint)piVar11 & 1) != 0) || (piVar11 == (int *)0x0)) {
      for (uVar3 = *(uint *)(param_3 + 0x1c); ((uVar3 & 1) == 0 && (uVar3 != 0));
          uVar3 = *(uint *)((uVar3 & 0xfffffffe) + 0x28)) {
        *(uint *)(uVar3 + 0x14) = *(uint *)(uVar3 + 0x14) & 0xfffffff9;
      }
      if (piVar8 != (int *)0x0) {
        fn_82B006B0(param_1,param_2,piVar8,auStack_70);
      }
      return piVar8 != (int *)0x0;
    }
    for (iVar5 = *piVar11; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      if ((*(int *)(*(int *)(iVar5 + 0xc) + 0x1c) == param_3) &&
         ((*(uint *)(*(int *)(iVar5 + 0xc) + 0x14) & 4) != 0)) {
        piVar11[5] = piVar11[5] | 4;
        goto LAB_82b0a5b8;
      }
    }
    if (((uint)piVar11[2] >> 7 & 0x7f) == uVar7) {
      if (((uint)piVar11[2] >> 0x1a & 1) != 0) {
        fn_82B16698(param_1,piVar11,*(undefined4 *)(param_1 + 0x294));
      }
      cVar6 = fn_82AF6268(param_1,piVar11);
      if ((cVar6 == '\0') &&
         (uVar3 = fn_82AF8E30(param_1,param_2,piVar11,auStack_80), uVar3 < 5)) {
        uVar4 = fn_82AF54E0(param_1,param_2,piVar11);
        if ((uVar10 <= uVar4) &&
           (((uVar4 != uVar10 || (uVar9 < uVar3)) &&
            (iVar5 = fn_82B09BE0(param_1,param_2,piVar11,auStack_90,auStack_80), iVar5 == 0)))) {
          if (*(uint *)(param_1 + 0x298) < auStack_90[0]) {
            fn_82AFA478(param_1,param_2);
          }
          else {
            uStack_68 = uStack_78;
            piVar8 = piVar11;
            uVar9 = uVar3;
            uVar10 = uVar4;
          }
        }
      }
    }
LAB_82b0a5b8:
    piVar11 = *(int **)(((uint)piVar11 & 0xfffffffe) + 0x28);
  } while( true );
}

