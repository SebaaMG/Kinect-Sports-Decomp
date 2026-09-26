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
#define _uStack00000010 ((*(U64*)&uStack00000010))
extern int fn_82AC3FB0();
extern unsigned int uStack00000010;
extern unsigned int uStack00000014;


undefined8
fn_82AC4188(ulonglong param_1,int *param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uStack00000010;
  uint uStack00000014;
  
  uStack00000010 = (uint)(param_1 >> 0x20);
  uVar4 = uStack00000010;
  uVar10 = (ulonglong)(uStack00000010 >> 0xc) & 7;
  if (uVar10 < 7) {
    uVar11 = 0;
    if ((uStack00000010 >> 0xc & 7) != 0) {
      uStack00000014 = (uint)param_1;
      uVar5 = uStack00000014;
      uVar1 = (ulonglong)uStack00000010;
      uVar12 = 0;
      _uStack00000010 = param_1;
      do {
        uVar8 = (uVar1 & 0xfff) + uVar11;
        if ((ulonglong)*param_3 <= (uVar8 & 0x7fffffff) << 1) goto LAB_82ac41b8;
        uVar2 = uVar4 >> 0x10;
        uVar3 = uVar5 >> 0xc & 0xf;
        if ((uVar3 == 3) || (uVar3 == 4)) {
          uVar9 = 1;
        }
        else if ((uVar3 == 0xd) || (uVar3 == 0xe)) {
          uVar9 = 0;
        }
        else {
          uVar9 = (~(param_1 & 0xffffffff) & 0xffffffff) >> 9 & 1;
        }
        iVar7 = fn_82AC3FB0(param_4,uVar8,
                              (((uVar5 & 3) << 4 | uVar4 >> 0x1c) & 1 << ((uint)uVar11 & 0x3f)) != 0
                              ,(2 << (uVar12 & 0x3f) & uVar2 & 0xfff) != 0,
                              (1 << (uVar12 & 0x3f) & uVar2 & 0xfff) != 0,uVar9,param_3,param_5);
        if (iVar7 < 0) goto LAB_82ac41b8;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + 2;
      } while ((uVar11 & 0xffffffff) < uVar10);
    }
    if ((param_1 & 0x800000000000) != 0) {
      param_2[*param_2 * 4 + 3] = param_2[*param_2 * 4 + 3] & 0xffffefff;
    }
    uVar6 = 0;
  }
  else {
LAB_82ac41b8:
    uVar6 = 0xffffffff80004005;
  }
  return uVar6;
}

