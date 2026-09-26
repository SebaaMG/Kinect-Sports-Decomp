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
extern unsigned int *auStack_150;
extern int fn_82A1F2B8();
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68CC0();
extern int fn_82F6AB08();
extern int fn_82F6BB98();
extern int fn_82F70748();
extern int fn_82F7C468();
extern int fn_82F7C9A0();


ulonglong fn_82F67A88(ulonglong param_1,ulonglong param_2,ulonglong param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_150 [336];
  
  if (((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) {
    if ((param_4 != (int *)0x0) &&
       (((param_1 & 0xffffffff) != 0 &&
        (trapWord(6,param_2,0), (param_3 & 0xffffffff) <= 0xffffffff / (param_2 & 0xffffffff))))) {
      uVar9 = (longlong)(int)param_2 * (longlong)(int)param_3;
      iVar5 = fn_82F6AB08();
      if ((param_4 == (int *)(iVar5 + 0x20)) ||
         (iVar5 = fn_82F6AB08(), param_4 == (int *)(iVar5 + 0x40))) {
        uVar11 = uVar9 & 0xffffffff;
        while (uVar11 != 0) {
          uVar11 = uVar9;
          if (0xfe < (uVar9 & 0xffffffff)) {
            uVar11 = 0xff;
          }
          fn_82F68CC0(auStack_150,param_1,uVar11);
          auStack_150[(int)uVar11] = 0;
          fn_82A1F2B8(auStack_150);
          uVar9 = uVar9 - uVar11;
          uVar11 = uVar9;
        }
        return param_3;
      }
      uVar11 = uVar9;
      if ((param_4[3] & 0x10cU) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = (ulonglong)(uint)param_4[6];
      }
joined_r0x82f67b3c:
      do {
        if ((uVar11 & 0xffffffff) == 0) {
          return param_3;
        }
        uVar6 = param_4[3] & 0x108;
        if (uVar6 != 0) {
          uVar1 = param_4[1];
          if (uVar1 != 0) {
            if ((int)uVar1 < 0) {
              param_4[3] = param_4[3] | 0x20;
              uVar9 = (uVar9 - uVar11 & 0xffffffff) / (param_2 & 0xffffffff);
              goto LAB_82f67c8c;
            }
            uVar10 = (ulonglong)uVar1;
            if ((uVar11 & 0xffffffff) < (ulonglong)uVar1) {
              uVar10 = uVar11;
            }
            fn_82F68CC0(*param_4,param_1,uVar10);
            uVar11 = uVar11 - uVar10;
            param_1 = uVar10 + param_1;
            *param_4 = *param_4 + (int)uVar10;
            param_4[1] = param_4[1] - (int)uVar10;
            goto joined_r0x82f67b3c;
          }
        }
        if ((uVar11 & 0xffffffff) < uVar8) {
          iVar5 = fn_82F70748(*(undefined1 *)param_1,param_4);
          if (iVar5 == -1) {
LAB_82f67c94:
            uVar9 = (uVar9 - uVar11 & 0xffffffff) / (param_2 & 0xffffffff);
LAB_82f67c8c:
            trapWord(6,param_2,0);
            return uVar9;
          }
          uVar8 = (ulonglong)(uint)param_4[6];
          param_1 = param_1 + 1;
          uVar11 = uVar11 - 1;
          if (param_4[6] < 1) {
            uVar8 = 1;
          }
        }
        else {
          if ((uVar6 != 0) && (iVar5 = fn_82F6BB98(param_4), iVar5 != 0)) goto LAB_82f67c94;
          uVar10 = uVar11;
          if (uVar8 != 0) {
            trapWord(6,uVar8,0);
            uVar10 = (longlong)(int)((uVar11 & 0xffffffff) / uVar8) * (longlong)(int)uVar8;
          }
          uVar2 = fn_82F7C468(param_4);
          uVar3 = fn_82F7C9A0(uVar2,param_1,uVar10);
          if ((int)uVar3 == -1) goto LAB_82f67c20;
          uVar7 = uVar10;
          if ((uVar3 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
            uVar7 = uVar3;
          }
          uVar11 = uVar11 - uVar7;
          param_1 = uVar7 + param_1;
          if ((uVar3 & 0xffffffff) < (uVar10 & 0xffffffff)) {
LAB_82f67c20:
            trapWord(6,param_2,0);
            param_4[3] = param_4[3] | 0x20;
            return (uVar9 - uVar11 & 0xffffffff) / (param_2 & 0xffffffff);
          }
        }
      } while( true );
    }
    puVar4 = (undefined4 *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
  }
  return 0;
}

