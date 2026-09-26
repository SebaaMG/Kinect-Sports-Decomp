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
extern unsigned int lbl_821AAD20;


void fn_82FEC1E0(int param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar7;
  longlong lVar6;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar4 = lbl_821AAD20;
  uVar8 = 0;
  lVar9 = param_3 + -4;
  puVar7 = (undefined8 *)(param_2 + -8);
  do {
    if (*(int *)(puVar7 + 1) == 0) break;
    puVar7 = puVar7 + 1;
    uVar8 = uVar8 + 1;
    *(undefined8 *)((int)lVar9 + 4) = *puVar7;
    lVar9 = lVar9 + 0xc;
    *(undefined4 *)lVar9 = uVar4;
  } while ((uVar8 & 0xffffffff) < 4);
  uVar11 = 0;
  puVar5 = (undefined4 *)(param_1 + 4);
  lVar9 = (uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_3 + -4;
  do {
    iVar2 = puVar5[-1];
    if (iVar2 == 0) break;
    bVar3 = false;
    uVar10 = 0;
    lVar6 = param_3;
    if ((uVar8 & 0xffffffff) != 0) {
      do {
        if (*(int *)lVar6 == iVar2) {
          bVar3 = true;
          *(undefined4 *)
           ((int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 2) + (int)param_3 + 8) =
               *puVar5;
          break;
        }
        uVar10 = uVar10 + 1;
        lVar6 = lVar6 + 0xc;
      } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    if ((!bVar3) && ((uVar8 & 0xffffffff) < 4)) {
      uVar1 = *puVar5;
      *(int *)((int)lVar9 + 4) = iVar2;
      *(undefined4 *)((int)lVar9 + 8) = uVar4;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xc;
      *(undefined4 *)lVar9 = uVar1;
    }
    uVar11 = uVar11 + 1;
    puVar5 = puVar5 + 2;
  } while (uVar11 < 4);
  if ((uVar8 & 0xffffffff) < 4) {
    *(undefined4 *)((int)((uVar8 + (uVar8 & 0x7fffffff) * 2 & 0xffffffff) << 2) + (int)param_3) = 0;
  }
  return;
}

