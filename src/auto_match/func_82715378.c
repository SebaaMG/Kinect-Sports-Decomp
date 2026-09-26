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
extern int fn_826A6A38();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E8488();


void fn_82715378(int param_1)

{
  byte bVar1;
  short sVar6;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x314);
  if (iVar9 == 0) {
    iVar9 = param_1 + 0x28;
  }
  lVar8 = 4;
  do {
    sVar6 = fn_826A6A38(param_1);
    if (sVar6 != 0) {
      fn_826E8488(iVar9,2);
      fn_826E8488(iVar9,1);
      fn_826E8488(iVar9,1);
      lVar2 = fn_826E8488(iVar9,1);
      lVar3 = fn_826E8488(iVar9,1);
      lVar4 = fn_826E8488(iVar9,1);
      iVar5 = fn_826E8488(iVar9,1);
      if (iVar5 != 0) {
        *(undefined1 *)(iVar9 + 0x15) = 0;
        if (*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) < 4) {
          fn_826E7800(iVar9,4);
        }
        *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) + 4;
      }
      if (lVar4 != 0) {
        *(undefined1 *)(iVar9 + 0x15) = 0;
        if (*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) < 4) {
          fn_826E7800(iVar9,4);
        }
        *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) + 4;
      }
      if (lVar3 != 0) {
        *(undefined1 *)(iVar9 + 0x15) = 0;
        if (*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) < 2) {
          fn_826E7800(iVar9,2);
        }
        *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) + 2;
      }
      if (lVar2 != 0) {
        *(undefined1 *)(iVar9 + 0x15) = 0;
        if (*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) < 1) {
          fn_826E7990(iVar9);
        }
        bVar1 = *(byte *)(*(int *)(iVar9 + 0x3c) + *(int *)(iVar9 + 0x2c));
        uVar7 = (ulonglong)bVar1;
        *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) + 1;
        if (bVar1 != 0) {
          do {
            *(undefined1 *)(iVar9 + 0x15) = 0;
            if (*(int *)(iVar9 + 0x30) - *(int *)(iVar9 + 0x2c) < 4) {
              fn_826E7800(iVar9,4);
            }
            iVar5 = *(int *)(iVar9 + 0x2c) + 4;
            *(undefined1 *)(iVar9 + 0x15) = 0;
            *(int *)(iVar9 + 0x2c) = iVar5;
            if (*(int *)(iVar9 + 0x30) - iVar5 < 2) {
              fn_826E7800(iVar9,2);
            }
            iVar5 = *(int *)(iVar9 + 0x2c) + 2;
            *(undefined1 *)(iVar9 + 0x15) = 0;
            *(int *)(iVar9 + 0x2c) = iVar5;
            if (*(int *)(iVar9 + 0x30) - iVar5 < 2) {
              fn_826E7800(iVar9,2);
            }
            uVar7 = uVar7 - 1;
            *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) + 2;
          } while (uVar7 != 0);
        }
      }
    }
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

