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
extern int fn_829B0868();


void fn_829B0BF8(int param_1)

{
  char cVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  
  cVar1 = *(char *)(param_1 + 0x616);
  if (((*(uint *)(param_1 + 0x560) & 0x7fe000) != 0 || (*(uint *)(param_1 + 0x560) & 0x602000) != 0)
     && (fn_829B0868(), cVar1 == '\x03')) {
    uVar8 = (ulonglong)*(ushort *)(param_1 + 0x608);
    if (*(ushort *)(param_1 + 0x608) != 0) {
      puVar9 = (undefined1 *)(*(int *)(param_1 + 0x604) + -1);
      do {
        pbVar3 = puVar9 + 3;
        puVar9[1] = *(undefined1 *)((uint)(byte)puVar9[1] + *(int *)(param_1 + 0x638));
        puVar9[2] = *(undefined1 *)((uint)(byte)puVar9[2] + *(int *)(param_1 + 0x638));
        puVar9 = puVar9 + 3;
        *puVar9 = *(undefined1 *)((uint)*pbVar3 + *(int *)(param_1 + 0x638));
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if (((*(uint *)(param_1 + 0x560) & 8) != 0) && (cVar1 == '\x03')) {
    uVar10 = 8 - *(byte *)(param_1 + 0x650);
    uVar4 = 8 - *(byte *)(param_1 + 0x651);
    uVar2 = *(ushort *)(param_1 + 0x608);
    uVar6 = 8 - *(byte *)(param_1 + 0x652);
    if (((int)uVar10 < 0) || (8 < (int)uVar10)) {
      uVar10 = 0;
    }
    if (((int)uVar4 < 0) || (8 < (int)uVar4)) {
      uVar4 = 0;
    }
    if (((int)uVar6 < 0) || (8 < (int)uVar6)) {
      uVar6 = 0;
    }
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        iVar11 = uVar5 * 3;
        *(byte *)(*(int *)(param_1 + 0x604) + iVar11) =
             *(byte *)(*(int *)(param_1 + 0x604) + iVar11) >> (uVar10 & 0x3f);
        uVar5 = uVar5 + 1 & 0xffff;
        iVar7 = *(int *)(param_1 + 0x604) + iVar11;
        *(byte *)(iVar7 + 1) = *(byte *)(iVar7 + 1) >> (uVar4 & 0x3f);
        iVar11 = *(int *)(param_1 + 0x604) + iVar11;
        *(byte *)(iVar11 + 2) = *(byte *)(iVar11 + 2) >> (uVar6 & 0x3f);
      } while (uVar5 < uVar2);
    }
  }
  return;
}

