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
extern unsigned int *auStack_88;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AD2128();
extern int fn_82B24700();
extern int fn_82B45740();
extern int fn_82B477E0();
extern int fn_82B4A030();
extern int fn_82B4A218();
extern int fn_82B4B1D8();
extern int fn_82B4BAA8();
extern int fn_82B4BC48();
extern int fn_82B50498();
extern int fn_82B50558();
extern int fn_82B50698();
extern int fn_82B841E8();
extern int fn_82B860F0();
extern int fn_82B8A350();
extern int fn_82B8AB60();
extern int fn_82B8F328();
extern unsigned int iStack_90;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;


void fn_82B50FB8(int param_1,undefined8 param_2,uint param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar6;
  int iVar7;
  undefined8 uVar4;
  char cVar15;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined8 uVar5;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar24;
  ulonglong uVar23;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 *puStack_94;
  int iStack_90;
  undefined4 *puStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [128];
  
  if (((*(uint **)(param_1 + 0x248))[1] & 1) == 0) {
    iVar6 = (**(uint **)(param_1 + 0x248) & 0xfffffffe) - 4;
  }
  else {
    iVar6 = 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(iVar6 + 8) * 0x20 + iVar6 + -4);
  *(uint *)(*(int *)(param_1 + 0x234) + 0x4c) =
       *(uint *)(*(int *)(param_1 + 0x234) + 0x4c) | 0x10000000;
  *(uint *)(*(int *)(param_1 + 0x234) + 0x30) =
       *(uint *)(*(int *)(param_1 + 0x234) + 0x30) | 0x10000000;
  iVar6 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                            (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x75,0,0);
  *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x2000000;
  iVar7 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                            (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x75,0,0);
  *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 0x2000000;
  fn_82AD1A40(iVar7,iVar6,param_1);
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x1000000;
  uVar24 = param_3;
  if (param_4 == '\0') {
    iVar6 = *(int *)(param_3 + 0x24);
    if ((iVar6 == 0) || (*(int *)(iVar6 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar24 = *(uint *)(iVar6 + 8);
    if ((uVar24 == 0) || (*(int *)(uVar24 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
  }
  lVar22 = 0;
  fn_82B50498(&iStack_98,uVar24,param_1);
  if (param_4 == '\0') {
    fn_82B50558(&iStack_98);
  }
  while (iVar6 = fn_82B50558(&iStack_98), iVar6 != 0) {
    if (*(int *)(iVar6 + 4) == 1) {
      if (*(int *)(iVar6 + 0xc) == 0) {
        cVar15 = thunk_FUN_82b457d4(param_1,*(undefined4 *)(iVar6 + 8),&iStack_ac,&iStack_b0);
      }
      else {
        cVar15 = '\0';
      }
    }
    else {
      cVar15 = fn_82B45740(param_1,iVar6,&iStack_ac,&iStack_b0);
    }
    if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    lVar22 = (longlong)iStack_ac * (longlong)iStack_b0 + lVar22;
  }
  puVar9 = *(uint **)(param_1 + 0x38);
  if (((puVar9 == (uint *)0x0) || ((*puVar9 & 0x800) == 0)) &&
     ((param_4 == '\0' || ((puVar9 != (uint *)0x0 && ((*puVar9 & 0x1000) != 0)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar4 = fn_82B477E0(param_1);
    fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar4,param_1);
    uVar21 = 0;
    lVar18 = 0;
    iVar6 = 0;
    uVar23 = 0;
    uVar19 = 0;
    fn_82B50498(&iStack_90,uVar24,param_1);
    if (param_4 == '\0') {
      fn_82B50558(&iStack_90);
    }
    fn_82B24700(auStack_80,param_2);
    fn_82B4B1D8(auStack_80,lVar22);
    while (iVar7 = fn_82B50558(&iStack_90), iVar7 != 0) {
      if (*(int *)(iVar7 + 4) == 1) {
        if (*(int *)(iVar7 + 0xc) == 0) {
          cVar15 = thunk_FUN_82b457d4(param_1,*(undefined4 *)(iVar7 + 8),&iStack_a4,&iStack_a8);
        }
        else {
          cVar15 = '\0';
        }
      }
      else {
        cVar15 = fn_82B45740(param_1,iVar7,&iStack_a4,&iStack_a8);
      }
      if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      for (uVar17 = (longlong)iStack_a4 * (longlong)iStack_a8; (uVar17 & 0xffffffff) != 0;
          uVar17 = uVar17 - uVar16) {
        uVar20 = uVar19;
        iVar7 = iVar6;
        if ((uVar21 & 0xffffffff) == 0) {
LAB_82b51340:
          iVar8 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                    (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x5e,0,0);
          iVar6 = fn_82ABDD90(param_1,0x5e,0,0);
          puVar9 = (uint *)(iVar6 + iVar8 + -0xc);
          puVar9[1] = param_3;
          *puVar9 = *puVar9 & 0xfffffff0 | 10;
          puVar9[2] = *(uint *)(param_1 + 0x230);
          iVar6 = *(int *)(param_1 + 0x234);
          iVar10 = *(int *)(iVar6 + 100);
          if (iVar10 != 0) {
            fn_82AD2128(iVar8,2,iVar10,param_1);
          }
          *(int *)(iVar6 + 100) = iVar8;
          *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x2000000;
          uVar21 = 0x14;
          uVar23 = 0x21;
          iVar6 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                    (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,0x75,0,0);
          *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x2000000;
          if (iVar7 == 0) {
            fn_82B8A350(auStack_88,param_1,*(undefined4 *)(param_1 + 0x230),0);
            puVar9 = (uint *)fn_82B4BAA8(param_1,auStack_88);
            uVar19 = (ulonglong)*puVar9 & 0xfffffffff1ffffff;
            uVar21 = uVar19 >> 5 & 3;
            *puVar9 = (uint)((((uVar19 >> 3 & 0xc | uVar21) << 2 | uVar21) << 2 | uVar21) << 5) |
                      *puVar9 & 0xf1ffe01f | 0x8000000;
            iVar10 = fn_82B860F0(param_1,puVar9,0x21f,iVar6,1);
            iVar7 = *(int *)(param_1 + 0x234);
            iVar10 = *(int *)(iVar10 + 0xc);
            iVar8 = *(int *)(iVar7 + 100);
            if (iVar8 != 0) {
              fn_82AD2128(iVar10,2,iVar8,param_1);
            }
            *(int *)(iVar7 + 100) = iVar10;
            lVar18 = lVar18 + 1;
            uVar21 = 0x10;
            *(uint *)(iVar10 + 8) = *(uint *)(iVar10 + 8) | 0x2000000;
            uVar23 = 0x22;
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x200000;
          }
        }
        uVar16 = uVar17;
        if ((uVar21 & 0xffffffff) <= (uVar17 & 0xffffffff)) {
          uVar16 = uVar21;
        }
        uVar19 = uVar16 + uVar20;
        if (3 < (uVar19 & 0xffffffff)) {
          uVar5 = fn_82B4BC48(param_1,auStack_80,4,0,1);
          iVar10 = fn_82B860F0(param_1,uVar5,(uVar23 & 0xfffffff) << 4 | 0xf,iVar6,1);
          iVar7 = *(int *)(param_1 + 0x234);
          iVar10 = *(int *)(iVar10 + 0xc);
          iVar8 = *(int *)(iVar7 + 100);
          if (iVar8 != 0) {
            fn_82AD2128(iVar10,2,iVar8,param_1);
          }
          *(int *)(iVar7 + 100) = iVar10;
          uVar16 = 4 - uVar20;
          lVar18 = lVar18 + 1;
          uVar19 = 0;
          uVar23 = uVar23 + 1;
          uVar21 = uVar21 - 4;
          *(uint *)(iVar10 + 8) = *(uint *)(iVar10 + 8) | 0x2000000;
        }
      }
    }
    if ((uVar19 & 0xffffffff) != 0) {
      uVar5 = fn_82B4BC48(param_1,auStack_80,uVar19,0,1);
      iVar10 = fn_82B860F0(param_1,uVar5,
                                 (uVar23 & 0xfffffff) << 4 |
                                 (ulonglong)(uint)(1 << ((uint)uVar19 & 0x3f)) - 1 &
                                 0xffffffff0000000f,iVar6,1);
      iVar7 = *(int *)(param_1 + 0x234);
      iVar10 = *(int *)(iVar10 + 0xc);
      iVar8 = *(int *)(iVar7 + 100);
      if (iVar8 != 0) {
        fn_82AD2128(iVar10,2,iVar8,param_1);
      }
      *(int *)(iVar7 + 100) = iVar10;
      lVar18 = lVar18 + 1;
      *(uint *)(iVar10 + 8) = *(uint *)(iVar10 + 8) | 0x2000000;
    }
    if (iVar6 == 0) {
      uVar17 = 0;
      uVar20 = uVar19;
      iVar7 = iVar6;
      goto LAB_82b51340;
    }
    *(int *)(param_1 + 0x234) = (int)uVar4;
    puVar11 = (undefined8 *)fn_82B8A350(auStack_88,param_1,lVar18,0);
    puVar12 = (undefined8 *)fn_82B8AB60(auStack_80,param_1,*(undefined4 *)(param_1 + 0x264),0)
    ;
    uVar13 = fn_82B4A030(param_1,*puVar12,*puVar11);
    puVar14 = (undefined4 *)
              fn_82B4A218(*(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x264),
                                param_1);
    *puVar14 = uVar13;
    puVar14[1] = puVar14[1] & 0x10000 | 1;
    *puStack_8c = *(undefined4 *)(iStack_90 + 0x3d0);
    *(undefined4 **)(iStack_90 + 0x3d0) = puStack_8c;
  }
  else if ((puVar9 != (uint *)0x0) && ((*puVar9 & 0x1000) != 0)) {
    fn_82B50698(&iStack_98,uVar24);
    if (param_4 == '\0') {
      fn_82B50558(&iStack_98);
    }
    fn_82B24700(auStack_80,param_2);
    fn_82B4B1D8(auStack_80,lVar22);
    iVar10 = fn_82B50558(&iStack_98);
    iVar6 = iVar7;
    if (iVar10 != 0) {
      do {
        if (*(int *)(iVar10 + 4) == 1) {
          if (*(int *)(iVar10 + 0xc) == 0) {
            cVar15 = thunk_FUN_82b457d4(param_1,*(undefined4 *)(iVar10 + 8),&iStack_9c,&iStack_a0);
          }
          else {
            cVar15 = '\0';
          }
        }
        else {
          cVar15 = fn_82B45740(param_1,iVar10,&iStack_9c,&iStack_a0);
        }
        if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        uVar19 = (longlong)iStack_9c * (longlong)iStack_a0;
        if (uVar19 != 0) {
          iVar10 = fn_82ABDD90(param_1,0x75,0,0);
          iVar10 = iVar10 + -0x10;
          iVar8 = iVar6;
          do {
            uVar21 = 4;
            if ((uVar19 & 0xffffffff) < 5) {
              uVar21 = uVar19;
            }
            uVar4 = fn_82B4BC48(param_1,auStack_80,uVar21,0,1);
            iVar6 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                                      (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x75,0,0);
            iVar2 = iVar10 + iVar6;
            uVar24 = *(uint *)(iVar10 + iVar6);
            *(undefined4 *)(iVar2 + 4) = 3;
            *(uint *)(iVar10 + iVar6) = uVar24 | 7;
            uVar13 = *(undefined4 *)(param_1 + 0x230);
            *(uint *)(iVar2 + 0xc) = param_3;
            *(undefined4 *)(iVar2 + 8) = uVar13;
            fn_82AD1978(iVar6,uVar4);
            uVar19 = uVar19 - uVar21;
            fn_82AD1A40(iVar6,iVar8,param_1);
            *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x2000000;
            iVar8 = iVar6;
          } while ((uVar19 & 0xffffffff) != 0);
        }
        iVar10 = fn_82B50558(&iStack_98);
      } while (iVar10 != 0);
      if (iVar6 != iVar7) goto LAB_82b51810;
    }
    iVar7 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                              (ulonglong)*(uint *)(param_1 + 0x234) + 0x18,0x75,0,0);
    iVar10 = fn_82ABDD90(param_1,0x75,0,0);
    puVar9 = (uint *)(iVar10 + iVar7 + -0x10);
    puVar9[1] = 3;
    *puVar9 = *puVar9 | 7;
    puVar9[2] = *(uint *)(param_1 + 0x230);
    puVar9[3] = param_3;
    fn_82AD1A40(iVar7,iVar6,param_1);
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 0x2000000;
  }
LAB_82b51810:
  fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar1,param_1);
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x1c) = 1;
  }
  *puStack_94 = *(undefined4 *)(iStack_98 + 0x3d0);
  *(undefined4 **)(iStack_98 + 0x3d0) = puStack_94;
  return;
}

