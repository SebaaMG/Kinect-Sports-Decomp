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
extern unsigned int *auStack_78;
extern int fn_82A29A38();
extern int fn_82ABACE8();
extern unsigned int iStack_80;


uint * fn_82ABB1E0(int param_1,ulonglong param_2,uint *param_3,uint *param_4,int *param_5,
                    int *param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint *puVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iStack_80;
  uint auStack_78 [30];
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((*(uint *)(param_1 + 4) & 0x80000) == 0) {
    fn_82A29A38();
  }
  if (*(int *)(param_1 + 0x62c) == 0) {
    fn_82A29A38();
  }
  uVar6 = param_2 & 0xffff;
  piVar1 = *(int **)(param_1 + 0x62c);
  iStack_80 = 0;
  if (0x60 < uVar6) {
LAB_82abbb3c:
    iVar8 = 1;
    goto LAB_82abb488;
  }
  if (uVar6 == 0x60) {
    iVar9 = 2;
    if ((*param_4 >> 0x14 & 0x700 | *param_4 & 0x1800) != 0x1300) {
      fn_82A29A38();
    }
    *param_3 = 7;
    puVar4 = (undefined4 *)fn_82ABACE8(param_3 + 1,*param_4,0,0,0,7,0,uVar5);
    iStack_80 = 3;
    *puVar4 = 0x440020;
    puVar4 = puVar4 + 1;
    *puVar4 = 0x4444;
code_r0x82abbb34:
    param_3 = puVar4 + 1;
    iVar8 = iVar9;
    goto LAB_82abb488;
  }
  switch((int)uVar6 + -0x19) {
  case 0:
    if ((*param_4 >> 0x14 & 0x700 | *param_4 & 0x1800) != 0x1200) {
      fn_82A29A38();
    }
    uVar5 = 8;
    goto code_r0x82abb5a8;
  case 1:
    iVar9 = 3;
    iVar8 = 3;
    uVar7 = *param_4 >> 0x14 & 0x700 | *param_4 & 0x1800;
    if ((param_4[1] >> 0x14 & 0x700 | param_4[1] & 0x1800) == 0x1300) {
      if (uVar7 != 0x1200) {
        fn_82A29A38();
      }
      *param_3 = 0x34;
      puVar4 = (undefined4 *)fn_82ABACE8(param_3 + 1,param_4[1],0,0,0,0x34,0,uVar5);
      *puVar4 = 0x440020;
      iStack_80 = 6;
      puVar4[1] = 0x4444;
      puVar4[2] = 8;
      puVar4[3] = *param_4 & 0x7ff;
      puVar4 = puVar4 + 4;
      *puVar4 = 0x29;
    }
    else {
      if (uVar7 != 0x1200) {
        fn_82A29A38();
      }
      if ((param_4[1] >> 0x14 & 0x700 | param_4[1] & 0x1800) != 0xe00) {
        fn_82A29A38();
      }
      if (0xf < (param_4[1] & 0x7ff)) {
        fn_82A29A38();
      }
      if ((param_4[1] & 0xf000000) != 0xd000000) {
        *param_3 = 9;
        puVar3 = (uint *)fn_82ABACE8(param_3 + 1,param_4[1],0,0,0,9,0,uVar5);
        param_3 = puVar3 + 1;
        iStack_80 = 2;
        *puVar3 = *param_4 & 0x7ff;
        break;
      }
      *param_3 = 0x35;
      puVar4 = (undefined4 *)fn_82ABACE8(param_3 + 1,param_4[1],0,0,0,0x35,0,uVar5);
      *puVar4 = 0x27;
      iStack_80 = 5;
      puVar4[1] = 8;
      puVar4[2] = *param_4 & 0x7ff;
      puVar4 = puVar4 + 3;
      *puVar4 = 0x29;
    }
    goto code_r0x82abbb34;
  case 2:
    iVar8 = 3;
    if ((*param_4 >> 0x14 & 0x700 | *param_4 & 0x1800) != 0xf00) {
      fn_82A29A38();
    }
    if ((*param_4 & 0x7ff) != 0) {
      fn_82A29A38();
    }
    if ((param_4[1] >> 0x14 & 0x700 | param_4[1] & 0x1800) != 0x700) {
      fn_82A29A38();
    }
    if (0xf < (param_4[1] & 0x7ff)) {
      fn_82A29A38();
    }
    *param_3 = 0x3e;
    iStack_80 = 1;
    param_3 = (uint *)fn_82ABACE8(param_3 + 1,param_4[1],0,0,0,0x3e,0,uVar5);
    break;
  case 3:
    if ((*(uint *)(param_1 + 4) & 0x20) != 0) {
      uVar5 = 0x53;
      goto code_r0x82abb614;
    }
    *param_3 = 0x2b;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    goto code_r0x82abb618;
  case 4:
  case 0xe:
    uVar5 = 0x2a;
    goto code_r0x82abb614;
  case 5:
    if ((*param_4 >> 0x14 & 0x700 | *param_4 & 0x1800) != 0x1200) {
      fn_82A29A38();
    }
    uVar5 = 0x32;
code_r0x82abb5a8:
    iVar8 = 2;
    *param_3 = uVar5;
    iStack_80 = 2;
    param_3 = param_3 + 1;
    *param_3 = *param_4 & 0x7ff;
    goto code_r0x82abb40c;
  default:
    goto LAB_82abbb3c;
  case 0xd:
    iVar8 = 2;
    if ((*param_4 >> 0x14 & 0x700 | *param_4 & 0x1800) != 0x700) {
      fn_82A29A38();
    }
    if (0xf < (*param_4 & 0x7ff)) {
      fn_82A29A38();
    }
    *param_3 = 0x3e;
    iStack_80 = 1;
    param_3 = (uint *)fn_82ABACE8(param_3 + 1,*param_4,0,0,0,0x3e,0,uVar5);
    break;
  case 0xf:
    uVar7 = *param_4;
    iVar8 = 2;
    uVar6 = ((ulonglong)(uVar7 >> 0x14) & 0x700 | (ulonglong)uVar7 & 0x1800) >> 8;
    if (uVar6 == 0x13) {
      if ((uVar7 & 0xf000000) == 0xd000000) {
        uVar7 = 0x10034;
      }
      else {
        uVar7 = 0x34;
      }
      *param_3 = uVar7;
      puVar4 = (undefined4 *)fn_82ABACE8(param_3 + 1,*param_4,0,0,0,0x34,0,uVar5);
      *puVar4 = 0x440020;
      puVar4[1] = 0x4444;
      iStack_80 = 3;
      iVar9 = *piVar1;
      *piVar1 = iVar9 + 1;
      param_3 = puVar4 + 2;
      piVar1[(iVar9 + 1) * 2 + 1] = 0;
      piVar1[(*piVar1 + 1) * 2] = *param_4;
      iVar8 = 2;
      break;
    }
    if (uVar6 != 0xe) {
      fn_82A29A38();
    }
    if ((*param_4 & 0xff0000) != 0xe40000) {
      fn_82A29A38();
    }
    *param_3 = 0x35;
    iStack_80 = 1;
    param_3 = (uint *)fn_82ABACE8(param_3 + 1,*param_4,0,0,0,0x35,0,uVar5);
    iVar9 = *piVar1;
    *piVar1 = iVar9 + 1;
    piVar1[(iVar9 + 1) * 2 + 1] = 0;
    piVar1[(*piVar1 + 1) * 2] = *param_4;
    if ((*param_4 & 0xf000000) != 0xd000000) break;
    iStack_80 = 2;
    piVar1[*piVar1 * 2 + 1] = 1;
    *param_3 = 0x27;
    goto code_r0x82abb40c;
  case 0x10:
    uVar6 = (param_2 & 0xffffffff) >> 0x10 & 7;
    iVar8 = 3;
    if (uVar6 == 1) {
      uVar7 = 0x30000;
code_r0x82abb8b8:
      uVar7 = uVar7 | 0x34;
    }
    else {
      if (uVar6 == 3) {
        uVar7 = 0x20000;
        goto code_r0x82abb8b8;
      }
      if (uVar6 == 4) {
        uVar7 = 0x50000;
        goto code_r0x82abb8b8;
      }
      if (uVar6 != 5) {
        if (uVar6 == 6) {
          uVar7 = 0x40000;
        }
        else {
          uVar7 = 0x10000;
        }
        goto code_r0x82abb8b8;
      }
      uVar7 = 0x34;
    }
    *param_3 = uVar7;
    iVar9 = 0;
    iStack_80 = 1;
    param_4 = param_4 + -1;
    lVar10 = 2;
    do {
      uVar7 = param_4[1];
      *(uint *)((int)auStack_78 + iVar9 + 8) = uVar7;
      if (((uVar5 < 0x200) || ((uVar7 & 0x2000) != 0x2000)) ||
         ((uVar7 >> 0x14 & 0x700 | uVar7 & 0x1800) != 0x200)) {
        *(undefined4 *)((int)auStack_78 + iVar9) = 0;
        param_4 = param_4 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        *(uint *)((int)auStack_78 + iVar9) = param_4[2];
        param_4 = param_4 + 2;
      }
      iVar9 = iVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar2 = fn_82ABACE8(param_3 + 1,auStack_78[2],auStack_78[0],param_7,param_8,0x34,0,uVar5);
    param_3 = (uint *)fn_82ABACE8(uVar2,auStack_78[3],auStack_78[1],param_7,param_8,0x34,0,uVar5);
    break;
  case 0x11:
    iVar8 = 1;
    if (piVar1[*piVar1 * 2 + 1] != 0) {
      *param_3 = 0x29;
      param_3[1] = 0x35;
      iStack_80 = 2;
      param_3 = (uint *)fn_82ABACE8(param_3 + 2,piVar1[(*piVar1 + 1) * 2],0,0,0,0x35,0,uVar5);
      break;
    }
    iStack_80 = 1;
    *param_3 = 0x27;
code_r0x82abb40c:
    param_3 = param_3 + 1;
    break;
  case 0x12:
    *param_3 = 0x29;
    param_3 = param_3 + 1;
    iStack_80 = 1;
    iVar8 = 1;
    if (*piVar1 != 0) {
      *piVar1 = *piVar1 + -1;
    }
    break;
  case 0x13:
    uVar5 = 6;
code_r0x82abb614:
    *param_3 = uVar5;
code_r0x82abb618:
    param_3 = param_3 + 1;
    iStack_80 = 1;
    iVar8 = 1;
    break;
  case 0x14:
    uVar6 = (param_2 & 0xffffffff) >> 0x10 & 7;
    iVar8 = 3;
    if (uVar6 == 1) {
      uVar7 = 0x30000;
code_r0x82abb9ec:
      uVar7 = uVar7 | 7;
    }
    else {
      if (uVar6 == 3) {
        uVar7 = 0x20000;
        goto code_r0x82abb9ec;
      }
      if (uVar6 == 4) {
        uVar7 = 0x50000;
        goto code_r0x82abb9ec;
      }
      if (uVar6 != 5) {
        if (uVar6 == 6) {
          uVar7 = 0x40000;
        }
        else {
          uVar7 = 0x10000;
        }
        goto code_r0x82abb9ec;
      }
      uVar7 = 7;
    }
    *param_3 = uVar7;
    iVar9 = 0;
    iStack_80 = 1;
    param_4 = param_4 + -1;
    lVar10 = 2;
    do {
      uVar7 = param_4[1];
      *(uint *)((int)auStack_78 + iVar9 + 8) = uVar7;
      if (((uVar5 < 0x200) || ((uVar7 & 0x2000) != 0x2000)) ||
         ((uVar7 >> 0x14 & 0x700 | uVar7 & 0x1800) != 0x200)) {
        *(undefined4 *)((int)auStack_78 + iVar9) = 0;
        param_4 = param_4 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        *(uint *)((int)auStack_78 + iVar9) = param_4[2];
        param_4 = param_4 + 2;
      }
      iVar9 = iVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar2 = fn_82ABACE8(param_3 + 1,auStack_78[2],auStack_78[0],param_7,param_8,7,0,uVar5);
    param_3 = (uint *)fn_82ABACE8(uVar2,auStack_78[3],auStack_78[1],param_7,param_8,7,0,uVar5);
  }
LAB_82abb488:
  *param_5 = iVar8 + -1;
  *param_6 = *param_6 + iStack_80;
  return param_3;
}

