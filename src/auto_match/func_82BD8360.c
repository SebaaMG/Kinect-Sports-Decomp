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


undefined8 fn_82BD8360(int param_1,ulonglong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  uVar1 = *(ushort *)(param_1 + 0x20);
  uVar2 = *(ushort *)(param_1 + 0x46);
  *param_3 = 0;
  uVar7 = (uVar7 / 0x14 & 0xffff) + (ulonglong)uVar1 & 0xffff;
  uVar7 = uVar7 + (ulonglong)(uint)((int)uVar7 >> 0xb) * -0x800 & 0xffff;
  uVar3 = uVar7 + 0x800 & 0xffff;
  uVar5 = uVar3 - uVar2;
  lVar6 = uVar3 + uVar2;
  uVar3 = uVar5 + ((longlong)((int)uVar5 >> 0xb) +
                   (ulonglong)((int)uVar5 < 0 && (uVar5 & 0x7ff) != 0) & 0x1fffff) * -0x800 & 0xffff
  ;
  uVar5 = lVar6 + (ulonglong)(uint)((int)lVar6 >> 0xb) * -0x800 & 0xffff;
  param_2 = param_2 & 0xffff;
  if (uVar3 < uVar5) {
    if ((param_2 < uVar3) || (uVar5 < param_2)) {
code_r0x82bd83f8:
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      return 2;
    }
code_r0x82bd8448:
    if (param_2 < uVar7) {
code_r0x82bd8434:
      uVar4 = 1;
      goto code_r0x82bd8438;
    }
  }
  else {
    if ((param_2 < uVar3) && (uVar5 < param_2)) goto code_r0x82bd83f8;
    if (uVar7 < uVar5) {
      if ((param_2 < uVar7) || (uVar5 < param_2)) goto code_r0x82bd8434;
    }
    else if (uVar3 <= param_2) goto code_r0x82bd8448;
  }
  uVar4 = 0;
  uVar7 = (param_2 - uVar7) + 0x800;
  iVar8 = (int)uVar7;
  *param_3 = (longlong)
             (int)((iVar8 + ((iVar8 >> 0xb) + (uint)(iVar8 < 0 && (uVar7 & 0x7ff) != 0)) * -0x800 &
                   0xffff) * 0x14) + *(longlong *)(param_1 + 0x10);
code_r0x82bd8438:
  *(undefined4 *)(param_1 + 0x178) = 0;
  return uVar4;
}

