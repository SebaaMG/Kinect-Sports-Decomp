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
extern unsigned int *auStack_e0;
extern int fn_82A1BC38();
extern int fn_82A1BC40();
extern int fn_82A1BC70();
extern int fn_82A346E0();
extern int fn_82A34938();
extern int fn_82A37298();
extern int fn_82A37C50();
extern int fn_82A37D48();
extern int fn_82F68CC0();
extern int fn_83142B7C();
extern int fn_83142F0C();
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int lbl_820893C4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82A34DC8(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 auStack_e0 [2];
  uint uStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  
  uStack_f0 = 0;
  uStack_e8 = 0;
  iVar4 = 0;
  uStack_ec = 0;
  uVar21 = 0;
  uStack_d8 = 0;
  uVar12 = 0;
  uVar13 = 0xffffffff;
  iVar5 = -0x3fffffff;
  if (*(int *)(param_2 + 0x10) == -1) {
    if (*(int *)(param_2 + 0x4c) != -1) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
      iVar4 = fn_82A37C50(param_1 + 0x23,*(undefined4 *)(param_2 + 0xc),&uStack_f0);
      goto LAB_82a34e3c;
    }
  }
  else {
LAB_82a34e3c:
    if (*(int *)(param_2 + 0x4c) == -1) {
      uVar10 = uVar12;
      iVar5 = -0x3fffffff;
      if (iVar4 == 0) {
        iVar5 = -0x3fffffff;
        if ((code *)param_1[0xf] != (code *)0x0) {
          auStack_e0[0] = 0;
          iVar5 = (*(code *)param_1[0xf])
                            (0xffffffff820893a4,*(undefined4 *)(param_2 + 4),0,0,param_1[100],
                             auStack_e0,0,&uStack_e8);
        }
        uStack_c0 = 0;
        puVar6 = (undefined4 *)
                 fn_82A37298(param_1 + 0x43,param_2 + 0xc,param_1[100],&uStack_c0,param_1[100],0
                                 ,0,0xffffffffffffffff);
        uVar1 = puVar6[4];
        uVar10 = (ulonglong)uVar1;
        if (uVar1 == 0) {
          if ((uint)(0x8000 << (*(uint *)(puVar6[2] + 0xc) >> 4 & 3)) <= (uint)param_1[100]) {
            fn_82A37D48(param_1 + 0x23,*puVar6);
          }
          iVar4 = puVar6[2];
          uStack_f0 = ((int)((longlong)
                             (int)((-(uint)((*(uint *)(iVar4 + 0xc) & 0xc00000) != 0) & 0xc) + 0x14)
                             * (longlong)(int)(*(uint *)(iVar4 + 0xc) >> 6 & 0xffff) + 0x1fU >> 5) +
                      4) * 4;
          uVar10 = uVar12;
          uVar1 = uStack_d8;
        }
        uStack_d8 = uVar1;
        if (((code *)param_1[0x10] != (code *)0x0) && (-1 < iVar5)) {
          (*(code *)param_1[0x10])(puVar6[4],uStack_e8);
        }
        if ((int)uVar10 != 0) goto LAB_82a35364;
      }
      fn_82A346E0(param_1,iVar4,*(undefined4 *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(param_2 + 0x28),param_2 + 0x48,(int *)(param_2 + 0x4c),
                    param_2 + 0x50);
      iVar2 = *(int *)(param_2 + 0x4c);
      if (iVar2 == -1) goto LAB_82a3535c;
      *(int *)(param_2 + 0x10) = iVar2;
      uVar12 = uVar10;
    }
    uVar14 = (ulonglong)*(uint *)(param_2 + 0x58);
    uVar10 = uVar12;
    if (uVar14 != 0) {
      iVar2 = *(int *)(param_2 + 0x48);
      uVar19 = (ulonglong)*(uint *)(param_2 + 0x18);
      iVar16 = 0;
      uVar18 = (ulonglong)*(uint *)(param_2 + 0x54);
      iVar15 = 0;
      auStack_e0[0] = 0xffffffff;
      if ((code *)param_1[0xf] != (code *)0x0) {
        if ((*(int *)(param_2 + 0x38) != 0) || (uVar8 = 2, *(int *)(param_2 + 0x3c) == 0)) {
          uVar8 = 0;
        }
        bVar9 = *(int *)(param_2 + 8) != 0;
        if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
          bVar9 = bVar9 | 2;
        }
        iVar5 = (*(code *)param_1[0xf])
                          (0xffffffff820893a4,*(undefined4 *)(param_2 + 4),uVar8,0,uVar14,
                           param_2 + 0x20,bVar9,&uStack_e8);
      }
      if ((iVar4 == 0) &&
         (iVar4 = fn_82A37C50(param_1 + 0x23,*(undefined4 *)(param_2 + 0xc),&uStack_f0),
         iVar4 == 0)) {
        uVar20 = 0xffffffffffffffff;
      }
      else {
        uVar20 = (ulonglong)(uint)(0x8000 << (*(uint *)(iVar4 + 0xc) >> 4 & 3));
        uVar13 = 1 << (*(uint *)(iVar4 + 0xc) & 0xf) + 0xf;
      }
      if (((uint)param_1[0x69] < uVar13) || ((ulonglong)(uint)param_1[100] < (uVar20 & 0xffffffff)))
      {
        uVar10 = 0xffffffffc000000d;
      }
      else {
        if (uVar13 != param_1[0x5d]) {
          iStack_b0 = param_1[0x68];
          iStack_a8 = param_1[0x6a];
          uStack_ac = uVar13;
          fn_82A1BC70(param_1[0x5a]);
          iVar7 = fn_82A1BC40(1,&iStack_b0,0xffffffff80000000,param_1[0x5b],param_1[0x5c]);
          param_1[0x5a] = iVar7;
          param_1[0x5d] = uVar13;
        }
        uVar13 = *(uint *)(param_2 + 0x10);
        uStack_d0 = *(undefined4 *)(param_2 + 0xc);
        uStack_c8 = *(undefined4 *)(param_2 + 0x14);
        uStack_f0 = -(uint)(uVar13 == 0) & uStack_f0;
        uVar21 = *(uint *)(iVar4 + 0xc);
        uVar17 = uVar20;
        uStack_cc = uVar13;
        uStack_c0 = uStack_d0;
        uStack_bc = uVar13;
        uStack_b8 = uStack_c8;
        if (uVar13 <= *(uint *)(param_2 + 0x50)) {
          do {
            uStack_cc = uVar13;
            if (uVar13 < *(uint *)(param_2 + 0x50)) {
              uStack_bc = uVar13 + 1;
            }
            else {
              fn_82A34938(param_1,&uStack_d0,&uStack_c0,auStack_e0);
              uVar17 = (ulonglong)(uint)param_1[100];
              iVar16 = param_1[0xf];
              iVar15 = param_1[0x10];
            }
            iVar7 = fn_82A37298(param_1 + 0x43,&uStack_d0,uVar20,&uStack_c0,uVar17,iVar16,iVar15
                                    ,auStack_e0[0]);
            uVar10 = (ulonglong)*(uint *)(iVar7 + 0x10);
            if (*(uint *)(iVar7 + 0x10) != 0) break;
            uVar10 = uVar14 - uStack_ec;
            uStack_e4 = (uint)uVar10;
            if (iVar2 == 0) {
              uVar11 = uVar20 - uVar18;
              if ((uVar11 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
                uStack_e4 = (uint)uVar11;
                uVar10 = uVar11;
              }
              fn_82F68CC0(uVar19,*(uint *)(iVar7 + 8) + uVar18,uVar10);
            }
            else {
              uVar10 = (longlong)*(int *)(&lbl_820893C4 + (uVar21 >> 0x16 & 3) * 4) *
                       (longlong)(int)uStack_cc;
              uVar12 = uVar10 & 0x1f;
              piVar3 = (int *)(((uint)((uVar10 & 0xffffffff) >> 3) & 0x1ffffffc) + iVar4 + 0x10);
              uVar10 = 0x20 - uVar12;
              iVar7 = fn_82A1BC38(param_1[0x5a],uVar19,&uStack_e4,
                                      (ulonglong)*(uint *)(iVar7 + 8) + (ulonglong)uStack_f0,
                                      (ulonglong)*(uint *)(iVar7 + 0xc) - (ulonglong)uStack_f0,
                                      ((uint)piVar3[1] >> ((uint)uVar10 & 0x3f) &
                                       (int)((uVar10 & 0xffffffff) >> 5) - 1U |
                                      *piVar3 << (int)uVar12) >>
                                      (0x20U - *(int *)(&lbl_820893C4 + (uVar21 >> 0x16 & 3) * 4) &
                                      0x3f),uVar18);
              if (iVar7 < 0) {
                uVar10 = 0xffffffffc0000102;
                break;
              }
              uVar12 = (ulonglong)uStack_d8;
            }
            uVar18 = 0;
            uVar19 = uStack_e4 + uVar19;
            uVar13 = uStack_cc + 1;
            uStack_ec = uStack_e4 + uStack_ec;
            uStack_f0 = 0;
            uVar1 = uStack_cc + 1;
            uVar10 = uVar12;
            uStack_cc = uVar13;
          } while (uVar1 <= *(uint *)(param_2 + 0x50));
        }
        if (uStack_cc < *(uint *)(param_2 + 0x50)) {
          iStack_b0 = 0;
          fn_82A37298(param_1 + 0x43,&uStack_c0,uVar17,&iStack_b0,0,iVar16,iVar15,0);
        }
      }
      if (((code *)param_1[0x10] != (code *)0x0) && (-1 < iVar5)) {
        (*(code *)param_1[0x10])(uVar10,uStack_e8);
      }
      uVar21 = uStack_ec;
      if ((int)uVar10 != 0) goto LAB_82a35364;
    }
    if ((*(uint *)(param_2 + 0x28) <= *(uint *)(param_2 + 0x58)) || (*(uint *)(param_2 + 0x28) == 0)
       ) goto LAB_82a35364;
  }
LAB_82a3535c:
  uVar10 = 0xffffffffc0000011;
LAB_82a35364:
  uVar13 = (uint)uVar10;
  if (*(uint **)(param_2 + 0x2c) != (uint *)0x0) {
    **(uint **)(param_2 + 0x2c) = uVar21;
  }
  if (*(uint **)(param_2 + 0x44) != (uint *)0x0) {
    **(uint **)(param_2 + 0x44) = uVar13;
  }
  if (uVar13 == 0x103) {
    uVar13 = 0xc0000225;
  }
  if (*(int *)(param_2 + 0x38) == 0) {
    if (*(int *)(param_2 + 0x3c) != 0) {
      fn_83142F0C(*(undefined4 *)(param_2 + 0x18));
    }
    **(uint **)(param_2 + 0x1c) = uVar13;
    *(uint *)(*(int *)(param_2 + 0x1c) + 4) = uVar21;
    if (*(int *)(param_2 + 0x30) != 0) {
      NtSetEvent(*(int *)(param_2 + 0x30),0);
    }
  }
  else {
    if ((int)uVar13 < 0) {
      **(uint **)(param_2 + 0x1c) = uVar13;
    }
    else {
      **(uint **)(param_2 + 0x1c) = uVar21;
    }
    *(undefined4 *)(*(int *)(param_2 + 0x1c) + 4) = *(undefined4 *)(param_2 + 0x38);
    fn_83142B7C(*(undefined4 *)(param_2 + 0x3c),0xffffffff82a33cb8,0xffffffff82a33c50,
                    *(undefined4 *)(param_2 + 0x1c),0);
    (**(code **)(*param_1 + 4))(*(undefined4 *)(param_2 + 0x3c));
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    NtSetEvent(*(int *)(param_2 + 0x34),0);
  }
  return;
}

