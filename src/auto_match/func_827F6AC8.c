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


void fn_827F6AC8(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  longlong lVar11;
  
  uVar3 = 0;
  iVar10 = *(int *)(param_1 + 0x84);
  if (*(short *)(param_1 + 0x32) == 0) {
    return;
  }
  puVar2 = (ushort *)(*(int *)(param_1 + 8) + 0x30);
  do {
    uVar6 = (uint)*puVar2;
    if (uVar6 != 0xffff) {
      if (uVar6 == 0xeeee) {
        *(float *)(iVar10 + 4) = -*(float *)(iVar10 + 4);
        *(float *)(iVar10 + 8) = -*(float *)(iVar10 + 8);
        *(float *)(iVar10 + 0x10) = -*(float *)(iVar10 + 0x10);
      }
      else {
        puVar8 = (undefined4 *)(uVar6 * 0x30 + *(int *)(param_1 + 0x84));
        iVar4 = iVar10 - (int)puVar8;
        lVar11 = 0xc;
        do {
          uVar1 = *(undefined4 *)(iVar4 + (int)puVar8);
          *(undefined4 *)(iVar4 + (int)puVar8) = *puVar8;
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    pfVar9 = (float *)(iVar10 + 4);
    pfVar7 = (float *)(iVar10 + 8);
    pfVar5 = (float *)(iVar10 + 0x10);
    uVar3 = uVar3 + 1;
    iVar10 = iVar10 + 0x30;
    puVar2 = puVar2 + 0x1a;
    *pfVar9 = -*pfVar9;
    *pfVar7 = -*pfVar7;
    *pfVar5 = -*pfVar5;
  } while (uVar3 < *(ushort *)(param_1 + 0x32));
  return;
}

