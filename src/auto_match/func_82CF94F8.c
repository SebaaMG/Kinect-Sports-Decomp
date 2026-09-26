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
extern int fn_82D00FB0();
extern int fn_82D019B8();
extern int fn_82D020E8();
extern int fn_82D03A60();
extern int fn_82D03AA8();


undefined8 fn_82CF94F8(int param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar3;
  undefined8 uVar2;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined1 auStack_70 [8];
  int aiStack_68 [26];
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x208);
  uVar9 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x208)) {
    piVar3 = (int *)(param_1 + 0x17c);
    do {
      lVar4 = 0;
      for (puVar12 = *(undefined4 **)(*piVar3 + 0x10); puVar12 != (undefined4 *)0x0;
          puVar12 = (undefined4 *)*puVar12) {
        lVar4 = lVar4 + 1;
      }
      lVar6 = 0;
      for (puVar12 = *(undefined4 **)(*piVar3 + 0xc); puVar12 != (undefined4 *)0x0;
          puVar12 = (undefined4 *)*puVar12) {
        lVar6 = lVar6 + 1;
      }
      piVar3 = piVar3 + 1;
      uVar9 = lVar6 + lVar4 + uVar9;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar4 = (uVar9 & 0x3fffffff) << 2;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x24))(*(int **)(param_1 + 0x28),lVar4);
  if (piVar3 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x208)) {
      piVar11 = (int *)(param_1 + 0x17c);
      piVar13 = piVar3;
      do {
        iVar1 = *piVar11;
        iVar5 = 0;
        for (puVar12 = *(undefined4 **)(iVar1 + 0x10); puVar12 != (undefined4 *)0x0;
            puVar12 = (undefined4 *)*puVar12) {
          iVar5 = iVar5 + 1;
        }
        iVar8 = 0;
        for (puVar12 = *(undefined4 **)(iVar1 + 0xc); puVar12 != (undefined4 *)0x0;
            puVar12 = (undefined4 *)*puVar12) {
          iVar8 = iVar8 + 1;
        }
        fn_82D019B8(iVar1,piVar13,iVar8 + iVar5);
        iVar10 = iVar10 + 1;
        piVar13 = piVar13 + iVar8 + iVar5;
        piVar11 = piVar11 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x208));
    }
    if (1 < (int)uVar9) {
      fn_82D00FB0(piVar3,0,uVar9 - 1,0xffffffff82d01418);
    }
    fn_82D03A60(aiStack_68,param_1 + 0x2c);
    piVar13 = piVar3;
    while (aiStack_68[0] != 0) {
      if (aiStack_68[0] + 0x10 == *piVar13) {
        piVar13 = piVar13 + 1;
      }
      else {
        (*param_2)(aiStack_68[0] + 0x10,*(uint *)(aiStack_68[0] + 4) & 0xfffffffc,
                   *(uint *)(aiStack_68[0] + 4) >> 1 & 1,0,param_3);
      }
      fn_82D03AA8(auStack_70,param_1 + 0x2c,aiStack_68);
    }
    (**(code **)(**(int **)(param_1 + 0x28) + 0x28))(*(int **)(param_1 + 0x28),piVar3,lVar4);
    lVar4 = 0;
    if (0 < *(int *)(param_1 + 0x208)) {
      puVar12 = (undefined4 *)(param_1 + 0x178);
      do {
        lVar4 = lVar4 + 1;
        puVar12 = puVar12 + 1;
        fn_82D020E8(*puVar12,param_2,lVar4,param_3);
      } while ((int)lVar4 < *(int *)(param_1 + 0x208));
    }
    uVar2 = 0;
  }
  return uVar2;
}

