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
extern unsigned int *auStack_60;
extern int fn_82547CF0();
extern unsigned int uStack_65;
extern unsigned int uStack_66;
extern unsigned int uStack_67;
extern unsigned int uStack_68;
extern unsigned int uStack_69;
extern unsigned int uStack_6a;


ulonglong fn_825482E0(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  byte abStack_70 [6];
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  uint auStack_60 [24];
  
  auStack_60[0] = 0;
  auStack_60[1] = 1;
  auStack_60[2] = 2;
  auStack_60[3] = 3;
  iVar12 = fn_82547CF0((int)param_3 >> 2,0,param_2 >> 2,0x10);
  param_1 = iVar12 * 0x10 + param_1;
  uVar1 = *(ushort *)(param_1 + 8);
  uVar2 = *(ushort *)(param_1 + 10);
  uVar3 = (uint)(uVar1 >> 8);
  uVar4 = (uint)(uVar1 >> 3);
  uVar5 = (uint)(uVar2 >> 8);
  abStack_70[0] = (byte)(uVar3 & 0xfffff8);
  uVar6 = (uint)(uVar2 >> 3);
  abStack_70[1] = (char)(uVar4 & 0xfc);
  uVar10 = (ulonglong)uVar1 & 0x1f;
  lVar8 = uVar10 << 3;
  abStack_70[3] = (char)(uVar5 & 0xfffff8);
  uVar11 = (ulonglong)uVar2 & 0x1f;
  lVar9 = uVar11 << 3;
  abStack_70[4] = (char)(uVar6 & 0xfc);
  abStack_70[2] = (char)lVar8;
  abStack_70[5] = (char)lVar9;
  iVar7 = (int)lVar8;
  iVar12 = (int)lVar9;
  if ((ulonglong)uVar2 < (ulonglong)uVar1) {
    uStack_6a = (char)(((uVar3 & 0xfffff8) * 2 + (uVar5 & 0xf8) + 1) / 3);
    uStack_67 = (char)(((uVar5 & 0xfffff8) * 2 + (uVar3 & 0xf8) + 1) / 3);
    uStack_69 = (char)(((uVar4 & 0xfc) * 2 + (uVar6 & 0xfc) + 1) / 3);
    uStack_66 = (char)(((uVar6 & 0xfc) * 2 + (uVar4 & 0xfc) + 1) / 3);
    uStack_68 = (char)(((int)(uVar10 << 4) + iVar12 + 1U) / 3);
    uStack_65 = (char)(((int)(uVar11 << 4) + iVar7 + 1U) / 3);
  }
  else {
    uStack_6a = (char)((int)((uVar5 & 0xf8) + (uVar3 & 0xf8) + 1) >> 1);
    uStack_69 = (char)((int)((uVar6 & 0xfc) + (uVar4 & 0xfc) + 1) >> 1);
    uStack_67 = 0xff;
    uStack_66 = 0xff;
    uStack_68 = (char)(iVar12 + iVar7 + 1 >> 1);
    uStack_65 = 0xff;
  }
  iVar12 = (*(byte *)(param_1 + 0xd) >> ((auStack_60[param_3 & 3] & 0x1f) << 1) & 3) * 3;
  return ((ulonglong)abStack_70[iVar12] << 8 | 0xff0000 | (ulonglong)abStack_70[iVar12 + 1]) << 8 |
         (ulonglong)abStack_70[iVar12 + 2];
}

