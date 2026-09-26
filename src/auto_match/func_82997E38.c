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


undefined8 fn_82997E38(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  int aiStack_20 [6];
  
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar7 = 0;
  aiStack_20[0] = 0;
  aiStack_20[1] = 0;
  uVar8 = 0;
  aiStack_20[2] = 0;
  aiStack_20[3] = 0;
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    iVar10 = 0;
    iVar3 = *(int *)(param_1 + 0x14);
    do {
      uVar4 = *(uint *)(*(int *)(*(int *)(iVar10 + iVar2) * 4 + iVar3) + 0x10);
      if (3 < uVar4) {
        return 0;
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + 4;
      aiStack_20[uVar4] = 1;
    } while (uVar8 < uVar1);
  }
  bVar6 = true;
  bVar5 = false;
  piVar9 = aiStack_20;
  lVar11 = 3;
  do {
    if (*piVar9 == 0) {
      bVar5 = true;
    }
    else {
      bVar6 = false;
    }
    piVar9 = piVar9 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if ((bVar5) && (!bVar6)) {
    uVar7 = 1;
  }
  return uVar7;
}

