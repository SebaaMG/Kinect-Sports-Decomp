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
extern int fn_82D40568();
extern unsigned int lbl_8200133C;


longlong fn_82E00188(int param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                      undefined4 *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 in_r0;
  char cVar8;
  int iVar7;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar1 = *(int *)(param_1 + 0x14);
  lVar10 = 0;
  if (0 < iVar1) {
    iVar9 = 0;
    piVar12 = param_4 + 7;
    dVar13 = (double)lbl_8200133C;
    do {
      piVar11 = (int *)(iVar9 * 0x60 + *(int *)(param_1 + 0x10));
      if (param_4 != (int *)0x0) {
        iVar2 = piVar11[1];
        piVar12[-4] = 0;
        piVar12[-5] = (int)(piVar11 + 4);
        piVar12[-6] = -1;
        *(undefined1 *)(piVar12 + -3) = 0;
        *param_4 = iVar2;
        piVar12[-2] = 0;
        *(undefined1 *)(piVar12 + -1) = 0;
        *piVar12 = 0;
        *(undefined1 *)((int)piVar12 + -2) = 0xff;
        *(undefined1 *)((int)piVar12 + -3) = 0x7f;
        fn_82D40568(piVar12 + 1);
        piVar12[0xc] = (int)(float)dVar13;
        *(char *)((int)piVar12 + -3) = (char)param_4 - ((char)piVar12 + -8);
        *(undefined1 *)((int)piVar12 + -0xb) = 0;
        *(undefined2 *)((int)piVar12 + -10) = 0;
      }
      (**(code **)(*(int *)*piVar11 + 0x28))();
      iVar2 = *piVar11;
      iVar3 = *(int *)(iVar2 + 0xd4);
      if (0 < iVar3) {
        iVar7 = 0;
        iVar4 = 0;
        do {
          *param_5 = param_4;
          cVar8 = (char)iVar7 + '\x01';
          lVar10 = lVar10 + 1;
          iVar7 = (int)cVar8;
          param_5[1] = *(undefined4 *)(iVar4 + *(int *)(iVar2 + 0xd0));
          puVar5 = (undefined4 *)((int)piVar11 + (int)in_r0 + 0x40 & 0xfffffff0);
          uVar14 = puVar5[1];
          uVar15 = puVar5[2];
          uVar16 = puVar5[3];
          puVar6 = (undefined4 *)((uint)(param_5 + 4) & 0xfffffff0);
          *puVar6 = *puVar5;
          puVar6[1] = uVar14;
          puVar6[2] = uVar15;
          puVar6[3] = uVar16;
          iVar4 = iVar7 << 2;
          puVar5 = (undefined4 *)((int)piVar11 + (int)in_r0 + 0x50 & 0xfffffff0);
          uVar14 = *puVar5;
          uVar15 = puVar5[1];
          uVar16 = puVar5[2];
          uVar17 = puVar5[3];
          param_5[0xc] = param_6;
          puVar5 = (undefined4 *)((uint)(param_5 + 8) & 0xfffffff0);
          *puVar5 = uVar14;
          puVar5[1] = uVar15;
          puVar5[2] = uVar16;
          puVar5[3] = uVar17;
          param_5[0xd] = 1;
          param_5[0x10] = 0;
          param_5 = param_5 + 0x14;
          param_6 = param_6 + 0x30;
        } while (cVar8 < iVar3);
      }
      cVar8 = (char)iVar9 + '\x01';
      param_4 = param_4 + 0x14;
      iVar9 = (int)cVar8;
      piVar12 = piVar12 + 0x14;
    } while (cVar8 < iVar1);
  }
  return lVar10;
}

