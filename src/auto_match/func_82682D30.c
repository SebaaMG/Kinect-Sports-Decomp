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
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82681FE0();
extern int fn_82682190();
extern int fn_82682748();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82696AD0();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269F500();
extern int fn_826BD868();
extern int fn_826BD8C8();
extern unsigned int iStack_40;


void fn_82682D30(int param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined1 uVar6;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iStack_40;
  int aiStack_3c [15];
  
  uVar8 = param_4[1];
  if ((uVar8 & 0x80) == 0) {
    switch(*param_3) {
    case 0:
    case 10:
      uVar7 = 0;
      break;
    case 1:
      uVar7 = 1;
      break;
    case 2:
      uVar7 = 2;
      break;
    case 3:
    case 4:
      uVar7 = 3;
      break;
    default:
      uVar7 = 4;
      break;
    case 6:
    case 8:
      uVar7 = 6;
      break;
    case 7:
      uVar7 = 8;
    }
  }
  else {
    uVar7 = uVar8 & 0xf;
  }
  if ((uVar8 >> 6 & 1) != 0) {
    fn_82682748(*param_4,param_4,param_4[2]);
    *param_4 = 0;
  }
  if (8 < uVar7) {
    return;
  }
  if (uVar7 == 1) {
LAB_82682e18:
    param_4[1] = uVar7;
  }
  else {
    if (uVar7 == 2) {
      param_4[1] = 2;
      uVar6 = fn_82695608(param_3,param_2);
      *(undefined1 *)(param_4 + 2) = uVar6;
      return;
    }
    if (uVar7 == 3) {
      param_4[1] = 3;
      uVar9 = fn_826972E0(param_3,param_2);
      *(undefined8 *)(param_4 + 2) = uVar9;
      return;
    }
    if (uVar7 == 4) {
      fn_82696D38(aiStack_3c,param_3,param_2,0xffffffffffffffff,0);
      param_4[1] = 0x44;
      param_4[2] = aiStack_3c[0];
      *param_4 = *(undefined4 *)(param_1 + 0x10);
      fn_82681FE0(*(undefined4 *)(param_1 + 0x10),param_4);
    }
    else {
      if (uVar7 != 5) {
        if (uVar7 == 6) {
          uVar8 = 6;
          piVar5 = (int *)fn_82696AD0(param_3,param_2);
          iVar4 = (**(code **)(*piVar5 + 8))();
          if ((iVar4 < 6) || (bVar1 = true, 0x2a < iVar4)) {
            bVar1 = false;
          }
          if (bVar1) {
            iVar4 = fn_826BD8C8(piVar5);
            iVar4 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
            if (iVar4 == 7) {
              uVar8 = 7;
            }
          }
          param_4[2] = piVar5;
          param_4[1] = uVar8 | 0x40;
LAB_82683004:
          *param_4 = *(undefined4 *)(param_1 + 0x10);
          fn_82681FE0(*(undefined4 *)(param_1 + 0x10),param_4,piVar5);
          return;
        }
        if (uVar7 == 7) {
          return;
        }
        if (uVar7 != 0) {
          fn_82696AD0(param_3,param_2);
          iVar4 = fn_826BD868();
          param_4[1] = 0x48;
          piVar5 = *(int **)(iVar4 + 0x80);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)fn_8269F500();
          }
          param_4[2] = piVar5;
          goto LAB_82683004;
        }
        goto LAB_82682e18;
      }
      fn_82696D38(&iStack_40,param_3,param_2,0xffffffffffffffff,0);
      iVar4 = iStack_40;
      lVar2 = fn_82693A98(&iStack_40);
      uVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),(lVar2 + 1U & 0x7fffffff) * 2 + 0xf,
                                0);
      param_4[1] = 0x45;
      if ((uVar3 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_82682190(uVar3,iVar4,lVar2 + 1U);
      }
      param_4[2] = (int)uVar3 + 0xc;
      *param_4 = *(undefined4 *)(param_1 + 0x10);
      fn_82681FE0(*(undefined4 *)(param_1 + 0x10),param_4);
      aiStack_3c[0] = iStack_40;
      if ((uVar3 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar3);
        aiStack_3c[0] = iStack_40;
      }
    }
    lVar2 = (ulonglong)*(uint *)(aiStack_3c[0] + 8) - 1;
    *(int *)(aiStack_3c[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_3c[0]);
    }
  }
  return;
}

