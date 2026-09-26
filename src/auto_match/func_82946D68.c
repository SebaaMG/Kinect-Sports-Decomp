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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d4;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82941418();
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int lbl_8315B5D8;
extern unsigned int uStack_b4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


undefined8 fn_82946D68(int *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar8;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  uint uStack_b4;
  uint auStack_b0 [4];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar8 = (**(code **)(*param_1 + 0x70))(param_1,param_2[0x1b]);
  uVar5 = (**(code **)(*param_1 + 0x74))(param_1,param_2[0x1b]);
  if (param_1[0x57] != 0) {
    return 0;
  }
  uStack_dc = 0;
  uVar13 = 0;
  switch(uVar8) {
  case 0:
    return 1;
  case 1:
    uVar15 = 0;
    break;
  case 2:
    uVar15 = 1;
    break;
  case 3:
    uVar15 = 2;
    break;
  case 4:
    uVar15 = 3;
    break;
  case 5:
    uVar15 = 4;
    break;
  case 6:
    uVar15 = 5;
    break;
  case 7:
    uVar15 = 6;
    break;
  case 8:
    uVar15 = 7;
    break;
  case 9:
    uVar15 = 8;
    break;
  case 10:
    uVar15 = 9;
    break;
  case 0xb:
    uVar15 = 10;
    break;
  case 0xc:
    uVar15 = 0xb;
    break;
  case 0xd:
    uVar15 = 0xc;
    break;
  case 0xe:
    uVar15 = 0xd;
    break;
  default:
    return 0xffffffff80004005;
  case 0x11:
    uVar13 = 1;
    uStack_dc = 1;
  case 0x12:
    uVar15 = 0xffffffff80000000;
  }
  iVar12 = *(int *)(param_1[4] + param_2[1] * 4);
  if ((*(uint *)(iVar12 + 4) & 0x10) == 0) {
    uVar6 = (**(code **)(*param_1 + 0x158))(param_1,param_2,auStack_d4,&uStack_d8,&uStack_dc);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uStack_dc = 0;
  }
  else {
    uStack_dc = (int)(param_1[0x1c] << 7 | (uint)param_1[0x1c] >> 0x19) >> 0x1f | uVar13;
    uVar6 = (**(code **)(*param_1 + 0x15c))(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
  }
  lVar9 = 0;
  uVar13 = 0;
  auStack_b0[1] = 0xffffffff;
  auStack_b0[2] = 0xffffffff;
  auStack_b0[3] = 0xffffffff;
  if (param_1[2] != 0) {
    iVar1 = param_1[5];
    iVar11 = 0;
    uVar2 = param_2[1];
    uVar3 = param_1[2];
    do {
      iVar4 = *(int *)(iVar11 + iVar1);
      if (((uVar2 == *(uint *)(iVar4 + 4)) && (param_2[2] == *(uint *)(iVar4 + 8))) &&
         (param_2[3] == *(uint *)(iVar4 + 0xc))) {
        auStack_b0[*(int *)(iVar4 + 0x10)] = uVar13;
      }
      uVar13 = uVar13 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar13 < uVar3);
  }
  puVar14 = &uStack_b4;
  puVar10 = auStack_b0;
  lVar16 = 4;
  do {
    if (*puVar10 != 0xffffffff) {
      puVar14 = puVar14 + 1;
      *puVar14 = *puVar10;
      lVar9 = lVar9 + 1;
    }
    puVar10 = puVar10 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar6 = (**(code **)(*param_1 + 0x144))(param_1,auStack_b0,lVar9,&uStack_e0,uStack_dc);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar7 = (**(code **)(*param_1 + 0x6c))(param_1,4,0);
  if ((uVar15 & 0x7fffffff) == (uVar7 & 0xffffffff)) {
    uStack_e0 = uStack_e0 | 0xf0000;
  }
  uStack_e0 = uStack_e0 & 0xffefffff;
  if (((param_1[0x1c] & 0x1000000U) == 0) &&
     (((param_1[0x33] & 0x20U) != 0 || ((*param_2 & 0x2000000) != 0)))) {
    uStack_e0 = uStack_e0 | 0x200000;
  }
  fn_828F6FA8(auStack_a0,0x20,0xffffffff8203579c,(&lbl_8315B5D8)[uStack_d8 & 0x1f]);
  if ((*(uint *)(iVar12 + 4) & 0x10) == 0) {
    if (param_4 != 0) {
      return 0;
    }
  }
  else if (param_4 != 0) {
    param_1[param_1[0x1a3] * 2 + 0x183] = (int)uVar5;
    param_1[(param_1[0x1a3] + 0xc2) * 2] = (int)uVar15;
    param_1[0x1a3] = param_1[0x1a3] + 1;
    uVar6 = fn_82941178(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar6 = fn_829410A8(param_1,0xffffffff82035760,uVar5,uVar15);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar6 = fn_82941178(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff82035708,uVar5,uVar15);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if ((uStack_e0 & 0xf0000) == 0xf0000) {
      fn_82936290(auStack_60,0x20,auStack_a0);
    }
    else {
      fn_82936290(auStack_60,0x20,0xffffffff820356fc);
      uVar5 = fn_82941418(param_1,uStack_e0);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = (**(code **)(*param_1 + 0x1c4))(param_1,0xffffffff820356ec,auStack_60);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff821bab90);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if ((uStack_e0 & 0xf0000) == 0xf0000) {
      return 0;
    }
    uVar5 = fn_82941178(param_1);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff820347f4,auStack_a0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 400))(param_1,auStack_a0,auStack_60,0xffffffff820347fc);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = 0xffffffff820347a8;
    goto code_r0x82947224;
  }
  uVar6 = fn_82941178(param_1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar6 = fn_829410A8(param_1,0xffffffff820356b0,uVar5,uVar15);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar6 = fn_82941178(param_1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar5 = fn_829410A8(param_1,0xffffffff82035658,uVar5,uVar15);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar15 = (ulonglong)uStack_e0;
  if ((uStack_e0 & 0xf0000) == 0xf0000) {
code_r0x82947364:
    fn_82936290(auStack_80,0x20,auStack_a0);
  }
  else {
    uStack_d0 = 0xffffffff;
    puVar14 = &uStack_cc;
    lVar9 = 4;
    do {
      uVar13 = puVar14[-1] + 1;
      *puVar14 = uVar13;
      for (; (uVar13 < 4 && ((uVar15 & 0x10000) == 0)); uVar15 = uVar15 >> 1) {
        uVar13 = *puVar14 + 1;
        *puVar14 = uVar13;
      }
      puVar14 = puVar14 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    iVar12 = 1;
    puVar14 = &uStack_cc;
    lVar9 = 4;
    do {
      if (3 < *puVar14) {
        *puVar14 = iVar12 - 1;
      }
      iVar12 = iVar12 + 1;
      puVar14 = puVar14 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if ((((uStack_cc == 0) && (iStack_c8 == 1)) && (iStack_c4 == 2)) && (iStack_c0 == 3))
    goto code_r0x82947364;
    fn_82936290(auStack_80,0x20,0xffffffff820356fc);
    uVar5 = fn_82941178(param_1);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff820347f4,auStack_80);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x184))
                      (param_1,auStack_a0,uStack_cc,iStack_c8,iStack_c4,iStack_c0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_829410A8(param_1,0xffffffff820347a8);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x1c0))(param_1,0xffffffff820356ec,auStack_80);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = 0xffffffff821bab90;
code_r0x82947224:
  uVar5 = fn_829410A8(param_1,uVar5);
  if (-1 < (int)uVar5) {
    return 0;
  }
  return uVar5;
}

