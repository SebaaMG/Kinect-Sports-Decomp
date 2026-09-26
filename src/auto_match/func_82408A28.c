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
extern unsigned int *auStack_1030;
extern unsigned int *auStack_1830;
extern unsigned int *auStack_2030;
extern unsigned int *auStack_830;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822942C8();
extern int fn_82294320();
extern int fn_82299BF0();
extern int fn_8229A000();
extern int fn_8229D418();
extern int fn_8229F5A8();
extern int fn_8229F618();
extern int fn_822BE9A0();
extern int fn_822C72E0();
extern int fn_822C8C08();
extern int fn_82358FD8();
extern int fn_8240C558();
extern int fn_8240C6D8();
extern int fn_82508078();
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821939A4;
extern unsigned int lbl_82193CF0;
extern unsigned int lbl_821BA744;
extern unsigned int lbl_821BA74C;
extern unsigned int uStack_203c;
extern unsigned int uStack_205c;
extern unsigned int uStack_207c;
extern unsigned int uStack_209c;


void fn_82408A28(int param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 ***apppuStack_20b0 [5];
  uint uStack_209c;
  undefined4 ***apppuStack_2090 [5];
  uint uStack_207c;
  undefined4 ***apppuStack_2070 [5];
  uint uStack_205c;
  undefined4 ***apppuStack_2050 [5];
  uint uStack_203c;
  undefined1 auStack_2030 [2048];
  undefined1 auStack_1830 [2048];
  undefined1 auStack_1030 [2048];
  undefined1 auStack_830 [2096];
  
  if (param_2 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(*(int *)(iVar4 + 4) + 0xd4);
    if (*(int *)(iVar4 + 0xe0) + 1 == *(int *)(iVar4 + 0xe4)) {
      fn_822942C8(uVar2,0xb);
    }
    else {
      fn_82294320(uVar2);
    }
    *(undefined4 *)(param_1 + 0x54) = lbl_82193CF0;
    goto LAB_82409004;
  }
  if (param_2 == 1) {
    fn_822942C8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),9);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x44) = lbl_8218E1AC;
    piVar5 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x3ec) + 0xc))();
    (**(code **)(*piVar5 + 8))();
    (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    fn_822BE9A0();
    (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    fn_822BE9A0();
    fn_8240C558(*(undefined4 *)(param_1 + 0x10));
    fn_8229F5A8(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc)
                     );
    goto LAB_82409004;
  }
  if (param_2 < 3) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(iVar4 + 0x114) + 0xc4);
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
    fn_8229A000(iVar4 + 0x129c);
    *(undefined4 *)(iVar4 + 0x24cc) = 0xffffffff;
    fn_8229F618(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc)
                     );
    fn_82230110(apppuStack_2090,0xffffffff821b02dc);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    if (uStack_207c < 0x10) {
      apppuStack_2090[0] = apppuStack_2090;
    }
    fn_822C8C08(*(undefined4 *)(iVar4 + 0x114),apppuStack_2090[0]);
    fn_82230300(apppuStack_2090,1,0);
    fn_82230110(apppuStack_20b0,0xffffffff821b02dc);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    if (uStack_209c < 0x10) {
      apppuStack_20b0[0] = apppuStack_20b0;
    }
    fn_822C8C08(*(undefined4 *)(iVar4 + 0x114),apppuStack_20b0[0]);
    fn_82230300(apppuStack_20b0,1,0);
    fn_822942C8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),10);
  }
  else {
    if (param_2 != 3) goto LAB_82409004;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0xf0) = 0;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
    uVar2 = lbl_82192480;
    if (iVar4 == 0) {
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x114) + 0xc4);
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
    fn_8229A000(iVar3 + 0x129c);
    *(undefined4 *)(iVar3 + 0x24cc) = 0xffffffff;
    fn_8229F618(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4) + 0xc)
                     );
    if (iVar4 == 1) {
      fn_822942C8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),2);
LAB_82408cc4:
      if (((iVar4 != 3) && (iVar4 != 2)) && (iVar4 != 6)) {
LAB_82408cdc:
        fn_82230110(apppuStack_2050,0xffffffff821b02dc);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
        if (uStack_203c < 0x10) {
          apppuStack_2050[0] = apppuStack_2050;
        }
        fn_822C8C08(*(undefined4 *)(iVar4 + 0x114),apppuStack_2050[0]);
        fn_82230300(apppuStack_2050,1,0);
        fn_82230110(apppuStack_2070,0xffffffff821b02dc);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
        if (uStack_205c < 0x10) {
          apppuStack_2070[0] = apppuStack_2070;
        }
        fn_822C8C08(*(undefined4 *)(iVar4 + 0x114),apppuStack_2070[0]);
        fn_82230300(apppuStack_2070,1,0);
        goto LAB_82408f04;
      }
    }
    else {
      if (iVar4 == 2) {
        iVar4 = 1;
        if (*(int *)(*(int *)(param_1 + 0x10) + 0xec) != 0) {
          fn_82508078(**(undefined4 **)(param_1 + 0xc),lbl_821BA744,0);
          iVar4 = 4;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
        uVar9 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
        if (*(int *)(iVar3 + 0x24) == 0) {
          fn_82358FD8(*(undefined4 *)(uVar9 + 0x1c),auStack_830,0x400,
                            (&lbl_821939A4)[iVar4]);
          puVar7 = auStack_830;
LAB_82408c20:
          fn_82299BF0((ulonglong)uVar9 + 0x68,iVar3 + 0x30,puVar7);
          goto LAB_82408b18;
        }
        fn_82358FD8(*(undefined4 *)(uVar9 + 0x1c),auStack_1830,0x400,
                          (&lbl_821939A4)[iVar4]);
        puVar7 = auStack_1830;
      }
      else {
        if (iVar4 != 3) {
          if (iVar4 == 4) {
            fn_822942C8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),5);
            fn_82508078(**(undefined4 **)(param_1 + 0xc),lbl_821BA74C,0);
          }
          else {
            if (iVar4 != 5) {
              if (iVar4 != 6) goto LAB_82408cc4;
              fn_822942C8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),6);
              goto LAB_82408b18;
            }
            fn_822942C8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4),3);
          }
          goto LAB_82408cdc;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
        uVar9 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0xd4);
        if (*(int *)(iVar3 + 0x24) == 0) {
          fn_82358FD8(*(undefined4 *)(uVar9 + 0x1c),auStack_1030,0x400,
                            lbl_821939A4);
          puVar7 = auStack_1030;
          goto LAB_82408c20;
        }
        fn_82358FD8(*(undefined4 *)(uVar9 + 0x1c),auStack_2030,0x400,
                          lbl_821939A4);
        puVar7 = auStack_2030;
      }
      fn_8229D418(*(undefined4 *)(uVar9 + 0x14),iVar3 + 0x30,puVar7);
    }
LAB_82408b18:
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    uVar8 = 0xffffffff821acc44;
    pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 4);
    if (*(int *)(iVar4 + 0x7a0) == 0) {
      iVar4 = (*pcVar1)();
      uVar6 = uVar8;
      if (*(int *)(iVar4 + 0x24) == 0) {
        uVar6 = 0xffffffff821acc3c;
      }
      fn_822C8C08(*(undefined4 *)(iVar4 + 0x114),uVar6);
    }
    else {
      iVar4 = (*pcVar1)();
      fn_822C72E0(*(undefined4 *)(*(int *)(iVar4 + 0x114) + 0x20),0xffffffff821acca4);
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 8);
    if (*(int *)(iVar4 + 0x7a0) == 0) {
      iVar4 = (*pcVar1)();
      if (*(int *)(iVar4 + 0x24) == 0) {
        uVar8 = 0xffffffff821acc3c;
      }
      fn_822C8C08(*(undefined4 *)(iVar4 + 0x114),uVar8);
    }
    else {
      iVar4 = (*pcVar1)();
      fn_822C72E0(*(undefined4 *)(*(int *)(iVar4 + 0x114) + 0x20),0xffffffff821acca4);
    }
  }
LAB_82408f04:
  fn_8240C6D8(*(undefined4 *)(param_1 + 0x10));
LAB_82409004:
  *(uint *)(param_1 + 0x50) = param_2;
  return;
}

