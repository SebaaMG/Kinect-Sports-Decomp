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
extern int fn_82AC3438();
extern int fn_82AC3548();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint fn_82AC42D8(undefined8 param_1,int *param_2,uint *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uStack00000010;
  byte abStack_40 [8];
  byte abStack_38 [56];
  
  uStack00000010 = (uint)((ulonglong)param_1 >> 0x20);
  uVar6 = uStack00000010;
  pbVar10 = abStack_40;
  pbVar9 = (byte *)&stack0x00000010;
  do {
    bVar1 = *pbVar10;
    bVar2 = *pbVar9;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar10 != abStack_38);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    iVar8 = *param_2;
    uVar4 = (uint)param_2[iVar8 * 4 + 3] >> 0x10 & 7;
    uVar5 = (uint)param_2[iVar8 * 4 + 3] >> 0xd & 7;
    if (((uVar4 < 4) && (uVar3 = (ulonglong)uStack00000010 & 0x1fff, (param_4 & 0xffffffff) < uVar3)
        ) && (uVar3 < *param_3)) {
      _uStack00000010 = param_1;
      iVar7 = fn_82AC3438(param_2,uVar3,uVar4,uVar5,param_2 + iVar8 * 4 + 4);
      if (-1 < iVar7) {
        iVar8 = fn_82AC3548(param_2,param_4 + 1,uVar4 + 1,uVar5,param_2 + iVar8 * 4 + 4,
                              (uVar6 >> 0x10 & 0x1f) + 1);
        return iVar8 >> 0x1f & 0x80004005;
      }
    }
  }
  return 0x80004005;
}

