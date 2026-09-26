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
extern int fn_8249B210();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;
extern int (*lbl_83276794)();
extern unsigned int lbl_8327F894;


void fn_8249C5E8(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  double dVar6;
  
  dVar6 = (double)lbl_821CC160;
  fVar1 = lbl_821916FC;
  if (dVar6 < (double)*(float *)(param_1 + 0x94)) {
    fVar1 = (float)((double)*(float *)(param_1 + 0x94) - (double)lbl_8327F894);
  }
  *(float *)(param_1 + 0x94) = fVar1;
  if ((lbl_83265A58 != 1) && (lbl_83265A5C == 0)) {
    if (lbl_83276794 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*lbl_83276794)();
    }
    if (iVar2 == 0) {
      uVar3 = 0;
      if (lbl_8326B4D8 == 0) {
        piVar4 = &lbl_8326B4C8;
        lVar5 = 4;
        do {
          iVar2 = *piVar4;
          if (iVar2 != 0) {
            uVar3 = *(uint *)(*(int *)(iVar2 + 0x34) * 0x28 + iVar2 + 0x38) & 0x10 | uVar3;
          }
          piVar4 = piVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        if (uVar3 != 0) {
          fn_8249B210(param_1,1);
          return;
        }
      }
      piVar4 = (int *)(param_1 + 0x10);
      lVar5 = 2;
      do {
        piVar4 = piVar4 + 1;
        *(float *)(*piVar4 + 0x30) = (float)dVar6;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}

