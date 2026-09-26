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
extern unsigned int *auStack_140;
extern unsigned int *auStack_240;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_36c;
extern unsigned int *auStack_3bc;
extern unsigned int *auStack_3cc;
extern int fn_82631D78();
extern int fn_82631E78();
extern int fn_826344A8();
extern int fn_82634898();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_144;
extern unsigned int iStack_244;
extern unsigned int uStack_370;
extern unsigned int uStack_3c0;
extern unsigned int uStack_3d0;


int fn_82632DE0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 uVar7;
  uint uVar6;
  undefined2 uVar9;
  uint uVar8;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  longlong lVar20;
  uint uStack_3d0;
  uint auStack_3cc [3];
  uint uStack_3c0;
  uint auStack_3bc [19];
  uint uStack_370;
  uint auStack_36c [47];
  undefined1 auStack_2b0 [108];
  int iStack_244;
  uint auStack_240 [63];
  int iStack_144;
  uint auStack_140 [80];
  
  puVar11 = (uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x1c) == 0) {
    fn_826344A8(param_1,0,param_2);
    if ((*(uint *)(*param_1 + 0x4db4) >> 2 & 1) == 0) {
      uVar15 = (ulonglong)(uint)param_1[0x4f] + (ulonglong)(uint)param_1[0x4d] +
               (ulonglong)(uint)param_1[0x4a] + (ulonglong)(uint)param_1[0x47] + 9;
    }
    else {
      uVar15 = (ulonglong)(uint)param_1[0x44] + 8;
    }
    fn_82631E78(puVar11,0,(uVar15 & 0x3fffffff) << 2);
    goto LAB_82633764;
  }
  if ((*(uint *)(*param_1 + 0x4db4) >> 2 & 1) == 0) {
    iVar4 = *(int *)(param_2 + 0x18);
    *(int *)(param_2 + 0x18) = iVar4 + 0x24;
    if (*(uint *)(param_2 + 0x20) < iVar4 + 0x24U) {
      *(int *)(param_2 + 0x20) = iVar4 + 0x24;
    }
    uVar19 = -(uint)(*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x1c)) & *puVar11 + iVar4;
    fn_826344A8(param_1,uVar19,param_2);
    *(int *)(uVar19 + 0x18) = param_1[0x47];
    *(int *)(uVar19 + 0x1c) = param_1[0x4a];
    *(int *)(uVar19 + 0x20) = param_1[0x4f];
    uVar19 = *(uint *)(param_2 + 0x18);
    uVar15 = (ulonglong)uVar19 + ((ulonglong)(uint)param_1[0x47] & 0x3fffffff) * 4;
    uVar18 = (undefined4)uVar15;
    *(undefined4 *)(param_2 + 0x18) = uVar18;
    if ((ulonglong)*(uint *)(param_2 + 0x20) < (uVar15 & 0xffffffff)) {
      *(undefined4 *)(param_2 + 0x20) = uVar18;
    }
    fn_82F68CC0(-(ulonglong)(*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x1c)) &
                 (ulonglong)*puVar11 + (ulonglong)uVar19,param_1[0x46]);
    iVar4 = *(int *)(param_2 + 0x18);
    uVar19 = param_1[0x4a] * 4 + iVar4;
    *(uint *)(param_2 + 0x18) = uVar19;
    if (*(uint *)(param_2 + 0x20) < uVar19) {
      *(uint *)(param_2 + 0x20) = uVar19;
    }
    puVar14 = (uint *)param_1[0x49];
    iVar2 = param_1[0x41];
    iVar3 = param_1[0x40];
    if (puVar14 < puVar14 + param_1[0x4a]) {
      puVar12 = (uint *)((-(uint)(*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x1c)) &
                         *puVar11 + iVar4) - 4);
      do {
        uVar19 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar19 & 0xfffff000 | uVar19 + (iVar2 - iVar3) / 0xc & 0xfff;
      } while (puVar14 < (uint *)(param_1[0x4a] * 4 + param_1[0x49]));
    }
    uStack_3c0 = 0;
    puVar14 = (uint *)param_1[0x4c];
    puVar12 = puVar14 + param_1[0x4d];
    for (; puVar14 < puVar12; puVar14 = puVar14 + 1) {
      uVar19 = *puVar14;
      auStack_3bc[uStack_3c0] =
           ((uVar19 << 0xc | uVar19 & 0xfff) & 0xfff00) << 0xc | uVar19 & 0xf000;
      uStack_3c0 = uStack_3c0 + 1;
    }
    fn_82631D78(&uStack_3c0,*(uint *)(*param_1 + 0x4db4) >> 3 & 1);
    iVar4 = *(int *)(param_2 + 0x18);
    uVar19 = param_1[0x4d] * 4 + iVar4;
    *(uint *)(param_2 + 0x18) = uVar19;
    if (*(uint *)(param_2 + 0x20) < uVar19) {
      *(uint *)(param_2 + 0x20) = uVar19;
    }
    uVar19 = 0;
    puVar14 = (uint *)(*(uint *)(param_2 + 0x1c) - *(uint *)(param_2 + 0x18));
    if (param_1[0x4d] != 0) {
      puVar12 = &uStack_3c0;
      puVar14 = (uint *)((-(uint)(*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x1c)) &
                         *puVar11 + iVar4) - 4);
      do {
        puVar12 = puVar12 + 1;
        uVar6 = *puVar12;
        uVar19 = uVar19 + 1;
        puVar14 = puVar14 + 1;
        *puVar14 = uVar6 >> 0x18 | uVar6 >> 8 & 0xf00 | uVar6 & 0xf000;
      } while (uVar19 < (uint)param_1[0x4d]);
    }
    piVar13 = &iStack_144;
    iVar4 = 0;
    lVar20 = 0x40;
    do {
      piVar13 = piVar13 + 1;
      *piVar13 = iVar4;
      iVar4 = iVar4 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    uVar15 = (ulonglong)uStack_3c0;
    if (uVar15 != 0) {
      puVar11 = &uStack_3c0;
      do {
        puVar11 = puVar11 + 1;
        puVar14 = (uint *)(*puVar11 >> 0x12 & 0x3c);
        *(uint *)((int)puVar14 + (int)auStack_140) = *puVar11 >> 0x10 & 0xf;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    fn_82634898(param_1,0,1,0xffffffff82633d40,auStack_140,puVar14);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_2b0,0,0x68);
  }
  uStack_370 = 0;
  puVar14 = (uint *)param_1[0x43];
  iVar4 = 0;
  puVar12 = puVar14 + param_1[0x44];
  for (; puVar14 < puVar12; puVar14 = puVar14 + 1) {
    uVar19 = *puVar14;
    uVar6 = uVar19 >> 0xf & 1;
    iVar4 = uVar6 + iVar4;
    auStack_36c[uStack_370] =
         (((uint)*(byte *)puVar14 << 0xd | uVar6) << 1 | uVar19 >> 0xe & 1) << 10 |
         uVar19 >> 4 & 0xf000 | uVar19 & 0xf00000;
    uStack_370 = uStack_370 + 1;
  }
  if (iVar4 == param_1[0x44]) {
    iVar4 = 0;
LAB_82632f18:
    param_1[0x54] = iVar4;
  }
  else {
    if (iVar4 != 0) {
      iVar4 = 2;
      goto LAB_82632f18;
    }
    param_1[0x54] = 1;
  }
  iVar4 = *(int *)(param_2 + 0x18);
  uVar19 = iVar4 + 0x20;
  *(uint *)(param_2 + 0x18) = uVar19;
  if (*(uint *)(param_2 + 0x20) < iVar4 + 0x20U) {
    *(uint *)(param_2 + 0x20) = uVar19;
  }
  uVar19 = -(uint)(uVar19 <= *(uint *)(param_2 + 0x1c)) & *puVar11 + iVar4;
  fn_826344A8(param_1,uVar19,param_2);
  iVar4 = fn_82631D78(&uStack_370,*(uint *)(*param_1 + 0x4db4) >> 3 & 1);
  if (iVar4 == 0) {
    param_1[0x14] = -0x7789f47f;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x18);
    uVar6 = param_1[0x44] * 4 + iVar4;
    *(uint *)(param_2 + 0x18) = uVar6;
    if (*(uint *)(param_2 + 0x20) < uVar6) {
      *(uint *)(param_2 + 0x20) = uVar6;
    }
    uVar15 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar6 = 0;
    uVar7 = 0;
    auStack_3cc[0] = 0;
    uVar5 = 0;
    uVar10 = 0;
    puVar11 = (uint *)(-(uint)(*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x1c)) &
                      *puVar11 + iVar4);
    if (param_1[0x44] != 0) {
      puVar14 = auStack_36c;
      do {
        uVar1 = *puVar14;
        uVar16 = ((ulonglong)uVar1 & 0xf0000) >> 0x10;
        *puVar11 = uVar1 >> 0x18 | uVar1 >> 8 & 0xf00 | uVar1 & 0xf000;
        if (uVar5 < uVar16) {
          uVar5 = uVar16;
        }
        uVar17 = (uint)(((ulonglong)uVar1 & 0xf0000) >> 0x10);
        uVar15 = (ulonglong)auStack_3cc[0];
        if (auStack_3cc[0] < uVar16) {
          uVar15 = uVar16;
          auStack_3cc[0] = uVar17;
        }
        uVar10 = uVar10 + 1;
        uVar8 = (~uVar1 >> 0xb & 1) << uVar17 | uVar8;
        uVar9 = (undefined2)uVar8;
        uVar6 = (~uVar1 >> 10 & 1) << uVar17 | uVar6;
        uVar7 = (undefined2)uVar6;
        puVar14 = puVar14 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar10 < (uint)param_1[0x44]);
    }
    uVar5 = ((ulonglong)((uint)param_1[0x16] >> 0x13) & 1) +
            ((ulonglong)((uint)param_1[0x16] >> 0x12) & 1) + uVar5;
    if (0xf < uVar5) {
      uVar5 = 0xf;
    }
    if (uVar15 < uVar5) {
      auStack_3cc[0] = (uint)uVar5;
    }
    *(undefined2 *)(uVar19 + 0x18) = uVar9;
    piVar13 = &iStack_244;
    *(undefined2 *)(uVar19 + 0x1a) = uVar7;
    iVar4 = 0;
    lVar20 = 0x40;
    do {
      piVar13 = piVar13 + 1;
      *piVar13 = iVar4;
      iVar4 = iVar4 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    uVar15 = (ulonglong)uStack_370;
    if (uVar15 != 0) {
      puVar11 = &uStack_370;
      do {
        puVar11 = puVar11 + 1;
        *(uint *)((int)auStack_240 + (*puVar11 >> 0x12 & 0x3c)) = *puVar11 >> 0x10 & 0xf;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    fn_82634898(param_1,0,1,0xffffffff82633be8,auStack_240);
    piVar13 = *(int **)(*param_1 + 0x4db8);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x10))(piVar13,auStack_240);
    }
    uVar6 = (uint)param_1[0x16] >> 8 & 0x3f;
    if (uVar6 == 0) {
      fn_82634898(param_1,0,1,0xffffffff82633d70,auStack_3cc);
      uVar6 = auStack_3cc[0];
    }
    auStack_3cc[0] = uVar6;
    *(uint *)(uVar19 + 8) = (auStack_3cc[0] & 0x3f) << 8 | *(uint *)(uVar19 + 8) & 0xffffc0ff;
    uStack_3d0 = 0;
    fn_82634898(param_1,0,1,0xffffffff826341a0,&uStack_3d0);
    iVar4 = 1;
    *(uint *)(uVar19 + 0x1c) = uStack_3d0;
    if ((uStack_3d0 & 8) == 0) {
      if ((uStack_3d0 & 4) == 0) {
        if ((uStack_3d0 & 2) != 0) {
          iVar4 = 2;
        }
      }
      else {
        iVar4 = 3;
      }
    }
    else {
      iVar4 = 4;
    }
    uVar6 = *(uint *)(uVar19 + 8);
    *(uint *)(uVar19 + 8) = iVar4 << 0x1c | uVar6 & 0x8fffffff;
    *(uint *)(uVar19 + 8) = (uStack_3d0 & 0x10) << 0x17 | iVar4 << 0x1c | uVar6 & 0x87ffffff;
    if (*(int *)(*param_1 + 0x4db8) != 0) {
      for (puVar11 = (uint *)param_1[0x43]; puVar11 < (uint *)(param_1[0x44] * 4 + param_1[0x43]);
          puVar11 = puVar11 + 1) {
        (**(code **)(**(int **)(*param_1 + 0x4db8) + 0x18))
                  (*(int **)(*param_1 + 0x4db8),*puVar11 >> 0x14 & 0xf,*(undefined1 *)puVar11,
                   *puVar11 >> 0x10 & 0xf);
      }
    }
    fn_82634898(param_1,1,0,0xffffffff82633f30,param_1[0x40]);
  }
LAB_82633764:
  iVar4 = param_1[0x14];
  if ((-1 < iVar4) && (iVar4 = *(int *)(param_2 + 0x10), -1 < iVar4)) {
    iVar4 = *(int *)(param_2 + 0x24);
  }
  return iVar4;
}

