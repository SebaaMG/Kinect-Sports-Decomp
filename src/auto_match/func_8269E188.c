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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_118;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_114;
extern unsigned int fStack_b4;
extern unsigned int fStack_bc;
extern unsigned int fStack_c8;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82681838();
extern int fn_82681898();
extern int fn_82681930();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B270();
extern int fn_8268B330();
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82694700();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_8269A190();
extern int fn_8269A240();
extern int fn_8269AFB8();
extern int fn_8269F500();
extern int fn_826A70C0();
extern int fn_826A7398();
extern int fn_826ADE60();
extern int fn_826CD200();
extern int fn_826F97E8();
extern int fn_82F68918();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005748;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_140;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern U64 storeWordConditionalIndexed();


undefined8 fn_8269E188(int *param_1,uint param_2,undefined1 *param_3,char param_4)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  char *pcVar10;
  uint *puVar11;
  undefined1 uVar13;
  int iVar12;
  ulonglong uVar14;
  char in_RESERVE;
  byte bVar15;
  char *pcVar16;
  double dVar17;
  undefined8 uStack_140;
  undefined4 uStack_138;
  uint uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [4];
  float fStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  uint uStack_f0;
  undefined4 uStack_ec;
  float afStack_d8 [2];
  float afStack_d0 [2];
  float fStack_c8;
  undefined1 auStack_c0 [4];
  float fStack_bc;
  float fStack_b4;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  if ((param_4 != '\0') && (((int)param_2 < 0 || (0x15 < (int)param_2)))) {
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    fn_826ADE60(uVar2,0xffffffff82006ab8,param_2);
LAB_8269e1dc:
    return 0;
  }
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (0x1f < (int)param_2) {
    return 0;
  }
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((uVar3 & 1 << (param_2 & 0x3f)) == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
    fn_82681930(auStack_b0);
    piVar5 = (int *)fn_8269AFB8(param_1,auStack_b0);
    iVar12 = *piVar5;
    goto code_r0x8269e274;
  case 1:
    fn_82681930(auStack_b0);
    iVar12 = fn_8269AFB8(param_1,auStack_b0);
    iVar12 = *(int *)(iVar12 + 4);
code_r0x8269e274:
    uStack_140 = (longlong)iVar12;
    dVar17 = (double)uStack_140 * lbl_82005720;
    break;
  case 2:
    fn_82681930(auStack_b0);
    iVar12 = fn_8269AFB8(param_1,auStack_b0);
    dVar17 = *(double *)(iVar12 + 8);
    break;
  case 3:
    fn_82681930(auStack_b0);
    iVar12 = fn_8269AFB8(param_1,auStack_b0);
    dVar17 = *(double *)(iVar12 + 0x10);
    break;
  default:
    goto LAB_8269e1dc;
  case 6:
    dVar17 = (double)((float)param_1[0xf] * lbl_82005748);
    break;
  case 7:
    bVar15 = (**(code **)(*param_1 + 8))(param_1);
    goto code_r0x8269e39c;
  case 8:
    (**(code **)(*param_1 + 0x28))(afStack_d0,param_1,param_1 + 0x11);
    fStack_b4 = fStack_c8;
    fStack_bc = afStack_d0[0];
    goto code_r0x8269e314;
  case 9:
    (**(code **)(*param_1 + 0x28))(auStack_c0,param_1,param_1 + 0x11);
code_r0x8269e314:
    dVar17 = (double)(fStack_b4 - fStack_bc);
code_r0x8269e318:
    dVar17 = (double)fn_82F68918(dVar17);
    dVar17 = dVar17 * lbl_82005720;
    break;
  case 10:
    fn_82681930(auStack_b0);
    iVar12 = fn_8269AFB8(param_1,auStack_b0);
    dVar17 = *(double *)(iVar12 + 0x18);
    break;
  case 0xb:
    fn_8268AFB0(&uStack_110,lbl_831E7E64);
    piVar4 = (int *)(**(code **)(*param_1 + 0x54))(param_1,0);
    piVar5 = param_1;
    if (piVar4 != (int *)0x0) {
      piVar4[1] = piVar4[1] + 1;
    }
    do {
      if (piVar5 == piVar4) break;
      iVar12 = piVar5[0x20];
      if (iVar12 == 0) {
        iVar12 = fn_8269F500(piVar5);
      }
      if (iVar12 == 0) {
        iVar12 = (**(code **)(*piVar5 + 0x58))(piVar5);
        iVar12 = *(int *)(iVar12 + 0x78);
      }
      fn_8268B270(&uStack_110,**(undefined4 **)(iVar12 + 8),0,0xffffffffffffffff);
      fn_8268B270(&uStack_110,0xffffffff821aa630,0,0xffffffffffffffff);
      piVar1 = piVar5 + 8;
      piVar5 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    uVar14 = (ulonglong)uStack_110;
    if (uVar14 == 0) {
      uVar14 = 0xffffffff82196582;
    }
    iVar12 = (**(code **)(*param_1 + 0x58))(param_1);
    iVar12 = fn_82694610((ulonglong)*(uint *)(iVar12 + 0x78) + 0x254,uVar14,uStack_10c);
    uStack_140 = CONCAT44(iVar12,(((U64)(uStack_140) >> 32) & 0xFFFFFFFF));
    *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
    fn_82681838(param_3,&uStack_140);
    lVar9 = (ulonglong)*(uint *)(iVar12 + 8) - 1;
    *(int *)(iVar12 + 8) = (int)lVar9;
    if (lVar9 == 0) {
      fn_826944C8(iVar12);
    }
    if (piVar4 != (int *)0x0) {
      fn_8267C498(piVar4);
    }
    puVar11 = &uStack_110;
    goto code_r0x8269e5f4;
  case 0xd:
    uVar14 = (ulonglong)(uint)param_1[0x20];
    if (param_1[0x20] == 0) {
      uVar14 = fn_8269F500(param_1);
    }
    if ((uVar14 & 0xffffffff) == 0) {
      iVar12 = (**(code **)(*param_1 + 0x58))(param_1);
      uVar14 = (ulonglong)*(uint *)(iVar12 + 0x78);
    }
    fn_82681838(param_3,uVar14 + 8);
    return 1;
  case 0xe:
    fn_826959C8(param_3);
    *param_3 = 0;
    (**(code **)(*param_1 + 0x58))(param_1);
    iVar12 = fn_826A7398();
    uStack_12c = *(undefined4 *)(iVar12 + 0x95c);
    uStack_130 = *(undefined4 *)(iVar12 + 0x958);
    piVar5 = (int *)fn_826F97E8(iVar12,&uStack_130,1,param_1);
    fn_8268AFB0(&uStack_f0,lbl_831E7E64);
    for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[8]) {
      iVar12 = piVar5[0x20];
      if (iVar12 == 0) {
        iVar12 = fn_8269F500(piVar5);
      }
      if (iVar12 == 0) {
        iVar12 = (**(code **)(*piVar5 + 0x58))(piVar5);
        iVar12 = *(int *)(iVar12 + 0x78);
      }
      fn_8268B270(&uStack_f0,**(undefined4 **)(iVar12 + 8),0,0xffffffffffffffff);
      fn_8268B270(&uStack_f0,0xffffffff821aa630,0,0xffffffffffffffff);
    }
    uVar14 = (ulonglong)uStack_f0;
    if (uVar14 == 0) {
      uVar14 = 0xffffffff82196582;
    }
    iVar12 = (**(code **)(*param_1 + 0x58))(param_1);
    iVar12 = fn_82694610((ulonglong)*(uint *)(iVar12 + 0x78) + 0x254,uVar14,uStack_ec);
    uStack_140 = CONCAT44(iVar12,(((U64)(uStack_140) >> 32) & 0xFFFFFFFF));
    *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
    fn_82681838(param_3,&uStack_140);
    lVar9 = (ulonglong)*(uint *)(iVar12 + 8) - 1;
    *(int *)(iVar12 + 8) = (int)lVar9;
    if (lVar9 == 0) {
      fn_826944C8(iVar12);
    }
    puVar11 = &uStack_f0;
code_r0x8269e5f4:
    fn_8268AFD8(puVar11);
    return 1;
  case 0xf:
    uStack_140 = 0;
    uStack_138 = 0;
    piVar5 = (int *)(**(code **)(*param_1 + 0x48))(param_1);
    pcVar6 = (char *)(**(code **)(*piVar5 + 0x30))();
    pcVar10 = pcVar6;
    if (pcVar6 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      do {
        cVar8 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar8 != '\0');
      pcVar10 = pcVar10 + (-1 - (int)pcVar6);
    }
    fn_826CD200(&uStack_140,pcVar10 + 1);
    iVar12 = (((U64)(uStack_140) >> 0) & 0xFFFFFFFF);
    if (pcVar10 != (char *)0x0) {
      iVar7 = (((U64)(uStack_140) >> 0) & 0xFFFFFFFF) - (int)pcVar6;
      pcVar16 = pcVar10;
      do {
        cVar8 = *pcVar6;
        if (cVar8 == '\\') {
          cVar8 = '/';
        }
        pcVar6[iVar7] = cVar8;
        pcVar6 = pcVar6 + 1;
        pcVar16 = pcVar16 + -1;
      } while (pcVar16 != (char *)0x0);
    }
    pcVar10[(((U64)(uStack_140) >> 0) & 0xFFFFFFFF)] = '\0';
    fn_8268B330(&uStack_134);
    fn_826A70C0(iVar12,pcVar10,&uStack_134);
    iVar7 = (**(code **)(*param_1 + 0x58))(param_1);
    fn_8269A190(&uStack_140,(ulonglong)*(uint *)(iVar7 + 0x78) + 0x254,&uStack_134);
    fn_82681838(param_3,&uStack_140);
    lVar9 = (ulonglong)*(uint *)((((U64)(uStack_140) >> 0) & 0xFFFFFFFF) + 8) - 1;
    bVar15 = (lVar9 == 0) << 1;
    *(int *)((((U64)(uStack_140) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar9;
    if (lVar9 == 0) {
      fn_826944C8();
    }
    lVar9 = ((ulonglong)uStack_134 & 0xfffffffc) + 4;
    do {
      puVar11 = (uint *)lVar9;
      uVar14 = (ulonglong)*puVar11;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar14 - 1,0,lVar9);
        *puVar11 = uVar3;
        bVar15 = 2;
      }
    } while (!(bool)(bVar15 >> 1 & 1));
    if (uVar14 == 1) {
      fn_8267BE38();
    }
    fn_8267BE38(iVar12);
    return 1;
  case 0x10:
    fn_826959C8(param_3);
    param_3[4] = 1;
    goto code_r0x8269e3a8;
  case 0x11:
    if ((param_1[0x23] & 0x180U) == 0) {
      fn_826959C8(param_3);
      *param_3 = 1;
      return 1;
    }
    iVar12 = (param_1[0x23] & 0x180U) - 0x180;
    goto code_r0x8269e924;
  case 0x12:
    dVar17 = lbl_82005710;
    break;
  case 0x13:
    iVar12 = (**(code **)(*param_1 + 0x58))(param_1);
    uVar14 = 0xffffffff82006ab0;
    goto code_r0x8269e3f4;
  case 0x14:
    iVar12 = (**(code **)(*param_1 + 0x40))(param_1);
    uStack_124 = *(undefined4 *)(iVar12 + 0x95c);
    uStack_128 = *(undefined4 *)(iVar12 + 0x958);
    fn_8268CC00(auStack_70);
    fn_8269A240(param_1,auStack_70);
    fn_8268D008(auStack_70,afStack_d8,&uStack_128);
    fStack_114 = afStack_d8[0];
    goto code_r0x8269e9a4;
  case 0x15:
    iVar12 = (**(code **)(*param_1 + 0x40))(param_1);
    uStack_11c = *(undefined4 *)(iVar12 + 0x95c);
    uStack_120 = *(undefined4 *)(iVar12 + 0x958);
    fn_8268CC00(auStack_50);
    fn_8269A240(param_1,auStack_50);
    fn_8268D008(auStack_50,auStack_118,&uStack_120);
code_r0x8269e9a4:
    dVar17 = (double)fStack_114 + lbl_82005730;
    goto code_r0x8269e318;
  case 0x16:
    if (param_1[8] != 0) {
      fn_82696480();
      return 1;
    }
code_r0x8269e614:
    fn_826959C8(param_3);
    uVar13 = 0;
    goto code_r0x8269e61c;
  case 0x17:
    iVar12 = (**(code **)(*param_1 + 0xc))(param_1);
    uVar14 = (ulonglong)*(uint *)(iVar12 * 4 + -0x7ceaa6c8);
    iVar12 = (**(code **)(*param_1 + 0x58))(param_1);
code_r0x8269e3f4:
    iVar12 = fn_82694700((ulonglong)*(uint *)(iVar12 + 0x78) + 0x254,uVar14);
    uStack_140 = CONCAT44(iVar12,(((U64)(uStack_140) >> 32) & 0xFFFFFFFF));
    *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
    fn_82681838(param_3,&uStack_140);
    lVar9 = (ulonglong)*(uint *)(iVar12 + 8) - 1;
    *(int *)(iVar12 + 8) = (int)lVar9;
    if (lVar9 != 0) {
      return 1;
    }
    fn_826944C8(iVar12);
    return 1;
  case 0x1a:
    bVar15 = (byte)((uint)param_1[0x23] >> 4) & 1;
    goto code_r0x8269e39c;
  case 0x1b:
    bVar15 = (byte)((uint)param_1[0x23] >> 0xd) & 1;
    goto code_r0x8269e39c;
  case 0x1d:
    if ((param_1[0x23] & 0x60U) == 0) goto code_r0x8269e614;
    iVar12 = (param_1[0x23] & 0x60U) - 0x60;
code_r0x8269e924:
    fn_826959C8(param_3);
    uVar13 = 2;
    param_3[4] = iVar12 == 0;
code_r0x8269e61c:
    *param_3 = uVar13;
    return 1;
  case 0x1e:
    uStack_140 = (longlong)*(short *)(param_1 + 0x24);
    dVar17 = (double)uStack_140;
    break;
  case 0x1f:
    if ((param_1[0x23] & 0x600U) == 0) {
      return 0;
    }
    bVar15 = (param_1[0x23] & 0x600U) == 0x600;
code_r0x8269e39c:
    fn_826959C8(param_3);
    param_3[4] = bVar15;
code_r0x8269e3a8:
    *param_3 = 2;
    return 1;
  }
  fn_82681898(dVar17,param_3);
  return 1;
}

