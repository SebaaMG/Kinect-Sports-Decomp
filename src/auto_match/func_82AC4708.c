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
extern int fn_82AC3438();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82AC4708(ulonglong param_1,int *param_2,uint *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uStack00000010;
  byte abStack_40 [8];
  byte abStack_38 [56];
  
  uVar3 = param_1 >> 0x20 & 0x1fff;
  pbVar9 = abStack_40;
  pbVar8 = (byte *)&stack0x00000010;
  do {
    bVar1 = *pbVar9;
    bVar2 = *pbVar8;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (pbVar9 != abStack_38);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    iVar7 = *param_2;
    uVar4 = (uint)param_2[iVar7 * 4 + 3] >> 0x10 & 7;
    uVar5 = (uint)param_2[iVar7 * 4 + 3] >> 0xd & 7;
    if ((((param_4 & 0xffffffff) < uVar3) || ((param_1 & 2) == 0)) && (uVar3 < *param_3)) {
      uStack00000010 = param_1;
      iVar6 = fn_82AC3438(param_2,uVar3,uVar4,uVar5,param_2 + iVar7 * 4 + 4);
      if ((-1 < iVar6) &&
         (((param_1 & 0x200000000000) != 0 ||
          (iVar7 = fn_82AC3438(param_2,param_4 + 1,uVar4,uVar5,param_2 + iVar7 * 4 + 4),
          -1 < iVar7)))) {
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

