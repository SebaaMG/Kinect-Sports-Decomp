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
extern unsigned int *auStack_80;
extern int fn_82547CF0();
extern unsigned int uStack_85;
extern unsigned int uStack_86;
extern unsigned int uStack_87;
extern unsigned int uStack_88;
extern unsigned int uStack_89;
extern unsigned int uStack_8a;


ulonglong fn_825484B8(int param_1,int param_2,uint param_3,uint param_4)

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
  byte abStack_90 [6];
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  uint auStack_80 [32];
  
  auStack_80[4] = 0;
  auStack_80[5] = 1;
  auStack_80[6] = 2;
  auStack_80[0] = 1;
  auStack_80[1] = 0;
  auStack_80[3] = 2;
  auStack_80[7] = 3;
  auStack_80[2] = 3;
  iVar12 = fn_82547CF0((int)param_3 >> 2,(int)param_4 >> 2,param_2 >> 2,0x10);
  param_1 = iVar12 * 0x10 + param_1;
  uVar1 = *(ushort *)(param_1 + 10);
  uVar2 = *(ushort *)(param_1 + 8);
  uVar3 = (uint)(uVar2 >> 8);
  uVar4 = (uint)(uVar2 >> 3);
  uVar5 = (uint)(uVar1 >> 8);
  abStack_90[0] = (byte)(uVar3 & 0xfffff8);
  uVar6 = (uint)(uVar1 >> 3);
  abStack_90[1] = (char)(uVar4 & 0xfc);
  uVar10 = (ulonglong)uVar2 & 0x1f;
  lVar8 = uVar10 << 3;
  abStack_90[3] = (char)(uVar5 & 0xfffff8);
  uVar11 = (ulonglong)uVar1 & 0x1f;
  lVar9 = uVar11 << 3;
  abStack_90[4] = (char)(uVar6 & 0xfc);
  abStack_90[2] = (char)lVar8;
  abStack_90[5] = (char)lVar9;
  iVar7 = (int)lVar8;
  iVar12 = (int)lVar9;
  if ((ulonglong)uVar1 < (ulonglong)uVar2) {
    uStack_8a = (char)(((uVar3 & 0xfffff8) * 2 + (uVar5 & 0xf8) + 1) / 3);
    uStack_87 = (char)(((uVar5 & 0xfffff8) * 2 + (uVar3 & 0xf8) + 1) / 3);
    uStack_89 = (char)(((uVar4 & 0xfc) * 2 + (uVar6 & 0xfc) + 1) / 3);
    uStack_86 = (char)(((uVar6 & 0xfc) * 2 + (uVar4 & 0xfc) + 1) / 3);
    uStack_88 = (char)(((int)(uVar10 << 4) + iVar12 + 1U) / 3);
    uStack_85 = (char)(((int)(uVar11 << 4) + iVar7 + 1U) / 3);
  }
  else {
    uStack_8a = (char)((int)((uVar5 & 0xf8) + (uVar3 & 0xf8) + 1) >> 1);
    uStack_89 = (char)((int)((uVar6 & 0xfc) + (uVar4 & 0xfc) + 1) >> 1);
    uStack_87 = 0xff;
    uStack_86 = 0xff;
    uStack_88 = (char)(iVar12 + iVar7 + 1 >> 1);
    uStack_85 = 0xff;
  }
  iVar12 = (*(byte *)(auStack_80[param_4 & 3] + param_1 + 0xc) >>
            ((auStack_80[(param_3 & 3) + 4] & 0x1f) << 1) & 3) * 3;
  return ((ulonglong)abStack_90[iVar12] << 8 | 0xff0000 | (ulonglong)abStack_90[iVar12 + 1]) << 8 |
         (ulonglong)abStack_90[iVar12 + 2];
}

