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
extern int fn_827AED80();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_70;
extern unsigned int iStack_7c;
extern unsigned int uStack_5c;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_827AEE78(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 uStack_5c;
  
  lVar5 = param_1 + 0xc;
  uStack_6c = 0;
  iStack_7c = 0;
  uStack_80 = 0xffffffff;
  iVar8 = 0;
  uStack_78 = 0xffffffff;
  uVar12 = 0;
  uStack_74 = 0;
  iVar11 = 0;
  iStack_70 = 0;
  piVar3 = (int *)param_1;
  iStack_60 = 0;
  iStack_64 = 0;
  iStack_68 = 0;
  uStack_5c = 0;
  do {
    uVar7 = 0xffffffff;
    uVar9 = (ulonglong)*(uint *)(*piVar3 + 4);
    if (uVar9 != 0) {
      lVar13 = 0;
      do {
        lVar10 = (ulonglong)*(uint *)*piVar3 + lVar13;
        puVar6 = (undefined4 *)lVar10;
        uVar14 = (uint)*(byte *)(puVar6 + 9) & piVar3[0xd];
        if (uVar14 != 0) {
          iVar1 = puVar6[4];
          uVar2 = piVar3[1];
          if (((iVar1 == 0) || (uVar2 < (uint)puVar6[3])) ||
             (bVar4 = true, (uint)(puVar6[3] + iVar1) <= uVar2)) {
            bVar4 = false;
          }
          if (bVar4) {
            if (iVar8 == 0) {
              uStack_80 = *puVar6;
              iVar11 = (iVar1 - uVar2) + puVar6[3];
              iStack_7c = puVar6[1];
              uStack_78 = puVar6[2];
              uStack_6c = puVar6[5];
              iStack_68 = puVar6[6];
              iStack_64 = puVar6[7];
              iStack_60 = puVar6[8];
              uStack_5c = *(undefined1 *)(puVar6 + 9);
              uVar12 = uVar2;
              iVar8 = iStack_7c;
              uStack_74 = uVar2;
              iStack_70 = iVar11;
              if (uVar7 < iVar11 + uVar2) {
                iVar11 = uVar7 - uVar2;
LAB_827aeff4:
                uVar7 = iVar11 + uStack_74;
                uVar12 = uStack_74;
                iVar8 = iStack_7c;
                iStack_70 = iVar11;
              }
            }
            else if (uVar14 != piVar3[0xd]) {
              fn_827AED80(&iStack_68,lVar10 + 0x18);
              uVar7 = *(int *)((int)lVar10 + 0xc) + *(int *)((int)lVar10 + 0x10);
              uVar12 = iStack_70 + uStack_74;
              if (uVar7 < iStack_70 + uStack_74) {
                uVar12 = uVar7;
              }
              iVar11 = uVar12 - uStack_74;
              goto LAB_827aeff4;
            }
          }
          uVar14 = *(uint *)((int)lVar10 + 0xc);
          if ((uint)piVar3[1] < uVar14) {
            if (uVar14 <= uVar7) {
              uVar7 = uVar14;
            }
            if ((iVar8 != 0) && (uVar7 < iVar11 + uVar12)) {
              iVar11 = uVar7 - uVar12;
              iStack_70 = iVar11;
            }
          }
        }
        uVar9 = uVar9 - 1;
        lVar13 = lVar13 + 0x28;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)lVar5;
    *puVar6 = uStack_80;
    puVar6[1] = iVar8;
    puVar6[2] = uStack_78;
    puVar6[3] = uVar12;
    puVar6[4] = iVar11;
    puVar6[5] = uStack_6c;
    piVar3[9] = iStack_68;
    piVar3[10] = iStack_64;
    piVar3[0xb] = iStack_60;
    *(undefined1 *)(piVar3 + 0xc) = uStack_5c;
    piVar3[1] = uVar7;
    if ((iVar8 != 0) || (uVar7 == 0xffffffff)) {
      return;
    }
  } while( true );
}

