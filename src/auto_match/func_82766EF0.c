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


double fn_82766EF0(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar7 = 0;
  lVar8 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
  fVar2 = lbl_821AAD20;
  if (-1 < lVar8) {
    iVar1 = *(int *)(param_1 + 8);
    do {
      uVar6 = (int)lVar7 + (int)lVar8;
      lVar3 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      uVar6 = (int)lVar3 * 6 + *(int *)(param_1 + 0x18);
      uVar5 = (ulonglong)
              CONCAT11(*(undefined1 *)
                        (*(int *)((uVar6 + 1 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 + 1 & 0xfff)),
                       *(undefined1 *)
                        (*(int *)((uVar6 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 & 0xfff)));
      uVar4 = (ulonglong)
              CONCAT11(*(undefined1 *)
                        (*(int *)((uVar6 + 3 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 + 3 & 0xfff)),
                       *(undefined1 *)
                        (*(int *)((uVar6 + 2 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 + 2 & 0xfff)));
      if (uVar5 == (param_2 & 0xffffffff)) {
        if (uVar4 == (param_3 & 0xffffffff)) {
          fVar2 = (float)(longlong)
                         CONCAT11(*(undefined1 *)
                                   (*(int *)((uVar6 + 5 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                                   (uVar6 + 5 & 0xfff)),
                                  *(undefined1 *)
                                   (*(int *)((uVar6 + 4 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                                   (uVar6 + 4 & 0xfff)));
          break;
        }
        bVar9 = uVar4 <= param_3;
      }
      else {
        bVar9 = uVar5 <= param_2;
      }
      if (bVar9) {
        lVar7 = lVar3 + 1;
      }
      else {
        lVar8 = lVar3 + -1;
      }
    } while ((int)lVar7 <= (int)lVar8);
  }
  return (double)fVar2;
}

