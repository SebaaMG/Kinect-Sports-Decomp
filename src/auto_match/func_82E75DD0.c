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
extern unsigned int *auStack_68;
extern int fn_82E50BE8();
extern int fn_82E5EE48();
extern int fn_82E74420();
extern int fn_82E74E58();
extern int fn_82E74F58();
extern int fn_82E75338();
extern int fn_82E75BB8();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


ulonglong fn_82E75DD0(int *param_1,int *param_2,undefined8 param_3,undefined4 *param_4,
                       uint *param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar7;
  undefined1 uVar8;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uStack_70;
  uint uStack_6c;
  ulonglong auStack_68 [13];
  
  if ((param_4 == (undefined4 *)0x0) || (param_5 == (uint *)0x0)) {
    return 0xffffffff80004003;
  }
  if (param_1[0x1a] == 0) {
    uVar4 = fn_82E75BB8();
    return uVar4;
  }
  *param_4 = 0;
  *param_5 = 0;
  uStack_6c = 0;
  auStack_68[0] = 0;
  uVar4 = (**(code **)(*param_2 + 0xb4))(param_2,&uStack_6c);
  uStack_70 = (uint)uVar4;
  if (-1 < (longlong)uVar4) {
    uVar4 = fn_82E74F58(param_1,param_2,param_3,auStack_68);
    uStack_70 = (uint)uVar4;
    if (-1 < (longlong)uVar4) {
      lVar11 = *(longlong *)(param_1 + 2) * 10000 + auStack_68[0];
      iVar7 = fn_82E5EE48(param_1[0x1c]);
      if (iVar7 == 0) {
        uVar1 = *(ushort *)(param_1[0x1c] + 0xc);
        if (((ulonglong)uVar1 != 0) &&
           (trapWord(6,(ulonglong)uVar1,0),
           (ulonglong)uStack_6c != (longlong)(int)(uStack_6c / uVar1) * (longlong)(int)(uint)uVar1))
        {
          uVar4 = 0xffffffff80070057;
          uStack_70 = 0x80070057;
          goto LAB_82e760fc;
        }
      }
      uVar12 = 0;
      if ((ulonglong)uStack_6c == 0) {
        uVar4 = uVar4 & 0xffffffff;
      }
      else {
        do {
          piVar2 = (int *)param_1[0x1e];
          if (piVar2 == (int *)0x0) {
            uVar8 = fn_82E75338(param_1);
            if (param_1[0x18] == 0) {
              trapWord(6,(ulonglong)*(uint *)(param_1[0x1c] + 8),0);
              uVar4 = (uVar12 * 1000 & 0xffffffff) / (ulonglong)*(uint *)(param_1[0x1c] + 8);
            }
            else {
              lVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
              trapDoubleWordImmediate(6,(ulonglong)uStack_6c,0);
              uVar4 = (lVar5 * (uVar12 & 0xffffffff)) / (ulonglong)uStack_6c;
            }
            lVar5 = uVar4 + lVar11 / 10000;
            auStack_68[0] = 0;
            uStack_70 = fn_82E74E58(param_1,lVar5 * 10000,param_1[0x1b],auStack_68);
            uVar6 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
            uVar4 = (ulonglong)uStack_70;
            *(undefined8 *)(param_1 + 0x10) = uVar6;
            if ((int)uStack_70 < 0) goto LAB_82e760fc;
            uVar4 = fn_82E50BE8(0x130,0,0,0,0);
            if ((uVar4 & 0xffffffff) == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = fn_82E74420(uVar4,param_2,uVar12,param_1[0x1b],lVar5,auStack_68[0],
                                      *(undefined2 *)(param_1 + 5),uVar8);
            }
            param_1[0x1e] = iVar7;
            if (iVar7 == 0) {
              uVar4 = 0xffffffff8007000e;
              uStack_70 = 0x8007000e;
              break;
            }
            uVar4 = (ulonglong)uStack_70;
            if ((int)uStack_70 < 0) goto LAB_82e760fc;
            uVar10 = (ulonglong)uStack_6c;
            uVar9 = (ulonglong)(uint)param_1[0x1b];
            uVar13 = uVar10;
            if (uVar9 < (uVar10 - uVar12 & 0xffffffff)) goto LAB_82e7604c;
          }
          else {
            auStack_68[0] = auStack_68[0] & 0xffffffff;
            uVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2,0,auStack_68);
            uStack_70 = (uint)uVar4;
            if ((longlong)uVar4 < 0) goto LAB_82e760fc;
            uVar9 = auStack_68[0] >> 0x20;
            uVar10 = (ulonglong)uStack_6c;
LAB_82e7604c:
            uVar13 = uVar9 + uVar12;
          }
          if ((uint)param_1[0x1b] <= *(uint *)(param_1[0x1e] + 0x2c)) {
            param_4[*param_5] = param_1[0x1e];
            *param_5 = *param_5 + 1;
            if (*(longlong *)(param_1 + 0x12) == 0) {
              *(ulonglong *)(param_1 + 0xc) =
                   (ulonglong)(*(longlong *)(param_1[0x1e] + 0x10) - *(longlong *)(param_1 + 2)) /
                   100000000;
            }
            uVar10 = (ulonglong)uStack_6c;
            *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 1;
            *(ulonglong *)(param_1 + 0x14) = uVar10 + *(longlong *)(param_1 + 0x14);
            if ((uint)param_1[0x16] < uVar10) {
              param_1[0x16] = uStack_6c;
            }
            uVar4 = (ulonglong)uStack_70;
            param_1[0x1e] = 0;
          }
          uVar12 = uVar13;
        } while ((uVar13 & 0xffffffff) < uVar10);
      }
      if (-1 < (int)uVar4) {
        return uVar4;
      }
    }
  }
LAB_82e760fc:
  uVar14 = 0;
  if (*param_5 != 0) {
    param_4 = param_4 + -1;
    do {
      puVar3 = (undefined4 *)param_4[1];
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      param_4 = param_4 + 1;
      *param_4 = 0;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *param_5);
    uVar4 = (ulonglong)uStack_70;
  }
  *param_5 = 0;
  return uVar4;
}

