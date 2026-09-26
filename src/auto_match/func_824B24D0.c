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
extern int fn_824B2610();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CC160;


void fn_824B24D0(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  
  fn_824B2610();
  iVar1 = *(int *)(param_1 + 0x3c);
  if (1 < *(uint *)(iVar1 + 0x14)) {
    uVar3 = 1;
    fVar2 = lbl_8218E8E8;
    do {
      if (*(uint *)(iVar1 + 0x14) <= uVar3) break;
      if (uVar3 < *(uint *)(iVar1 + 0x14)) {
        iVar4 = (*(uint *)(iVar1 + 0x14) - uVar3) + -1;
        if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0x50 <= iVar4) {
          iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x50;
        }
        iVar4 = iVar4 * 0x50 + *(int *)(iVar1 + 0xc);
      }
      else {
        iVar4 = 0;
      }
      uVar3 = uVar3 + 1;
      if (*(float *)(iVar4 + 0x14) < lbl_821954E8) {
        uVar5 = 1;
        goto LAB_824b2594;
      }
      fVar2 = fVar2 - *(float *)(iVar4 + 0x40);
    } while (lbl_821CC160 < fVar2);
  }
  uVar5 = 0;
LAB_824b2594:
  *(undefined1 *)(iVar1 + 0x1c) = uVar5;
  return;
}

