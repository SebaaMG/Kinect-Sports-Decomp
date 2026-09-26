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
extern unsigned int *auStack_5c;
extern int fn_82E77600();
extern int fn_82E78FE0();
extern int fn_82E790C8();
extern int fn_82E79588();
extern int fn_82EE5CC8();
extern int fn_82EE5E28();
extern unsigned int iStack_60;


longlong fn_82E7A808(int *param_1,int *param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,uint *param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iStack_60;
  uint auStack_5c [23];
  
  iVar9 = (int)param_5;
  if ((param_2 == (int *)0x0) || (param_6 == (uint *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_6 = 0;
  uVar1 = param_1[0x8c];
  uVar6 = (ulonglong)uVar1;
  if (iVar9 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x34))();
    if ((int)lVar2 < 0) {
      return lVar2;
    }
  }
  else {
    if ((param_1[0x52] != 0) && ((uint)param_1[0x52] < (uint)param_1[0x8d])) {
      return -0x3ff2c94b;
    }
    if ((param_1[0x86] != 0) && (param_1[0x8d] != iVar9)) {
      return -0x3ff2c567;
    }
  }
  auStack_5c[0] = 0;
  lVar2 = (**(code **)(*param_2 + 0x14))(param_2,0,auStack_5c);
  if (lVar2 < 0) goto LAB_82e7ab08;
  uVar4 = (ulonglong)auStack_5c[0];
  if (uVar4 < (param_3 & 0xffffffff)) {
LAB_82e7a89c:
    lVar2 = -0x7ff8ffa9;
    goto LAB_82e7ab08;
  }
  if ((param_4 & 0xffffffff) == 0) {
    param_4 = uVar4 - param_3;
  }
  else if (uVar4 < (param_3 + param_4 & 0xffffffff)) goto LAB_82e7a89c;
  piVar7 = param_1 + 0x86;
  lVar2 = fn_82EE5CC8(piVar7,param_2,param_3,param_4);
  if (lVar2 < 0) goto LAB_82e7ab08;
  param_1[0x8d] = (int)param_4 + iVar9;
  if ((param_5 & 0xffffffff) < uVar6) goto LAB_82e7a89c;
  param_5 = param_5 - uVar6;
  iStack_60 = 0;
  if ((*(byte *)(param_1 + 0x8e) & 2) == 0) {
    lVar2 = fn_82E77600(param_1,&iStack_60);
    if (lVar2 == 0) {
      *param_6 = *param_6 + iStack_60;
      goto LAB_82e7a98c;
    }
    if ((int)lVar2 < 0) goto LAB_82e7ab08;
    uVar5 = *param_6 + iStack_60;
LAB_82e7aafc:
    *param_6 = uVar5;
LAB_82e7ab00:
    iVar9 = (int)lVar2;
LAB_82e7ab04:
    if (-1 < iVar9) goto LAB_82e7ab20;
  }
  else {
LAB_82e7a98c:
    uVar4 = (ulonglong)(uint)param_1[0x52];
    if (uVar4 < (param_5 & 0xffffffff)) goto LAB_82e7a89c;
    if (param_1[0x4f] == 0) {
      lVar2 = fn_82E78FE0(param_1,&iStack_60);
      if (-1 < lVar2) {
        iVar9 = (int)lVar2;
        *param_6 = *param_6 + iStack_60;
        if (iVar9 == 0) {
          do {
            if ((param_1[0x8c] == 0) ||
               (((ulonglong)(uint)param_1[0x52] - (ulonglong)(uint)param_1[0x5a] & 0xffffffff) <=
                (*param_6 + param_5 & 0xffffffff))) {
              if (((ulonglong)(uint)param_1[0x52] - (ulonglong)(uint)param_1[0x5a] & 0xffffffff) <=
                  (*param_6 + param_5 & 0xffffffff)) {
                param_5 = ((ulonglong)(uint)param_1[0x52] - (ulonglong)*param_6) - param_5;
                uVar4 = param_5;
                if ((ulonglong)(uint)param_1[0x8c] < (param_5 & 0xffffffff)) {
                  uVar4 = (ulonglong)(uint)param_1[0x8c];
                }
                lVar2 = fn_82EE5E28(piVar7,uVar4);
                if (lVar2 < 0) goto LAB_82e7ab08;
                if ((uVar4 & 0xffffffff) < (param_5 & 0xffffffff)) {
                  lVar2 = 0x400d3a98;
                }
                uVar5 = *param_6 + (int)uVar4;
                goto LAB_82e7aafc;
              }
              break;
            }
            lVar2 = fn_82E790C8(param_1,&iStack_60);
            if (lVar2 < 0) goto LAB_82e7ab08;
            uVar3 = (undefined4)lVar2;
            *param_6 = *param_6 + iStack_60;
            if ((param_1[0x78] == (uint)*(ushort *)((int)param_1 + 0x146)) &&
               (lVar2 = fn_82E79588(param_1), lVar2 < 0)) goto LAB_82e7ab08;
          } while ((uint)LZCOUNT(uVar3) >> 5 != 0);
          goto LAB_82e7ab00;
        }
        goto LAB_82e7ab04;
      }
    }
    else {
      if (uVar4 < (param_4 + param_5 & 0xffffffff)) {
        lVar8 = (uVar4 - *param_6) - param_5;
      }
      else {
        lVar8 = param_4 - *param_6;
      }
      lVar2 = fn_82EE5E28(piVar7,lVar8);
      if (-1 < lVar2) {
        uVar5 = *param_6 + (int)lVar8;
        goto LAB_82e7aafc;
      }
    }
  }
LAB_82e7ab08:
  (**(code **)(*param_1 + 0x34))(param_1);
  *param_6 = 0;
LAB_82e7ab20:
  if (*param_6 < uVar6) {
    *param_6 = 0;
  }
  else {
    *param_6 = *param_6 - uVar1;
  }
  return lVar2;
}

