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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F7C468();
extern int fn_82F857F8();
extern int fn_82F85978();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000016;
extern unsigned int uStack_50;


ulonglong fn_82F88978(ulonglong param_1,uint *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ushort uVar5;
  int iVar3;
  uint uVar4;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ushort *puVar10;
  ushort uStack00000016;
  uint uStack_50;
  
  uVar2 = ZEXT48(&stack0x00000000);
  uVar5 = (ushort)param_1;
  if (((param_1 & 0xffff) == 0xffff) ||
     ((uVar4 = param_2[3], (uVar4 & 1) == 0 && (((uVar4 & 0x80) == 0 || ((uVar4 & 2) != 0)))))) {
LAB_82f88bc4:
    param_1 = 0xffffffffffffffff;
  }
  else {
    uStack00000016 = uVar5;
    if (param_2[2] == 0) {
      fn_82F857F8(param_2);
    }
    if ((param_2[3] & 0x40) == 0) {
      iVar3 = fn_82F7C468(param_2);
      puVar9 = &lbl_831BBF60;
      puVar8 = puVar9;
      if ((iVar3 != -1) && (iVar3 = fn_82F7C468(param_2), iVar3 != -2)) {
        iVar3 = fn_82F7C468(param_2);
        uVar4 = fn_82F7C468(param_2);
        puVar8 = (undefined *)((uVar4 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar3 >> 5]);
      }
      if ((puVar8[4] & 0x80) != 0) {
        iVar3 = fn_82F7C468(param_2);
        if ((iVar3 != -1) && (iVar3 = fn_82F7C468(param_2), iVar3 != -2)) {
          iVar3 = fn_82F7C468(param_2);
          uVar4 = fn_82F7C468(param_2);
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x48 + (&lbl_8329F620)[iVar3 >> 5]);
        }
        if ((puVar9[0x28] & 0xfe) == 0) {
          iVar3 = fn_82F85978(uVar2 - 0x50,uVar2 - 0x4c,5,param_1);
          if (iVar3 != 0) goto LAB_82f88bc4;
          uVar6 = (ulonglong)uStack_50;
        }
        else {
          uVar6 = 2;
          uStack_50 = 2;
        }
        if ((param_2[2] + uVar6 & 0xffffffff) <= (ulonglong)*param_2) {
LAB_82f88b0c:
          if (-1 < (longlong)(uVar6 - 1)) {
            lVar7 = (uVar6 - 1) + (uVar2 - 0x4b);
            do {
              uVar4 = *param_2;
              lVar7 = lVar7 + -1;
              uVar1 = *(undefined1 *)lVar7;
              *param_2 = uVar4 - 1;
              *(undefined1 *)(uVar4 - 1) = uVar1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            uVar6 = (ulonglong)uStack_50;
          }
          param_2[1] = param_2[1] + (int)uVar6;
          param_2[3] = param_2[3] & 0xffffffee | 1;
          return param_1;
        }
        if ((param_2[1] == 0) && ((int)uVar6 <= (int)param_2[6])) {
          *param_2 = (uint)(param_2[2] + uVar6);
          goto LAB_82f88b0c;
        }
        goto LAB_82f88bc4;
      }
    }
    if (*param_2 < param_2[2] + 2) {
      if ((param_2[1] != 0) || (param_2[6] < 2)) goto LAB_82f88bc4;
      *param_2 = param_2[2] + 2;
    }
    uVar4 = *param_2;
    puVar10 = (ushort *)(uVar4 - 2);
    *param_2 = (uint)puVar10;
    if ((param_2[3] & 0x40) == 0) {
      *puVar10 = uVar5;
    }
    else if ((ulonglong)*puVar10 != (param_1 & 0xffff)) {
      *param_2 = uVar4;
      goto LAB_82f88bc4;
    }
    param_2[1] = param_2[1] + 2;
    param_2[3] = param_2[3] & 0xffffffee | 1;
  }
  return param_1;
}

