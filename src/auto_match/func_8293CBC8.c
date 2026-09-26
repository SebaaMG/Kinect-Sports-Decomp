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
extern unsigned int *auStack_80;
extern int fn_82635EE8();
extern int fn_82635FD0();
extern int fn_82936130();
extern int fn_82937A60();
extern int fn_8293B260();
extern int fn_8293B3D8();
extern int fn_8293C408();
extern int fn_82A9F7E0();
extern unsigned int iStack_68;
extern unsigned int lbl_821CE368;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_8293CBC8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 auStack_80 [8];
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_68;
  
  *(undefined4 *)(param_1 + 300) = 0;
  uStack_78 = 0xe0000000;
  iVar2 = *(int *)(param_2 + 0x30);
  bVar4 = iVar2 == 3;
  bVar5 = iVar2 == 2;
  if ((iVar2 == 2) || (iVar2 == 4)) {
    iVar2 = *(int *)(param_2 + 0x34);
    if (iVar2 == 0xf0) {
      bVar4 = true;
    }
    else {
      if (iVar2 == 0xf2) {
        *(undefined4 *)(param_2 + 0x34) = 2;
      }
      else {
        if (iVar2 != 0xf4) goto LAB_8293ccb0;
        *(undefined4 *)(param_2 + 0x34) = 0x1d;
      }
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x60);
    }
LAB_8293ccb0:
    if (!bVar4) {
      uVar21 = 0;
      uVar12 = ((ulonglong)*(uint *)(param_2 + 0x34) & 0x1f) << 0x18 | 0xe0000000;
      uStack_78 = (uint)uVar12;
      uVar12 = (ulonglong)*(byte *)(((byte)(uVar12 >> 0x18) & 0x1f) + 0x8315accc);
      if (uVar12 != 0) {
        piVar18 = (int *)(param_2 + 0x60);
        do {
          if (*piVar18 != 0) {
            fn_8293B260(param_1,auStack_80,uVar21);
          }
          uVar21 = uVar21 + 1;
          piVar18 = piVar18 + 1;
        } while ((uVar21 & 0xffffffff) < uVar12);
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x30);
  if ((iVar2 != 3) && (iVar2 != 4)) goto LAB_8293cf98;
  iVar10 = *(int *)(param_2 + 0x38);
  bVar6 = false;
  uVar19 = -(uint)(iVar2 != 3) & 2;
  iVar14 = (uVar19 + 0x18) * 4;
  iVar11 = *(int *)(iVar14 + param_2);
  if (iVar10 == 0xf1) {
    bVar5 = true;
  }
  else {
    if (iVar10 == 0xf3) {
      iVar10 = 5;
    }
    else if (iVar10 == 0xfc) {
      iVar10 = 0x17;
    }
    else {
      if (iVar10 != 0xfd) goto LAB_8293cd88;
      iVar10 = 0x18;
    }
    bVar6 = true;
  }
LAB_8293cd88:
  if ((bVar6) && (*(uint *)(iVar11 + 0x24) != (*(uint *)(iVar11 + 0x24) & 3) * 0x55)) {
LAB_8293cda4:
    uVar9 = 0xffffffff82033a28;
    goto LAB_8293cdac;
  }
  if ((bVar5) ||
     (((iVar2 != 3 && (2 < *(byte *)(*(int *)(param_2 + 0x34) + -0x7cea5334))) ||
      (cVar1 = *(char *)(iVar10 + -0x7cea5368), cVar1 == '\0')))) goto LAB_8293cf98;
  uVar8 = *(uint *)(iVar11 + 0x24);
  if (cVar1 == '\x01') {
    if ((uint)LZCOUNT((uVar8 & 3) * 0x55 - uVar8) >> 5 == 0) goto LAB_8293cda4;
LAB_8293cea8:
    fn_8293B260(param_1,auStack_80,2,iVar11);
    if (cVar1 != '\x04') {
LAB_8293cf98:
      if (bVar4) {
        uStack_78 = uStack_78 & 0xe0ffffff | 0x2000000;
      }
      fn_8293B3D8(param_1,auStack_80,param_2);
      iVar2 = *(int *)(param_2 + 0x30);
      iVar17 = 0;
      iVar22 = 0;
      iVar20 = 0;
      uStack_70 = 0;
      iVar11 = 0;
      iStack_68 = 0;
      iVar10 = 0;
      iVar14 = 0;
      puVar13 = &uStack_74;
      do {
        if (iVar2 == 3) {
          if (iVar14 == 2) {
            iVar3 = *(int *)(param_2 + 0x60);
            goto LAB_8293d024;
          }
        }
        else {
          iVar3 = *(int *)((iVar14 + 0x18) * 4 + param_2);
LAB_8293d024:
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) == 2)) {
            if ((*(int *)(iVar3 + 0x14) == 0xb000000) || (*(int *)(iVar3 + 0x14) == 0xc000000)) {
              iVar11 = iVar11 + 1;
            }
            else {
              iVar10 = iVar10 + 1;
            }
            uVar16 = 0;
            if (*(int *)(iVar3 + 0x28) != 0) {
              if (*(int *)(*(int *)(iVar3 + 0x28) + 0x10) == 0xf) {
                iVar22 = iVar22 + 1;
              }
              else {
                iVar17 = iVar17 + 1;
              }
              uVar16 = 1;
            }
            puVar13 = puVar13 + 1;
            *puVar13 = uVar16;
            iVar20 = iVar20 + 1;
          }
        }
        iVar14 = iVar14 + 1;
        if (2 < iVar14) {
          if ((iVar11 != 0) && (iVar10 != 0)) {
            fn_82937A60(param_1,0xffffffff820337a8);
          }
          if ((iVar22 != 0) && (iVar17 != 0)) {
            fn_82937A60(param_1,0xffffffff82033730);
          }
          if ((((iVar20 == 3) && ((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) != iStack_68)) && ((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) != -1)) &&
             (iStack_68 != -1)) {
            fn_82937A60(param_1,0xffffffff820336a8);
          }
          uVar9 = fn_8293C408(param_1,1);
          uVar7 = fn_82635EE8(uVar9,auStack_80);
          if (*(int *)(param_2 + 0x50) != 0) {
            fn_82635FD0(uVar9,uVar7,1);
          }
          if (*(int *)(param_1 + 0x144) != 0) {
            fn_82A9F7E0(*(undefined4 *)(param_1 + 0x13c),1,uVar7,*(undefined4 *)(param_2 + 0x20)
                            ,*(undefined4 *)(param_2 + 0x24),0xffffffffffffffff,0);
          }
          return 0;
        }
      } while( true );
    }
    if (*(int *)(iVar11 + 0x10) == 2) {
      iVar2 = *(int *)((uVar19 + 0x19) * 4 + param_2);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) != 0)) {
        uVar9 = 0xffffffff82033830;
      }
      else {
        uVar19 = *(uint *)(iVar11 + 0x24);
        uVar8 = uVar19 >> 6 & 3;
        if (uVar8 == (uVar19 & 3)) {
          fn_82937A60(param_1,0xffffffff820338f8,(&lbl_821CE368)[uVar8]);
          return 0xffffffff80004005;
        }
        if (*(int *)(*(int *)(iVar14 + param_2) + 0x14) == *(int *)(iVar2 + 0x14)) {
          uStack_78 = (*(uint *)(iVar2 + 0x18) & 2) << 0x1c | uStack_78 & 0xdfffffff;
          goto LAB_8293cf98;
        }
        uVar9 = 0xffffffff82033888;
      }
    }
    else {
      uVar9 = 0xffffffff82033968;
    }
  }
  else {
    if (cVar1 == '\x02') {
      uVar15 = (uVar8 >> 2 & 3) * 0x54 | uVar8 & 3;
LAB_8293ce64:
      if ((uint)LZCOUNT(uVar15 - uVar8) >> 5 != 0) {
LAB_8293ce98:
        uVar8 = fn_82936130(param_2,uVar19);
        *(uint *)(iVar11 + 0x24) = uVar8;
        goto LAB_8293cea8;
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_8293ce98;
      if (uVar8 == (uVar8 & 3) * 0x55) {
        uVar8 = *(uint *)(*(int *)((uVar19 + 0x19) * 4 + param_2) + 0x24);
        uVar15 = (uVar8 & 3) * 0x55;
        goto LAB_8293ce64;
      }
    }
    uVar9 = 0xffffffff820339c0;
  }
LAB_8293cdac:
  fn_82937A60(param_1,uVar9);
  return 0xffffffff80004005;
}

