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
extern unsigned int *auStack_38;
extern int fn_82AC3628();
extern int fn_82AC3770();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_40;


uint fn_82AC4408(ulonglong param_1,int *param_2,uint *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uStack00000010;
  ulonglong uStack_40;
  ulonglong auStack_38 [7];
  
  _uStack00000010 = param_1;
  uVar5 = _uStack00000010;
  uStack00000010 = (uint)(param_1 >> 0x20);
  puVar8 = &uStack_40;
  pbVar7 = (byte *)&stack0x00000010;
  uStack_40 = param_1 & 0x3f1fff0000fc00;
  do {
    bVar1 = *(byte *)puVar8;
    bVar2 = *pbVar7;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    puVar8 = (ulonglong *)((int)puVar8 + 1);
    pbVar7 = pbVar7 + 1;
  } while (puVar8 != auStack_38);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    return 0x80004005;
  }
  uVar9 = (uint)param_2[*param_2 * 4 + 3] >> 0x10;
  uVar10 = (ulonglong)uVar9 & 7;
  uVar4 = (uint)param_2[*param_2 * 4 + 3] >> 0xd & 7;
  if ((uVar9 & 7) == 0) {
    return 0x80004005;
  }
  if (4 < (uint)uVar10) {
    return 0x80004005;
  }
  uVar3 = (ulonglong)uStack00000010 & 0x1fff;
  if ((param_4 & 0xffffffff) < uVar3) {
    return 0x80004005;
  }
  if (*param_3 <= uVar3) {
    return 0x80004005;
  }
  pbVar7 = (byte *)(param_2 + *param_2 * 4 + 4);
  if (pbVar7 != (byte *)0x0) {
    bVar1 = *pbVar7;
    uVar9 = (uint)bVar1;
    if ((bVar1 < 0x23) && (bVar1 != 0)) goto LAB_82ac44f0;
  }
  uVar9 = 0;
LAB_82ac44f0:
  if ((uVar9 == (uStack00000010 >> 0x10 & 0x1f) + 1) &&
     (_uStack00000010 = uVar5, iVar6 = fn_82AC3628(param_2,uVar3,uVar10,uVar4,pbVar7), -1 < iVar6)
     ) {
    iVar6 = fn_82AC3770(param_2,param_4 + 1,uVar10 - 1,uVar4,pbVar7);
    return iVar6 >> 0x1f & 0x80004005;
  }
  return 0x80004005;
}

