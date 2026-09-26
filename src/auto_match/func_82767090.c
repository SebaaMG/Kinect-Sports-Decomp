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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int lbl_821AAD20;


double fn_82767090(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar8 = 0;
  lVar9 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
  fVar2 = lbl_821AAD20;
  if (-1 < lVar9) {
    iVar1 = **(int **)(param_1 + 8);
    do {
      uVar7 = (int)lVar8 + (int)lVar9;
      lVar4 = (longlong)((int)uVar7 >> 1) + (ulonglong)((int)uVar7 < 0 && (uVar7 & 1) != 0);
      iVar3 = (int)lVar4 * 6 + *(int *)(param_1 + 0x18);
      uVar6 = (ulonglong)CONCAT11(*(undefined1 *)(iVar1 + iVar3 + 1),*(undefined1 *)(iVar1 + iVar3))
      ;
      uVar5 = (ulonglong)
              CONCAT11(*(undefined1 *)(iVar1 + iVar3 + 2 + 1),*(undefined1 *)(iVar1 + iVar3 + 2));
      if (uVar6 == (param_2 & 0xffffffff)) {
        if (uVar5 == (param_3 & 0xffffffff)) {
          fVar2 = (float)(longlong)
                         CONCAT11(*(undefined1 *)(iVar1 + iVar3 + 4 + 1),
                                  *(undefined1 *)(iVar1 + iVar3 + 4));
          break;
        }
        bVar10 = uVar5 <= param_3;
      }
      else {
        bVar10 = uVar6 <= param_2;
      }
      if (bVar10) {
        lVar8 = lVar4 + 1;
      }
      else {
        lVar9 = lVar4 + -1;
      }
    } while ((int)lVar8 <= (int)lVar9);
  }
  return (double)fVar2;
}

