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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int *auStack_70;
extern int fn_8251F720();
extern int fn_82520780();
extern int fn_82529D38();
extern int fn_8252CAF8();
extern int fn_82534820();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_825529B0();
extern int fn_82552B50();
extern int fn_8255E0B0();
extern int fn_82560100();
extern int fn_82563230();
extern int fn_82564458();
extern int fn_82573530();
extern int fn_82574340();
extern int fn_825764F0();
extern int fn_8257E190();
extern int fn_825932A8();
extern int fn_82593540();
extern int fn_82594298();
extern int fn_82599B18();
extern int fn_825B9678();
extern int fn_825D4FE8();
extern int fn_825F7968();
extern int fn_8261D908();
extern int fn_826244E0();
extern int fn_8265C9E0();
extern int fn_827F6368();
extern int fn_8288B760();
extern unsigned int lbl_82191574;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CAD94;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832748EC;
extern unsigned int lbl_832748F0;
extern unsigned int lbl_832748F4;
extern unsigned int lbl_832978C8;
extern unsigned int lbl_832978D8;
extern unsigned int lbl_832978DC;
extern unsigned int lbl_832978E0;
extern unsigned int lbl_83297A40;
extern unsigned char switchdataD_821952e8[];
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_825F7028(int param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar6;
  int iVar7;
  char cVar11;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  ulonglong uVar5;
  uint uVar12;
  int *piVar13;
  uint uVar15;
  undefined8 uVar14;
  int *piVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar3 = *(int *)(param_2 + 0x10);
  uVar15 = *(ushort *)(iVar3 + 0xc) - 4;
  if (0x2d < uVar15) {
    return;
  }
  uVar2 = (switchdataD_821952e8)[uVar15];
  uVar15 = (uint)uVar2;
  switch(*(ushort *)(iVar3 + 0xc)) {
  case 4:
    iVar7 = *(int *)(param_1 + 0x8c0);
    if (*(int *)(param_2 + 0x14) == 0) {
      if (iVar7 == 0) {
        return;
      }
      iVar6 = *(short *)(iVar3 + 0x10) * 4;
      uVar15 = *(uint *)(iVar6 + iVar7 + 0x144) & ~*(uint *)(iVar3 + 0x14);
    }
    else {
      if (iVar7 == 0) {
        return;
      }
      iVar6 = *(short *)(iVar3 + 0x10) * 4;
      uVar15 = *(uint *)(iVar3 + 0x14) | *(uint *)(iVar6 + iVar7 + 0x144);
    }
    *(uint *)(iVar6 + iVar7 + 0x144) = uVar15;
    break;
  case 0xc:
  case 0x22:
    if (*(int *)(param_2 + 0x14) != 0) {
      return;
    }
    iVar7 = fn_82520780((double)*(float *)(iVar3 + 0x24),0xffffffff83265a28);
    if (iVar7 == 0) {
      return;
    }
    lbl_832748EC = 0;
    goto LAB_825f7210;
  case 0x11:
    if (*(int *)(param_2 + 0x14) != 0) {
      return;
    }
    iVar7 = fn_82520780((double)*(float *)(iVar3 + 0x24),0xffffffff83265a28);
    if (iVar7 == 0) {
      return;
    }
    uVar15 = *(uint *)(param_1 + 0x4c);
    lbl_832748EC = 1;
    lbl_832748F4 = CONCAT22(*(undefined2 *)(iVar3 + 0x14),(((U64)(lbl_832748F4) >> 16) & 0xFFFF));
    goto LAB_825f7120;
  case 0x15:
    if (*(int *)(iVar3 + 0x28) == 0) {
      fVar1 = *(float *)(param_1 + 0xa8);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x8bc) * *(float *)(param_1 + 0xa0);
    }
    dVar20 = (double)fVar1;
    dVar19 = (double)*(float *)(iVar3 + 0x18);
    dVar21 = (double)(float)((double)*(float *)(iVar3 + 0x14) * dVar20);
    iVar7 = fn_825B9678(*(undefined4 *)(iVar3 + 0x10));
    *(float *)(iVar7 + 0x34) = (float)dVar21;
    *(float *)(iVar7 + 0x28) = (float)dVar19;
    if (*(int *)(iVar3 + 0x1c) != 0) {
      puVar9 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
      uVar10 = *puVar9;
      uVar22 = puVar9[1];
      uVar23 = puVar9[2];
      uVar24 = puVar9[3];
      *(undefined1 *)(iVar7 + 0x86) = 1;
      puVar9 = (undefined4 *)(iVar7 + 0x10U & 0xfffffff0);
      *puVar9 = uVar10;
      puVar9[1] = uVar22;
      puVar9[2] = uVar23;
      puVar9[3] = uVar24;
      fVar1 = *(float *)(iVar3 + 0x24);
      *(float *)(iVar7 + 8) = (float)((double)*(float *)(iVar3 + 0x20) * dVar20);
      *(float *)(iVar7 + 0xc) = (float)((double)fVar1 * dVar20);
    }
    break;
  case 0x1b:
    iVar7 = fn_825529B0(*(int *)(iVar3 + 0x10) * 0x18 + param_1 + 0xa30);
    if (iVar7 != 0) {
      return;
    }
LAB_825f75b8:
    uVar10 = *(undefined4 *)(iVar3 + 0x10);
    piVar13 = (int *)(iVar3 + 0x14);
    goto LAB_825f75c0;
  case 0x1d:
    iVar7 = fn_825529B0(*(int *)(iVar3 + 0x10) * 0x18 + param_1 + 0xa30);
    if (iVar7 != 0) {
      fn_82552B50(*(int *)(iVar3 + 0x10) * 0x18 + param_1 + 0xa30,1);
    }
    break;
  case 0x20:
    fn_82599B18((ulonglong)*(uint *)(param_1 + 0x4c) + 0x7fc,iVar3 + 0x10,0);
    break;
  case 0x21:
    if (*(int *)(param_2 + 0x14) == 0) {
      *(float *)(param_1 + 0x300) = lbl_821CC160;
      return;
    }
    if (*(int *)(param_2 + 0x14) != 2) {
      return;
    }
    uVar15 = 0;
    if (*(int *)(iVar3 + 0x14) != 0) {
      uVar15 = 0;
      if (*(int *)(param_1 + 0x8c0) != 0) {
        iVar6 = (uint)*(byte *)(iVar3 + 0x18) * 4;
        iVar7 = iVar6 >> 3;
        uVar15 = *(byte *)(iVar7 + *(int *)(param_1 + 0x8c0) + 0xd4) >> (iVar6 + iVar7 * -8 & 0x3fU)
                 & 0xf;
      }
      fn_8252CAF8(param_1,(uint)*(byte *)(iVar3 + 0x18),*(undefined1 *)(iVar3 + 0x19));
    }
    fn_8261D908((double)*(float *)(iVar3 + 0x10),param_1);
    if (*(int *)(iVar3 + 0x14) == 0) {
      return;
    }
    uVar12 = (uint)*(byte *)(iVar3 + 0x18);
    goto LAB_825f77a8;
  case 0x23:
    if (*(int *)(param_2 + 0x14) != 0) {
      return;
    }
    if (*(int *)(param_1 + 400) == 0) {
      return;
    }
    if (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x110) != 0) {
      return;
    }
    iVar7 = fn_82520780((double)*(float *)(iVar3 + 0x24),0xffffffff83265a28);
    if (iVar7 == 0) {
      return;
    }
    lbl_832748EC = 2;
LAB_825f7210:
    lbl_832748F4 = *(undefined4 *)(iVar3 + 0x14);
    uVar15 = *(uint *)(param_1 + 0x4c);
LAB_825f7120:
    lbl_832748F0 = param_1;
    uVar14 = fn_825F7968(param_1,0xffffffff832748ec,*(undefined4 *)(iVar3 + 0x1c),
                               *(undefined4 *)(iVar3 + 0x20));
    iVar7 = fn_82599B18((ulonglong)uVar15 + 0x7fc,iVar3 + 0x10,uVar14);
    if (iVar7 != -1) {
      fVar1 = lbl_821954E8;
      if (*(int *)(iVar3 + 0x18) != 0) {
        dVar21 = (double)(*(float *)(iVar3 + 8) - *(float *)(iVar3 + 4));
        if ((*(int *)(param_1 + 400) == 0) ||
           (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x114) == 0)) {
          dVar19 = (double)lbl_821CC160;
        }
        else {
          dVar19 = (double)fn_827F6368();
        }
        fVar1 = (float)(dVar19 * dVar21);
      }
      fn_826244E0((double)fVar1,(ulonglong)uVar15);
    }
    piVar13 = (int *)(iVar3 + 0x2c);
    if (piVar13 == (int *)0x0) {
      bVar18 = false;
    }
    else {
      bVar18 = *piVar13 != 0;
    }
    if (bVar18) {
      uVar10 = *(undefined4 *)(iVar3 + 0x28);
LAB_825f75c0:
      fn_82563230(param_1,uVar10,piVar13,0,0);
    }
    break;
  case 0x25:
    if (*(int *)(param_2 + 0x14) == 0) {
      if ((*(int *)(*(int *)(param_1 + 0x4c) + 0x5c) == 0) &&
         (*(float *)(*(int *)(param_1 + 0x4c) + 0x6c) <= lbl_821CC160)) {
        if (*(int *)(iVar3 + 0x14) == 0) {
          fVar1 = *(float *)(param_1 + 0xa8);
        }
        else {
          fVar1 = *(float *)(param_1 + 0x8bc) * *(float *)(param_1 + 0xa0);
        }
        dVar21 = (double)fVar1;
        if (*(int *)(iVar3 + 0x10) != 0) {
          iVar7 = *(int *)(iVar3 + 0x18);
          puVar9 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
          uVar10 = puVar9[1];
          uVar22 = puVar9[2];
          uVar23 = puVar9[3];
          puVar4 = (undefined4 *)((int)&uStack_60 + (uint)uVar2 & 0xfffffff0);
          *puVar4 = *puVar9;
          puVar4[1] = uVar10;
          puVar4[2] = uVar22;
          puVar4[3] = uVar23;
          if ((iVar7 == 0) || (*(int *)(param_1 + 0x1c4) != -1)) {
            if (*(int *)(param_1 + 0x20) == 0) {
              cVar11 = *(int *)(param_1 + 0x24) != 0;
            }
            else {
              cVar11 = fn_8288B760();
            }
            if (cVar11 != '\0') {
              fn_82594298(dVar21,(int *)(iVar3 + 0x10),&uStack_60);
            }
          }
        }
      }
    }
    break;
  case 0x26:
    if (*(int *)(iVar3 + 0x10) != 0) {
      if (*(short *)(iVar3 + 0x14) == 0) {
        if (*(int *)(iVar3 + 0x18) < 0) {
          puVar9 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
          uVar10 = puVar9[1];
          uVar22 = puVar9[2];
          uVar23 = puVar9[3];
          puVar4 = (undefined4 *)((int)&uStack_60 + (uint)uVar2 & 0xfffffff0);
          *puVar4 = *puVar9;
          puVar4[1] = uVar10;
          puVar4[2] = uVar22;
          puVar4[3] = uVar23;
        }
        else {
          fn_8255E0B0(param_1,(short)*(int *)(iVar3 + 0x18),&uStack_60);
        }
      }
      else {
        uVar14 = fn_825932A8(param_1);
        if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)
                    ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                    *(int *)(param_1 + 0x8c0));
        }
        fn_82574340(uVar14,param_1 + 0xf0,uVar10,&uStack_60);
      }
      fn_82560100((double)lbl_821CC160,*(undefined4 *)(param_1 + 0x4c),iVar3 + 0x10,&uStack_60
                       );
    }
    break;
  case 0x2a:
    iVar7 = fn_825529B0(param_1 + 0xa48);
    if (iVar7 != 0) {
      return;
    }
  case 0x1a:
  case 0x1c:
  case 0x1e:
  case 0x1f:
    iVar7 = fn_82520780((double)*(float *)(iVar3 + 0x18),0xffffffff83265a28);
    if (iVar7 == 0) {
      return;
    }
    goto LAB_825f75b8;
  case 0x2b:
    cVar11 = fn_82534820(*(undefined4 *)(iVar3 + 0x14));
    if (cVar11 != '\0') {
      auStack_70[0] = *(undefined4 *)(iVar3 + 0x14);
      auStack_70[0] =
           fn_82535298(auStack_70,*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x84c),
                             0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(auStack_70);
    }
    break;
  case 0x2c:
    uVar15 = *(uint *)(iVar3 + 0x14);
    uVar12 = *(uint *)(iVar3 + 0x10) & 0xff;
LAB_825f77a8:
    fn_8252CAF8(param_1,uVar12,uVar15 & 0xff);
    break;
  case 0x2e:
    if (*(int *)(iVar3 + 0x50) == 0) {
      uVar14 = 0;
    }
    else {
      fn_82529D38(param_1,&uStack_60);
      if ((lbl_83297A40 & 1) == 0) {
        lbl_83297A40 = lbl_83297A40 | 1;
      }
      lbl_832978D8 = uStack_60;
      lbl_832978DC = uStack_5c;
      uVar14 = 0xffffffff832978c8;
      lbl_832978E0 = uStack_58;
      lbl_832978C8 = 4;
    }
    lVar17 = fn_82593540(iVar3 + 0x10);
    if (lVar17 != 0) {
      fn_82564458(param_1,lVar17,uVar14);
    }
    break;
  case 0x2f:
    if ((*(int *)(param_2 + 0x14) == 0) && (param_1 != 0)) {
      iVar7 = *(int *)(param_1 + 0x4c);
      uVar15 = *(uint *)(param_1 + 0x8c0);
      if ((iVar7 != 0) &&
         ((((ulonglong)uVar15 != 0 &&
           (iVar6 = fn_82520780((double)*(float *)(iVar3 + 0x54),0xffffffff83265a28), iVar6 != 0))
          && (*(int *)(iVar7 + 0x93c) != 0)))) {
        lVar17 = (ulonglong)uVar15 + 0x128;
        for (iVar7 = fn_82573530(lVar17,iVar3 + 0x10); iVar7 != 0;
            iVar7 = fn_825764F0(lVar17,iVar3 + 0x10,iVar7)) {
          piVar13 = *(int **)(iVar7 + 0x1b0);
          (**(code **)(*piVar13 + 8))(piVar13,5,0);
          if (*(float *)(iVar3 + 0x50) != lbl_821CA460) {
            (**(code **)(*piVar13 + 8))(piVar13,0x15,*(undefined4 *)(iVar3 + 0x50));
          }
        }
      }
    }
    break;
  case 0x30:
    if ((*(int *)(param_2 + 0x14) == 0) && (param_1 != 0)) {
      if ((*(int *)(param_1 + 0x4c) != 0) &&
         (((ulonglong)*(uint *)(param_1 + 0x8c0) != 0 &&
          (*(int *)(*(int *)(param_1 + 0x4c) + 0x93c) != 0)))) {
        lVar17 = (ulonglong)*(uint *)(param_1 + 0x8c0) + 0x128;
        for (iVar7 = fn_82573530(lVar17,iVar3 + 0x10); iVar7 != 0;
            iVar7 = fn_825764F0(lVar17,iVar3 + 0x10,iVar7)) {
          (**(code **)(**(int **)(iVar7 + 0x1b0) + 8))(*(int **)(iVar7 + 0x1b0),0,0);
        }
      }
    }
    break;
  case 0x31:
    if (*(int *)(param_2 + 0x14) == 0) {
      piVar13 = *(int **)(param_1 + 0x8c0);
      piVar8 = (int *)(**(code **)(*piVar13 + 0x30))(piVar13);
      if (piVar8 != (int *)0x0) {
        piVar16 = piVar8 + 1;
        piVar8 = piVar16 + *piVar8 * 0x11;
        if (piVar16 < piVar8) {
          do {
            if (*(short *)piVar16 == *(short *)(iVar3 + 0x14)) goto LAB_825f78a0;
            piVar16 = piVar16 + 0x11;
          } while (piVar16 < piVar8);
        }
        piVar16 = (int *)0x0;
LAB_825f78a0:
        if (piVar16 != (int *)0x0) {
          iVar7 = *(int *)(param_1 + 0x4c);
          fn_82574340(piVar16,param_1 + 0xf0,piVar13[*(int *)(iVar7 + 0x44) + 0x20],&uStack_60
                           );
          puVar9 = (undefined4 *)fn_8265C9E0(0x70);
          if (puVar9 != (undefined4 *)0x0) {
            fn_825D4FE8(puVar9,iVar7,0x10);
            *puVar9 = &lbl_821CAD94;
            uVar10 = fn_8251F720(iVar3 + 0x10,0);
            puVar9[0x14] = uVar10;
            fVar1 = lbl_82191FC8;
            puVar4 = (undefined4 *)((int)&uStack_60 + uVar15 & 0xfffffff0);
            uVar10 = *puVar4;
            uVar22 = puVar4[1];
            uVar23 = puVar4[2];
            uVar24 = puVar4[3];
            dVar21 = (double)lbl_82191FC8;
            puVar9[0x15] = lbl_82191FC8;
            puVar9[0x16] = fVar1;
            puVar9 = (undefined4 *)((uint)(puVar9 + 8) & 0xfffffff0);
            *puVar9 = uVar10;
            puVar9[1] = uVar22;
            puVar9[2] = uVar23;
            puVar9[3] = uVar24;
            uVar5 = fn_8265C9E0(0x80);
            if ((uVar5 & 0xffffffff) != 0) {
              fn_8257E190(dVar21,(double)lbl_82191574,uVar5,iVar7);
            }
          }
        }
      }
    }
  }
  return;
}

