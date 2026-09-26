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
extern unsigned int *auStack_a0;
extern int fn_82936448();
extern int fn_82936530();
extern int fn_82937A60();
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int uStack_a4;


ulonglong fn_8293AC38(int param_1,uint *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  uint *puStack0000001c;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a4;
  uint auStack_a0 [40];
  
  iStack_a8 = *(int *)(param_3 + 0x70);
  bVar5 = false;
  iStack_ac = 0;
  bVar8 = false;
  bVar7 = true;
  bVar9 = false;
  bVar6 = false;
  puStack0000001c = param_2;
  if (iStack_a8 != 0) {
    do {
      piVar4 = (int *)(iStack_a8 + 8);
      iStack_a8 = *(int *)(iStack_a8 + 0xc);
      uVar13 = (ulonglong)*(uint *)(*piVar4 + 0xc);
      lVar10 = uVar13 + 0x10;
      pcVar3 = *(char **)(*(int *)(*piVar4 + 8) + 0x18);
      pcVar15 = "position";
      pcVar16 = pcVar3;
      if (uVar13 == 0) {
        lVar10 = 0;
      }
      do {
        cVar1 = *pcVar16;
        cVar2 = *pcVar15;
        if (cVar1 == '\0') break;
        pcVar15 = pcVar15 + 1;
        pcVar16 = pcVar16 + 1;
      } while (cVar1 == cVar2);
      pcVar15 = "interpolators";
      pcVar16 = pcVar3;
      if (cVar1 == cVar2) {
        iStack_ac = iStack_ac + 1;
        if (*(int *)(param_1 + 0x40) == 1) {
          bVar8 = true;
        }
        if (uVar13 != 0) {
          bVar9 = true;
        }
        uVar14 = puStack0000001c[1] & 0xfffff9ff | 0x200;
LAB_8293ae4c:
        puStack0000001c[1] = uVar14;
      }
      else {
        do {
          cVar1 = *pcVar16;
          cVar2 = *pcVar15;
          if (cVar1 == '\0') break;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 == cVar2);
        pcVar15 = "colors";
        pcVar16 = pcVar3;
        if (cVar1 == cVar2) {
          if (*(int *)(param_1 + 0x40) == 1) {
LAB_8293ae30:
            bVar8 = true;
          }
LAB_8293ae34:
          iStack_ac = iStack_ac + 1;
          if (uVar13 != 0) {
            bVar9 = true;
          }
          uVar14 = puStack0000001c[1] & 0xfffff9ff | 0x400;
          goto LAB_8293ae4c;
        }
        do {
          cVar1 = *pcVar16;
          cVar2 = *pcVar15;
          if (cVar1 == '\0') break;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 == cVar2);
        pcVar15 = pcVar3;
        pcVar16 = "export";
        if (cVar1 == cVar2) {
          if (*(int *)(param_1 + 0x40) != 1) goto LAB_8293ae30;
          goto LAB_8293ae34;
        }
        do {
          cVar1 = *pcVar15;
          cVar2 = *pcVar16;
          if (cVar1 == '\0') break;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 == cVar2);
        pcVar15 = pcVar3;
        pcVar16 = "DoNotSerialize";
        if (cVar1 == cVar2) {
          iVar11 = fn_82936448(lVar10,auStack_a0,1,2);
          uVar12 = 0xffffffff8203267c;
          if (iVar11 < 0) {
LAB_8293aea4:
            fn_82937A60(param_1,uVar12);
            goto LAB_8293af74;
          }
          iStack_ac = iStack_ac + 1;
          *puStack0000001c = auStack_a0[0] & 7 | *puStack0000001c & 0xfffffff8;
          puStack0000001c[1] = puStack0000001c[1] | 0x600;
        }
        else {
          do {
            cVar1 = *pcVar15;
            cVar2 = *pcVar16;
            if (cVar1 == '\0') break;
            pcVar15 = pcVar15 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            uVar12 = 0xffffffff820326b0;
            if (!bVar6) {
              uStack_a4 = 0;
              bVar6 = true;
              iVar11 = fn_82936530(lVar10,&uStack_a4);
              if (-1 < iVar11) {
                uVar14 = (uStack_a4 & 1) << 8 | puStack0000001c[1] & 0xfffffeff;
                goto LAB_8293ae4c;
              }
              uVar12 = 0xffffffff820326e4;
            }
            goto LAB_8293aea4;
          }
          fn_82937A60(param_1,0xffffffff82032718,pcVar3);
LAB_8293af74:
          bVar5 = true;
        }
      }
      if (bVar7) {
        if ((iStack_ac == 0) && (!bVar5)) {
          fn_82937A60(param_1,0xffffffff82032730,pcVar3);
          bVar5 = true;
        }
        bVar7 = false;
      }
      if (bVar8) {
        uVar12 = 0xffffffff82032780;
        if (*(int *)(param_1 + 0x40) != 1) {
          uVar12 = 0xffffffff82032788;
        }
        fn_82937A60(param_1,0xffffffff82032790,pcVar3,uVar12);
        bVar5 = true;
        bVar8 = false;
      }
      if (bVar9) {
        fn_82937A60(param_1,0xffffffff820327c0,pcVar3);
        bVar5 = true;
        bVar9 = false;
      }
      if ((1 < iStack_ac) && (!bVar5)) {
        fn_82937A60(param_1,0xffffffff820327ec);
        bVar5 = true;
      }
    } while (iStack_a8 != 0);
    if (iStack_ac != 0) goto LAB_8293b090;
  }
  if (!bVar5) {
    if (*(int *)(param_1 + 0x40) == 1) {
      uVar12 = 0xffffffff82032668;
    }
    else {
      uVar12 = 0xffffffff82032644;
    }
    fn_82937A60(param_1,0xffffffff8203260c,uVar12);
    bVar5 = true;
  }
LAB_8293b090:
  return -(ulonglong)bVar5 & 0xffffffff80004005;
}

