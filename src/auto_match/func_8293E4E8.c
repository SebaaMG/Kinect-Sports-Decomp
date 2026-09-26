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
#define NAN(x) ((x) != (x))
extern unsigned int INFINITY;
extern double _seed_nan;
extern int fn_82635A30();
extern int fn_82635CC8();
extern int fn_828FA8D8();
extern int fn_82930318();
extern int fn_82930478();
extern int fn_829304E0();
extern int fn_82930940();
extern int fn_82935720();
extern int fn_82935BA0();
extern int fn_82935E28();
extern int fn_82936020();
extern int fn_82937A60();
extern int fn_8293A1A8();
extern int fn_8293A7B0();
extern int fn_8293BBD8();
extern int fn_8293E3E8();
extern int fn_829B3208();
extern int fn_829B32E8();
extern int fn_829B3508();
extern unsigned int uStack_88;


void fn_8293E4E8(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  float fVar1;
  undefined4 uVar3;
  float fVar4;
  ulonglong uVar2;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  int iVar12;
  double dVar13;
  float afStack_90 [2];
  undefined8 uStack_88;
  float afStack_80 [32];
  
  fVar11 = afStack_80[0];
  if (param_1[0xe] != 0) {
    return;
  }
  if (param_3 != 0) {
    pfVar10 = afStack_80 + param_3;
    uVar8 = param_3;
    do {
      iVar5 = param_1[0xc];
      uVar8 = uVar8 - 1;
      pfVar10 = pfVar10 + -1;
      if (iVar5 == 0) {
        fn_828FA8D8(*param_1,param_1 + 4,0,0xffffffff82029604);
        param_1[0xd] = 1;
        return;
      }
      fVar4 = *(float *)(iVar5 + 8);
      param_1[0xc] = *(undefined4 *)(iVar5 + 0xc);
      *pfVar10 = fVar4;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
    } while (uVar8 != 0);
  }
  fVar4 = 0.0;
  switch(param_2) {
  case 0:
  case 7:
    goto code_r0x8293e6a4;
  case 1:
  case 2:
  case 4:
  case 5:
  case 0xb:
  case 0xd:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x34:
  case 0x38:
  case 0x3e:
  case 0x44:
  case 0x45:
  case 0x4a:
  case 0x4b:
    fVar4 = fVar11;
    break;
  case 3:
    fVar4 = (float)fn_82930478(afStack_80[1],afStack_80[0]);
    break;
  case 6:
    fVar4 = fVar11;
    if (param_1[0x20] != 0) {
      if (param_1[0x12] == 0) {
        if (param_1[0x15] == 0) {
          param_1[0x15] = 1;
          fn_8293BBD8(param_1);
          fn_82635A30(param_1[0x4e],param_1[0x18]);
        }
        uVar3 = param_1[0x4e];
        uVar6 = (**(code **)(*(int *)param_1[0x20] + 0x10))();
        uVar7 = (**(code **)(*(int *)param_1[0x20] + 0xc))((int *)param_1[0x20]);
        fn_82635CC8(uVar3,uVar7,uVar6);
      }
      else {
        fn_82937A60(param_1,0xffffffff82034198);
      }
      if ((int *)param_1[0x20] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x20] + 8))();
        param_1[0x20] = 0;
      }
    }
    break;
  case 8:
    if (param_1[0x47] == 0) {
      param_1[0x47] = *(undefined4 *)((int)afStack_80[0] + 0x18);
    }
    goto code_r0x8293e6a4;
  case 9:
    goto code_r0x8293e6b0;
  case 10:
    *(undefined4 *)((int)afStack_80[0] + 0x50) = 1;
code_r0x8293e6b0:
    fn_8293E3E8(param_1);
    fVar4 = fVar11;
    break;
  case 0xc:
    fVar4 = (float)fn_8293A7B0(param_1,afStack_80[0],afStack_80[1]);
    break;
  case 0xe:
    *(float *)((int)afStack_80[1] + 0x5c) = afStack_80[0];
    fVar4 = afStack_80[1];
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1f:
  case 0x21:
  case 0x23:
    afStack_80[0] = 0.0;
    if (1 < param_3) {
      fn_829B32E8(fVar11,afStack_80[1]);
      afStack_80[1] = 0.0;
    }
    fVar4 = fVar11;
    if (2 < param_3) {
      iVar5 = param_3 - 2;
      pfVar10 = afStack_80 + 1;
      pfVar9 = (float *)((int)fVar11 + 0x5c);
      do {
        fVar4 = pfVar10[1];
        pfVar10 = pfVar10 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + 1;
        *pfVar9 = fVar4;
        iVar5 = iVar5 + -1;
        fVar4 = fVar11;
      } while (iVar5 != 0);
    }
    break;
  case 0x18:
  case 0x19:
  case 0x27:
    afStack_80[0] = 0.0;
    fVar4 = fVar11;
    if (1 < param_3) {
      iVar5 = param_3 - 1;
      pfVar10 = afStack_80;
      pfVar9 = (float *)((int)fVar11 + 0x5c);
      do {
        fVar4 = pfVar10[1];
        pfVar10 = pfVar10 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + 1;
        *pfVar9 = fVar4;
        iVar5 = iVar5 + -1;
        fVar4 = fVar11;
      } while (iVar5 != 0);
    }
    break;
  case 0x1a:
  case 0x24:
    *(float *)((int)afStack_80[0] + 0x70) = afStack_80[1];
    fVar4 = fVar11;
    break;
  case 0x1b:
    *(float *)((int)afStack_80[0] + 0x54) = afStack_80[1];
    fVar4 = fVar11;
    break;
  case 0x1c:
  case 0x25:
    *(float *)((int)afStack_80[0] + 0x60) = afStack_80[1];
    fVar4 = fVar11;
    break;
  case 0x1d:
    *(float *)((int)afStack_80[0] + 0x54) = afStack_80[1];
    goto code_r0x8293e7b0;
  case 0x1e:
  case 0x26:
    *(float *)((int)afStack_80[0] + 0x60) = afStack_80[1];
    goto code_r0x8293e7b0;
  case 0x20:
  case 0x22:
    afStack_80[0] = 0.0;
    if (1 < param_3) {
      fn_829B32E8(fVar11,afStack_80[1]);
      afStack_80[1] = 0.0;
    }
    uVar8 = 2;
    if (2 < param_3 - 1) {
      pfVar10 = afStack_80 + 1;
      pfVar9 = (float *)((int)fVar11 + 0x5c);
      do {
        fVar4 = pfVar10[1];
        uVar8 = uVar8 + 1;
        pfVar10 = pfVar10 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + 1;
        *pfVar9 = fVar4;
      } while (uVar8 < param_3 - 1);
    }
    afStack_80[2] = *(float *)((int)&uStack_88 + param_3 * 4 + 4);
    *(undefined4 *)((int)&uStack_88 + param_3 * 4 + 4) = 0;
code_r0x8293e7b0:
    *(float *)((int)fVar11 + 0x70) = afStack_80[2];
    fVar4 = fVar11;
    break;
  case 0x28:
    *(float *)((int)afStack_80[0] + 0x60) = afStack_80[1];
    *(float *)((int)afStack_80[0] + 100) = afStack_80[2];
    *(float *)((int)afStack_80[0] + 0x70) = afStack_80[3];
    fVar4 = fVar11;
    break;
  case 0x29:
    fVar4 = 0.0;
    while (fVar1 = fVar11, fVar1 != 0.0) {
      fVar11 = *(float *)((int)fVar1 + 0xc);
      *(float *)((int)fVar1 + 0xc) = fVar4;
      fVar4 = fVar1;
    }
    break;
  case 0x2a:
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar11 = afStack_80[0];
      fVar4 = 0.0;
code_r0x8293e898:
      uVar6 = 0xffffffff82034190;
code_r0x8293e8a0:
      fVar4 = (float)fn_829304E0(uVar2,fVar11,fVar4,uVar6);
      break;
    }
    goto code_r0x8293e6a4;
  case 0x2b:
    uVar2 = fn_82930318(0x14);
    fVar11 = afStack_80[1];
    fVar4 = afStack_80[0];
    if ((uVar2 & 0xffffffff) != 0) goto code_r0x8293e898;
    goto code_r0x8293e6a4;
  case 0x2c:
    if ((param_1[0x12] != 0) && (*(int *)((int)afStack_80[0] + 4) == 3)) {
      iVar12 = (int)afStack_80[0] + 0x10;
      iVar5 = fn_82935720(iVar12,&uStack_88,afStack_90);
      if ((iVar5 == 0) &&
         (iVar5 = (*(code *)param_1[0x14])(param_1[0x13],iVar12,0,afStack_90), iVar5 == 0)) {
        fVar11 = afStack_90[0];
      }
    }
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar4 = 0.0;
      uVar6 = 0xffffffff821a7a58;
      goto code_r0x8293e8a0;
    }
    goto code_r0x8293e6a4;
  case 0x2d:
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar6 = 0xffffffff821a7a58;
      fVar4 = afStack_80[1];
      fVar11 = afStack_80[0];
      goto code_r0x8293e8a0;
    }
code_r0x8293e6a4:
    fVar4 = 0.0;
    break;
  case 0x2f:
    fVar4 = fVar11;
    if (((param_1[0x12] != 0) && (*(int *)((int)afStack_80[0] + 4) == 3)) &&
       (iVar5 = (*(code *)param_1[0x14])(param_1[0x13],(int)afStack_80[0] + 0x10,0,afStack_90),
       iVar5 == 0)) {
      fVar4 = afStack_90[0];
    }
    break;
  case 0x33:
    if (*(int *)((int)afStack_80[0] + 0x1c) == 0) {
      uVar3 = fn_82935E28(param_1,(int)afStack_80[1] + 0x10);
      *(undefined4 *)((int)fVar11 + 0x20) = uVar3;
      fVar4 = fVar11;
    }
    else {
      fn_828FA8D8(*param_1,param_1 + 4,0x7e6,0xffffffff8202ce10);
      param_1[0xd] = 1;
      *(undefined4 *)((int)fVar11 + 0x20) = 0x8d1;
      fVar4 = fVar11;
    }
    break;
  case 0x35:
    if (*(int *)((int)afStack_80[0] + 0x14) == 0) {
      uVar3 = 0xd000000;
      fVar4 = afStack_80[0];
      goto code_r0x8293ea2c;
    }
    uVar6 = 0x7e2;
    uVar7 = 0xffffffff8202cde8;
    fVar4 = afStack_80[0];
    goto code_r0x8293eb64;
  case 0x36:
    if (*(int *)((int)afStack_80[0] + 0x14) == 0) {
      uVar3 = 0x1000000;
      fVar4 = afStack_80[0];
    }
    else {
      fVar4 = fVar11;
      if (*(int *)((int)afStack_80[0] + 0x14) != 0xb000000) break;
      uVar3 = 0xc000000;
      fVar4 = afStack_80[0];
    }
code_r0x8293ea2c:
    *(undefined4 *)((int)fVar4 + 0x14) = uVar3;
    break;
  case 0x37:
    if (*(int *)((int)afStack_80[0] + 0x18) == 1) {
      if (*(int *)((int)afStack_80[1] + 0x14) == 0) {
        uVar3 = 0x6000000;
        fVar4 = afStack_80[1];
        goto code_r0x8293ea2c;
      }
      uVar6 = 0x7dc;
      uVar7 = 0xffffffff8202cd68;
      fVar4 = afStack_80[1];
    }
    else {
      uVar6 = 0x7da;
      uVar7 = 0xffffffff8202cd98;
      fVar4 = afStack_80[1];
    }
    goto code_r0x8293eb64;
  case 0x39:
    if (*(int *)((int)afStack_80[0] + 0x1c) == 0) {
      uVar3 = fn_82936020(param_1,(int)afStack_80[1] + 0x10);
      *(undefined4 *)((int)fVar11 + 0x24) = uVar3;
      fVar4 = fVar11;
    }
    else {
      fn_828FA8D8(*param_1,param_1 + 4,0x7e6,0xffffffff8202cd10);
      param_1[0xd] = 1;
      *(undefined4 *)((int)fVar11 + 0x24) = 0xe4;
      fVar4 = fVar11;
    }
    break;
  case 0x3c:
    fVar11 = 0.0;
    goto code_r0x8293eafc;
  case 0x3d:
    fVar11 = afStack_80[1];
code_r0x8293eafc:
    fVar4 = (float)fn_8293A1A8(param_1,(int)afStack_80[0] + 0x10,fVar11);
    goto code_r0x8293ed84;
  case 0x3f:
    *(int *)((int)afStack_80[0] + 0x18) =
         *(int *)((int)afStack_80[1] + 0x18) + *(int *)((int)afStack_80[0] + 0x18);
    if (*(int *)((int)afStack_80[0] + 0x28) == 0) {
      *(undefined4 *)((int)afStack_80[0] + 0x28) = *(undefined4 *)((int)afStack_80[1] + 0x28);
      *(undefined4 *)((int)afStack_80[1] + 0x28) = 0;
      fVar4 = fVar11;
      break;
    }
    fVar4 = fVar11;
    if (*(int *)((int)afStack_80[1] + 0x28) == 0) break;
    uVar6 = 0x7d9;
    uVar7 = 0xffffffff8202ccc0;
    fVar4 = afStack_80[0];
code_r0x8293eb64:
    fn_828FA8D8(*param_1,param_1 + 4,uVar6,uVar7);
    param_1[0xd] = 1;
    break;
  case 0x40:
    uVar2 = fn_82930318(0x50);
    if ((uVar2 & 0xffffffff) == 0) goto code_r0x8293ed80;
    uVar3 = 0;
    fVar11 = afStack_80[0];
code_r0x8293eb90:
    fVar4 = (float)fn_829B3508(uVar2,param_1 + 4,0,0,uVar3,0,fVar11);
    goto code_r0x8293ed84;
  case 0x41:
    uVar2 = fn_82930318(0x50);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar3 = *(undefined4 *)((int)afStack_80[0] + 0x18);
      fVar11 = 0.0;
      goto code_r0x8293eb90;
    }
    goto code_r0x8293ed80;
  case 0x42:
    uVar2 = fn_82930318(0x30);
    if ((uVar2 & 0xffffffff) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)fn_82930940(uVar2,param_1 + 4);
    }
    fn_82935BA0(param_1,fVar4);
    *(undefined4 *)((int)fVar4 + 0x18) = 1;
    goto code_r0x8293ebfc;
  case 0x43:
    uVar2 = fn_82930318(0x30);
    if ((uVar2 & 0xffffffff) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)fn_82930940(uVar2,param_1 + 4);
    }
    fn_82935BA0(param_1,fVar4);
    *(undefined4 *)((int)fVar4 + 0x18) = 0;
code_r0x8293ebfc:
    *(undefined4 *)((int)fVar4 + 0x10) = 2;
    break;
  case 0x46:
    *(int *)((int)afStack_80[0] + 0x18) = -*(int *)((int)afStack_80[0] + 0x18);
    fVar4 = fVar11;
    break;
  case 0x47:
  case 0x48:
    uStack_88 = (ulonglong)*(uint *)((int)afStack_80[0] + 0x18);
    *(undefined4 *)((int)afStack_80[0] + 0x10) = 5;
    dVar13 = (double)uStack_88;
    goto code_r0x8293ec74;
  case 0x49:
    uStack_88 = (ulonglong)*(uint *)((int)afStack_80[0] + 0x18);
    *(undefined4 *)((int)afStack_80[0] + 0x10) = 5;
    dVar13 = -(double)uStack_88;
code_r0x8293ec74:
    *(double *)((int)afStack_80[0] + 0x18) = dVar13;
    fVar4 = fVar11;
    break;
  case 0x4c:
    fVar4 = (float)*(double *)((int)afStack_80[0] + 0x18);
    if (fVar4 == 0.0) {
      afStack_90[0] = -0.0;
    }
    else if (fVar4 == -0.0) {
      afStack_90[0] = 0.0;
    }
    else {
      afStack_90[0] = INFINITY;
      if (((uint)fVar4 & 0x7f800000) == 0x7f800000) {
        if (fVar4 == INFINITY) {
          afStack_90[0] = -INFINITY;
        }
        else if ((fVar4 != -INFINITY) && (afStack_90[0] = -(_seed_nan), fVar4 != -(_seed_nan)))
        goto code_r0x8293ed1c;
      }
      else {
code_r0x8293ed1c:
        afStack_90[0] = -fVar4;
      }
    }
    *(double *)((int)afStack_80[0] + 0x18) = (double)afStack_90[0];
    fVar4 = fVar11;
    break;
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    uVar2 = fn_82930318(0x78);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar4 = (float)fn_829B3208(uVar2,param_1 + 4,param_1[0x1a],param_1[0x1b],param_1[0x1c],
                                       param_1[0x1d],param_1[0x1e]);
      goto code_r0x8293ed84;
    }
    goto code_r0x8293ed80;
  case 0x60:
  case 0x61:
  case 0x62:
    uVar2 = fn_82930318(0x30);
    if ((uVar2 & 0xffffffff) != 0) {
      fVar4 = (float)fn_82930940(uVar2,param_1 + 4);
      goto code_r0x8293ed84;
    }
code_r0x8293ed80:
    fVar4 = 0.0;
code_r0x8293ed84:
    fn_82935BA0(param_1,fVar4);
  }
  if (param_1[0xe] == 0) {
    uVar2 = fn_82930318(0x14);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_829304E0(uVar2,fVar4,param_1[0xc],0xffffffff820295d0);
    }
    if (iVar5 == 0) {
      fn_828FA8D8(*param_1,param_1 + 4,0,0xffffffff820295b0);
      param_1[0xe] = 1;
      param_1[0xd] = 1;
    }
    else {
      param_1[0xc] = iVar5;
    }
  }
  return;
}

