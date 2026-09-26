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
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern int fn_82BA02A8();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CFBE10();
extern int fn_82CFC050();
extern int fn_82E0A398();
extern int fn_82E0ADB8();
extern int fn_82E0E140();
extern int fn_82E0FCA0();
extern int fn_82E129F0();
extern int fn_82E16018();
extern int fn_82E17540();
extern int fn_82F63EC8();
extern unsigned int iStack_100;
extern unsigned int iStack_a4;
extern unsigned int iStack_f0;
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_832654F0;
extern unsigned int uRam8318718c;
extern unsigned int uRam8323fdb8;
extern unsigned int uRam8323fdbc;
extern unsigned int uRam8323fdc0;
extern unsigned int uRam8323fdc4;
extern unsigned int uRam8323fde0;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


undefined8 fn_82E0D0A8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar21;
  ulonglong uVar20;
  int *piVar22;
  int iStack_100;
  uint uStack_fc;
  uint uStack_f8;
  int iStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 auStack_d0 [8];
  undefined **appuStack_b0 [3];
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined1 auStack_90 [144];
  
  iVar6 = 0;
  if (0 < *(int *)(param_1[7] + 0x14)) {
    iVar8 = 0;
    iVar7 = 0;
    do {
      if (*(int *)(param_1[9] + iVar8) != 0) {
        iVar17 = 0;
        iVar9 = *(int *)(param_1[9] + iVar8);
        iVar18 = param_1[8] + iVar7;
        uVar11 = *(int *)(iVar18 + 0x20) - *(int *)(iVar18 + 0x1c);
        if (0 < (longlong)
                ((longlong)((int)uVar11 >> 2) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 3) != 0)))
        {
          puVar21 = (undefined4 *)(*(int *)(iVar18 + 0x1c) + iVar9 + 8);
          do {
            iVar19 = puVar21[-2];
            if (iVar19 != -1) {
              uVar5 = (**(code **)(*param_1 + 0x3c))(param_1,puVar21[-1],*puVar21);
              *(undefined4 *)(iVar19 + iVar9) = uVar5;
            }
            iVar17 = iVar17 + 3;
            puVar21 = puVar21 + 3;
            uVar11 = *(int *)(iVar18 + 0x20) - *(int *)(iVar18 + 0x1c);
          } while (iVar17 < (int)(((int)uVar11 >> 2) + (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0))
                  );
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x30;
      iVar8 = iVar8 + 4;
    } while (iVar6 < *(int *)(param_1[7] + 0x14));
  }
  if (((*(int *)(param_1[7] + 0xc) < 5) && (param_1[0x1e] == 0)) && (param_1[0x1f] == 0)) {
    iVar6 = fn_82CE5410();
    iVar6 = (**(code **)(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0x20);
    *(undefined2 *)(iVar6 + 4) = 0x20;
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = fn_82E0A398();
    iVar6 = fn_82E17540(iVar6,uVar4);
    if (iVar6 != 0) {
      fn_82CE4040();
    }
    if (param_1[0x1f] != 0) {
      fn_82CE4118();
    }
    param_1[0x1f] = iVar6;
    fn_82CE4118(iVar6);
    iStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0x80000000;
    fn_82E0ADB8(param_1,&iStack_f0);
    uVar20 = (ulonglong)uStack_ec;
    if (0 < (int)uStack_ec) {
      iStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = 0x80000000;
      iVar6 = fn_82CE5410();
      uVar11 = uStack_fc;
      uVar14 = (ulonglong)uStack_fc;
      lVar12 = uVar14 + uVar20;
      iVar7 = (int)lVar12;
      if ((int)(uStack_f8 & 0x3fffffff) < iVar7) {
        lVar15 = ((ulonglong)uStack_f8 & 0x3fffffff) << 1;
        if ((int)lVar15 <= iVar7) {
          lVar15 = lVar12;
        }
        fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),&iStack_100,lVar15,8);
        uVar14 = (ulonglong)uStack_fc;
      }
      lVar12 = uVar14 + uVar20;
      uStack_fc = (uint)lVar12;
      iVar6 = 0;
      if (lVar12 != 0) {
        iVar7 = 0;
        puVar21 = (undefined4 *)(uVar11 * 8 + iStack_100 + -4);
        do {
          iVar6 = iVar6 + 1;
          puVar3 = (undefined4 *)(iVar7 + iStack_f0);
          iVar7 = iVar7 + 0xc;
          puVar21[1] = *puVar3;
          puVar21 = puVar21 + 2;
          *puVar21 = &lbl_832654F0;
        } while (iVar6 < (int)uStack_fc);
      }
      fn_82E0E140(appuStack_b0,param_1[6]);
      if ((uRam8323fde0 & 1) == 0) {
        uRam8323fde0 = uRam8323fde0 | 1;
        fn_82E16018(0xffffffff8323fdc8,0xffffffff831871b4,0xffffffffffffffff,0xffffffff8214a8c8);
        fn_82F63EC8(0xffffffff83141b80);
      }
      auStack_d0[0] = 0;
      auStack_d0[1] = 0;
      uVar4 = 0xffffffff8318718c;
      auStack_d0[2] = 0xef90576;
      auStack_d0[3] = 0xef90576;
      auStack_d0[4] = 0xef90576;
      if (*(uint *)(param_1[7] + 0xc) < 5) {
        uRam8318718c = auStack_d0[*(uint *)(param_1[7] + 0xc)];
      }
      uVar11 = uRam8323fde0 & 2;
      uVar13 = uRam8323fde0;
      if ((uRam8323fde0 & 2) == 0) {
        uRam8323fde0 = uRam8323fde0 | 2;
        uRam8323fdbc = 0x8318718c;
        uVar13 = 0;
        uRam8323fdc0 = 0x8323fdc8;
        uVar4 = 0;
        uRam8323fdb8 = 0;
        uRam8323fdc4 = 0;
      }
      fn_82E0FCA0(&iStack_100,appuStack_b0,0xffffffff8323fdb8,0xffffffff8323fdc8,0xef90576,
                        uVar11,uVar4,uVar13);
      iVar6 = *(int *)(param_1[7] + 0x14);
      iVar7 = fn_82CE5410();
      iVar6 = iVar6 * 0x30;
      uVar4 = fn_82CE52E0(*(undefined4 *)(iVar7 + 0x10),iVar6 + 0x30);
      iVar7 = param_1[6];
      iVar8 = fn_82CE5410();
      if (*(uint *)(iVar7 + 0x38) == (*(uint *)(iVar7 + 0x3c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),(int *)(iVar7 + 0x34),4);
      }
      *(int *)(*(int *)(iVar7 + 0x38) * 4 + *(int *)(iVar7 + 0x34)) = (int)uVar4;
      *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + 1;
      fn_82CFC050(uVar4,param_1[8],iVar6);
      param_1[8] = (int)uVar4;
      *(int *)(param_1[7] + 0x14) = *(int *)(param_1[7] + 0x14) + 1;
      iVar6 = iVar6 + param_1[8];
      fn_82CFBE10(iVar6,0xffffffff8214a894);
      *(undefined1 *)(iVar6 + 0x13) = 0;
      piVar16 = param_1 + 9;
      *(undefined4 *)(iVar6 + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x18) = uStack_a0;
      *(undefined4 *)(iVar6 + 0x1c) = uStack_a0;
      *(undefined4 *)(iVar6 + 0x20) = uStack_a0;
      *(undefined4 *)(iVar6 + 0x24) = uStack_a0;
      *(undefined4 *)(iVar6 + 0x28) = uStack_a0;
      *(undefined4 *)(iVar6 + 0x2c) = uStack_a0;
      iVar6 = param_1[10];
      iVar7 = fn_82CE5410();
      if (param_1[10] == (param_1[0xb] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),piVar16,4);
      }
      *(int *)(param_1[10] * 4 + *piVar16) = iStack_a4;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0xffffffff;
      param_1[10] = param_1[10] + 1;
      iVar7 = fn_82CE5410();
      fn_82CEAB00(&uStack_e0,*(undefined4 *)(iVar7 + 0x10),0);
      lVar12 = 0;
      if (0 < (int)uStack_fc) {
        iVar7 = 0;
        iVar8 = 0;
        do {
          uVar5 = *(undefined4 *)(iVar8 + iStack_100);
          uVar2 = *(undefined4 *)(iVar7 + iStack_f0);
          iVar9 = fn_82CE5410();
          fn_82CEA160(&uStack_e0,*(undefined4 *)(iVar9 + 0x10),uVar2,lVar12);
          uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
          fn_82E129F0(uVar5,*(undefined4 *)(param_1[7] + 0xc),uVar4,param_1 + 2);
          (**(code **)(*(int *)param_1[0x1f] + 0x1c))((int *)param_1[0x1f],uVar5,0);
          lVar12 = lVar12 + 1;
          iVar8 = iVar8 + 8;
          iVar7 = iVar7 + 0xc;
        } while ((int)lVar12 < (int)uStack_fc);
      }
      iVar7 = 0;
      if (0 < *(int *)(param_1[7] + 0x14)) {
        iVar8 = 0;
        iVar9 = 0;
        do {
          iVar18 = 0;
          iVar19 = param_1[8] + iVar9;
          iVar17 = *(int *)(*piVar16 + iVar8);
          uVar11 = *(int *)(iVar19 + 0x20) - *(int *)(iVar19 + 0x1c);
          if (0 < (longlong)
                  ((longlong)((int)uVar11 >> 2) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 3) != 0))
             ) {
            piVar22 = (int *)(iVar17 + *(int *)(iVar19 + 0x1c) + 8);
            do {
              iVar1 = piVar22[-2];
              if (iVar1 != -1) {
                uVar4 = (**(code **)(*param_1 + 0x3c))(param_1,piVar22[-1],*piVar22);
                iVar10 = fn_82CEA280(&uStack_e0,uVar4,0xffffffffffffffff);
                if (iVar10 != -1) {
                  piVar22[-1] = iVar6;
                  *piVar22 = *(int *)(iStack_100 + iVar10 * 8) - iStack_a4;
                  *(undefined4 *)(iVar1 + iVar17) = *(undefined4 *)(iStack_100 + iVar10 * 8);
                }
              }
              iVar18 = iVar18 + 3;
              piVar22 = piVar22 + 3;
              uVar11 = *(int *)(iVar19 + 0x20) - *(int *)(iVar19 + 0x1c);
            } while (iVar18 < (int)(((int)uVar11 >> 2) +
                                   (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0)));
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x30;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)(param_1[7] + 0x14));
      }
      iVar6 = fn_82CE5410();
      fn_82CEA4B8(&uStack_e0,*(undefined4 *)(iVar6 + 0x10));
      fn_82BA02A8(&uStack_e0);
      iVar6 = fn_82CE5410();
      fn_82CEA4B8(auStack_90,*(undefined4 *)(iVar6 + 0x10));
      fn_82BA02A8(auStack_90);
      iVar6 = fn_82CE5410();
      uStack_98 = 0;
      if ((uStack_94 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),uStack_9c,uStack_94 & 0x3fffffff,8);
      }
      uStack_9c = 0;
      uStack_94 = 0x80000000;
      appuStack_b0[0] = &lbl_8212FC60;
      iVar6 = fn_82CE5410();
      uStack_fc = 0;
      if ((uStack_f8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),iStack_100,uStack_f8 & 0x3fffffff,8);
      }
      iStack_100 = 0;
      uStack_f8 = 0x80000000;
    }
    iVar6 = fn_82CE5410();
    uStack_ec = 0;
    if ((uStack_e8 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                (*(int **)(iVar6 + 0x10),iStack_f0,uStack_e8 & 0x3fffffff,0xc);
    }
  }
  return 0;
}

