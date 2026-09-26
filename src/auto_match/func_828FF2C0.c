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
extern unsigned int *auStack_70;
extern int fn_828FA8D8();
extern int fn_828FC540();
extern int fn_828FC5B8();
extern int fn_828FC6C8();
extern int fn_828FD678();
extern int fn_828FDF80();
extern int fn_82930318();
extern int fn_82930478();
extern int fn_829304E0();
extern int fn_82930940();
extern int fn_82934EB8();
extern int fn_829350F0();


void fn_828FF2C0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar3;
  int iVar6;
  undefined4 *puVar7;
  uint uVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  double dVar13;
  uint auStack_70 [28];
  
  uVar2 = auStack_70[1];
  uVar9 = auStack_70[0];
  if (param_1[0x14] != 0) {
    return;
  }
  if (param_3 != 0) {
    puVar11 = auStack_70 + param_3;
    uVar5 = param_3;
    do {
      iVar6 = param_1[0xd];
      uVar5 = uVar5 - 1;
      puVar11 = puVar11 + -1;
      if (iVar6 == 0) {
        fn_828FA8D8(*param_1,param_1 + 4,0,0xffffffff82029604);
        param_1[0x13] = 1;
        return;
      }
      uVar1 = *(uint *)(iVar6 + 8);
      param_1[0xd] = *(undefined4 *)(iVar6 + 0xc);
      *puVar11 = uVar1;
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 0xc) = 0;
    } while (uVar5 != 0);
  }
  uVar5 = 0;
  switch(param_2) {
  case 0:
  case 6:
    goto code_r0x828ff3bc;
  case 1:
  case 2:
  case 4:
  case 5:
  case 10:
  case 0x17:
  case 0x19:
  case 0x1d:
  case 0x23:
  case 0x29:
  case 0x2a:
  case 0x2f:
  case 0x30:
    uVar5 = uVar9;
    break;
  case 3:
    uVar5 = fn_82930478(auStack_70[1],auStack_70[0]);
    break;
  case 7:
    if (param_1[0x1e] == 0) {
      param_1[0x1e] = *(undefined4 *)(auStack_70[0] + 0x18);
    }
    goto code_r0x828ff3bc;
  case 8:
    goto code_r0x828ff3cc;
  case 9:
    if (((int)param_1[0xe] < 6) || (9 < (int)param_1[0xe])) {
      uVar8 = 0x7eb;
      uVar10 = 0xffffffff8202ce78;
      puVar7 = (undefined4 *)(auStack_70[0] + 0x10);
      uVar5 = auStack_70[0];
      goto code_r0x828ff40c;
    }
    *(undefined4 *)(auStack_70[0] + 0x54) = 1;
code_r0x828ff3cc:
    fn_828FDF80(param_1);
    uVar5 = uVar9;
    break;
  case 0xb:
    iVar6 = param_1[0xe];
    if (((1 < iVar6) && (iVar6 < 6)) || ((0xb < iVar6 && (iVar6 < 0x10)))) {
      *(uint *)(auStack_70[1] + 0x40) = auStack_70[0];
      uVar5 = auStack_70[1];
      break;
    }
    uVar8 = 0x7ec;
    uVar10 = 0xffffffff8202ce38;
    puVar7 = (undefined4 *)(auStack_70[1] + 0x10);
    uVar5 = auStack_70[1];
    goto code_r0x828ff40c;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    auStack_70[0] = 0;
    if (1 < param_3) {
      auStack_70[1] = 0;
      *(uint *)(uVar9 + 0x3c) = uVar2;
    }
    uVar5 = uVar9;
    if (2 < param_3) {
      iVar6 = param_3 - 2;
      puVar11 = auStack_70 + 1;
      puVar12 = (uint *)(uVar9 + 0x40);
      do {
        uVar2 = puVar11[1];
        puVar11 = puVar11 + 1;
        *puVar11 = 0;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    break;
  case 0x15:
  case 0x16:
    auStack_70[0] = 0;
    uVar5 = uVar9;
    if (1 < param_3) {
      iVar6 = param_3 - 1;
      puVar11 = auStack_70;
      puVar12 = (uint *)(uVar9 + 0x40);
      do {
        uVar2 = puVar11[1];
        puVar11 = puVar11 + 1;
        *puVar11 = 0;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    break;
  case 0x18:
    if (*(int *)(auStack_70[0] + 0x1c) == 0) {
      uVar4 = fn_828FC5B8(param_1,auStack_70[1] + 0x10);
      *(undefined4 *)(uVar9 + 0x20) = uVar4;
      uVar5 = uVar9;
    }
    else {
      fn_828FA8D8(*param_1,param_1 + 4,0x7e6,0xffffffff8202ce10);
      param_1[0x13] = 1;
      *(undefined4 *)(uVar9 + 0x20) = 0xf0000;
      uVar5 = uVar9;
    }
    break;
  case 0x1a:
    if (*(int *)(auStack_70[0] + 0x14) == 0) {
      uVar4 = 0xd000000;
      uVar5 = auStack_70[0];
      goto code_r0x828ff554;
    }
    uVar8 = 0x7e2;
    uVar10 = 0xffffffff8202cde8;
    uVar5 = auStack_70[0];
    goto code_r0x828ff654;
  case 0x1b:
    iVar6 = *(int *)(auStack_70[0] + 0x14);
    if (iVar6 == 0) {
      uVar4 = 0x1000000;
      uVar5 = auStack_70[0];
    }
    else if (iVar6 == 0x2000000) {
      uVar4 = 0x3000000;
      uVar5 = auStack_70[0];
    }
    else if (iVar6 == 0x4000000) {
      uVar4 = 0x5000000;
      uVar5 = auStack_70[0];
    }
    else if (iVar6 == 0x7000000) {
      uVar4 = 0x8000000;
      uVar5 = auStack_70[0];
    }
    else {
      if ((iVar6 == 0x9000000) || (iVar6 == 0xa000000)) {
        uVar8 = 0x7db;
        uVar10 = 0xffffffff8202cdb8;
        uVar5 = auStack_70[0];
        goto code_r0x828ff654;
      }
      uVar5 = uVar9;
      if (iVar6 != 0xb000000) break;
      uVar4 = 0xc000000;
      uVar5 = auStack_70[0];
    }
code_r0x828ff554:
    *(undefined4 *)(uVar5 + 0x14) = uVar4;
    break;
  case 0x1c:
    if (*(int *)(auStack_70[0] + 0x18) == 1) {
      if (((int)param_1[0xe] < 6) || (9 < (int)param_1[0xe])) {
        uVar8 = 0x7ed;
        uVar10 = 0xffffffff8202cd34;
        uVar5 = auStack_70[1];
      }
      else {
        if (*(int *)(auStack_70[1] + 0x14) == 0) {
          uVar4 = 0x6000000;
          uVar5 = auStack_70[1];
          goto code_r0x828ff554;
        }
        uVar8 = 0x7dc;
        uVar10 = 0xffffffff8202cd68;
        uVar5 = auStack_70[1];
      }
    }
    else {
      uVar8 = 0x7da;
      uVar10 = 0xffffffff8202cd98;
      uVar5 = auStack_70[1];
    }
    goto code_r0x828ff654;
  case 0x1e:
    if (*(int *)(auStack_70[0] + 0x1c) == 0) {
      uVar4 = fn_828FC6C8(param_1,auStack_70[1] + 0x10);
      *(undefined4 *)(uVar9 + 0x24) = uVar4;
      uVar5 = uVar9;
    }
    else {
      fn_828FA8D8(*param_1,param_1 + 4,0x7e6,0xffffffff8202cd10);
      param_1[0x13] = 1;
      *(undefined4 *)(uVar9 + 0x24) = 0xe40000;
      uVar5 = uVar9;
    }
    break;
  case 0x21:
    uVar9 = 0;
    goto code_r0x828ff6b0;
  case 0x22:
    uVar9 = auStack_70[1];
code_r0x828ff6b0:
    uVar5 = fn_828FD678(param_1,auStack_70[0] + 0x10,uVar9);
    goto code_r0x828ff89c;
  case 0x24:
    *(int *)(auStack_70[0] + 0x18) = *(int *)(auStack_70[1] + 0x18) + *(int *)(auStack_70[0] + 0x18)
    ;
    if (*(int *)(auStack_70[0] + 0x28) == 0) {
      *(undefined4 *)(auStack_70[0] + 0x28) = *(undefined4 *)(auStack_70[1] + 0x28);
      *(undefined4 *)(auStack_70[1] + 0x28) = 0;
      uVar5 = uVar9;
      break;
    }
    uVar5 = uVar9;
    if (*(int *)(auStack_70[1] + 0x28) == 0) break;
    uVar8 = 0x7d9;
    uVar10 = 0xffffffff8202ccc0;
    uVar5 = auStack_70[0];
code_r0x828ff654:
    puVar7 = param_1 + 4;
code_r0x828ff40c:
    fn_828FA8D8(*param_1,puVar7,uVar8,uVar10);
    param_1[0x13] = 1;
    break;
  case 0x25:
    uVar3 = fn_82930318(0x2c);
    if ((uVar3 & 0xffffffff) == 0) goto code_r0x828ff898;
    uVar4 = 0;
    uVar9 = auStack_70[0];
code_r0x828ff734:
    uVar5 = fn_829350F0(uVar3,0,0,uVar4,0,uVar9);
    goto code_r0x828ff89c;
  case 0x26:
    uVar3 = fn_82930318(0x2c);
    if ((uVar3 & 0xffffffff) != 0) {
      uVar4 = *(undefined4 *)(auStack_70[0] + 0x18);
      uVar9 = 0;
      goto code_r0x828ff734;
    }
    goto code_r0x828ff898;
  case 0x27:
    uVar3 = fn_82930318(0x30);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82930940(uVar3,param_1 + 4);
    }
    fn_828FC540(param_1,uVar5);
    *(undefined4 *)(uVar5 + 0x18) = 1;
    goto code_r0x828ff79c;
  case 0x28:
    uVar3 = fn_82930318(0x30);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82930940(uVar3,param_1 + 4);
    }
    fn_828FC540(param_1,uVar5);
    *(undefined4 *)(uVar5 + 0x18) = 0;
code_r0x828ff79c:
    *(undefined4 *)(uVar5 + 0x10) = 2;
    break;
  case 0x2b:
    *(int *)(auStack_70[0] + 0x18) = -*(int *)(auStack_70[0] + 0x18);
    uVar5 = uVar9;
    break;
  case 0x2c:
  case 0x2d:
    *(undefined4 *)(auStack_70[0] + 0x10) = 5;
    dVar13 = (double)*(uint *)(auStack_70[0] + 0x18);
    goto code_r0x828ff814;
  case 0x2e:
    *(undefined4 *)(auStack_70[0] + 0x10) = 5;
    dVar13 = (double)*(uint *)(auStack_70[0] + 0x18);
    goto code_r0x828ff83c;
  case 0x31:
    dVar13 = *(double *)(auStack_70[0] + 0x18);
code_r0x828ff83c:
    dVar13 = -dVar13;
code_r0x828ff814:
    *(double *)(auStack_70[0] + 0x18) = dVar13;
    uVar5 = uVar9;
    break;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    uVar3 = fn_82930318(0x60);
    if ((uVar3 & 0xffffffff) != 0) {
      uVar5 = fn_82934EB8(uVar3,param_1 + 4,param_1[0x10],param_1[0x11],param_1[0x12]);
      goto code_r0x828ff89c;
    }
    goto code_r0x828ff898;
  case 0x3d:
  case 0x3e:
  case 0x3f:
    uVar3 = fn_82930318(0x30);
    if ((uVar3 & 0xffffffff) != 0) {
      uVar5 = fn_82930940(uVar3,param_1 + 4);
      goto code_r0x828ff89c;
    }
code_r0x828ff898:
    uVar5 = 0;
code_r0x828ff89c:
    fn_828FC540(param_1,uVar5);
  }
LAB_828ff8a8:
  if (param_1[0x14] == 0) {
    uVar3 = fn_82930318(0x14);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_829304E0(uVar3,uVar5,param_1[0xd],0xffffffff820295d0);
    }
    if (iVar6 == 0) {
      fn_828FA8D8(*param_1,param_1 + 4,0,0xffffffff820295b0);
      param_1[0x14] = 1;
      param_1[0x13] = 1;
    }
    else {
      param_1[0xd] = iVar6;
    }
  }
  return;
code_r0x828ff3bc:
  uVar5 = 0;
  goto LAB_828ff8a8;
}

