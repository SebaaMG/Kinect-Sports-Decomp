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
extern int fn_82643D58();


ulonglong fn_82643E10(int param_1,ulonglong param_2,uint *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)(*param_3 >> 2);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x3b18);
  if ((param_2 & 1) == 0) {
    if (uVar6 == 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x30) + 4;
    }
    uVar6 = uVar6 + 0x1f & 0xffffffe0;
    if (uVar4 == 0) {
      uVar4 = 0x38;
    }
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x3b14) >> 2);
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar8 = uVar3 * 4 + uVar6;
    if ((ulonglong)*(uint *)(param_1 + 0x3b10) < (uVar8 & 0xffffffff)) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x3b10);
    }
    uVar7 = (ulonglong)((int)uVar8 - (int)uVar6 >> 2);
    uVar5 = (int)((~uVar7 & 0xffffffff) >> 0x1f) + (uint)(uVar4 <= uVar7) & 1;
    if (*(uint *)(param_1 + 0x3b2c) <
        (uint)(((int)(*(uint *)(param_1 + 0x3b20) - *(int *)(param_1 + 0x3b0c)) >> 2) << 2)) {
      uVar5 = 1;
    }
    if (uVar5 != 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x3b20) + 0x1f & 0xffffffe0;
      *(int *)(param_1 + 0x3b20) = *(int *)(param_1 + 0x3b0c);
      *(int *)(param_1 + 0x3b1c) = *(int *)(param_1 + 0x3b1c) + 1;
      uVar8 = uVar3 * 4 + uVar6;
      *(byte *)(param_1 + 0x2abe) = *(byte *)(param_1 + 0x2abe) | 4;
    }
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x3460);
    if (uVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x3464);
      iVar2 = *(int *)(param_1 + 0x3b1c);
      if ((iVar1 - iVar2 == -1) || ((iVar1 == iVar2 && (uVar3 < (uVar8 & 0xffffffff))))) {
        if (iVar2 != iVar1) {
          return 0;
        }
        uVar8 = uVar3;
        if ((int)(*(uint *)(param_1 + 0x3460) - (int)uVar6) >> 2 < (int)uVar4) {
          return 0;
        }
      }
    }
    fn_82643D58(param_1,uVar8,*(undefined4 *)(param_1 + 0x3b1c));
    *param_3 = ((int)uVar8 - (int)uVar6 >> 2) << 2;
    return uVar6;
  }
  if (uVar6 == 0) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x34) + 0x44;
  }
  uVar5 = *(uint *)(param_1 + 0x3b1c);
  uVar3 = (ulonglong)uVar5;
  uVar8 = (uVar6 + param_4) - 1 & ~(param_4 - 1U);
  uVar6 = uVar4 * 4 + uVar8;
  if ((ulonglong)*(uint *)(param_1 + 0x3b10) < (uVar6 & 0xffffffff)) {
    uVar8 = ((ulonglong)*(uint *)(param_1 + 0x3b20) + param_4) - 1 & ~(param_4 - 1U);
    uVar6 = uVar4 * 4 + uVar8;
    if ((((ulonglong)*(uint *)(param_1 + 0x3460) == 0) ||
        ((*(uint *)(param_1 + 0x3464) != uVar5 &&
         ((*(uint *)(param_1 + 0x3464) - uVar5 != 1 ||
          ((uVar6 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x3460))))))) &&
       ((uVar6 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x3b24))) {
      uVar3 = uVar3 + 1;
      *(int *)(param_1 + 0x3b20) = (int)uVar6;
      goto LAB_82643f04;
    }
  }
  else if (((ulonglong)*(uint *)(param_1 + 0x3460) == 0) ||
          ((*(uint *)(param_1 + 0x3464) - uVar5 != -1 &&
           ((*(uint *)(param_1 + 0x3464) != uVar5 ||
            ((uVar6 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x3460))))))) {
    *(int *)(param_1 + 0x3b18) = (int)uVar6;
LAB_82643f04:
    fn_82643D58(param_1,uVar6,uVar3);
    return uVar8;
  }
  return 0;
}

