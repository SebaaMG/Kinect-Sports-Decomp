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
extern unsigned int lbl_821CC160;


void fn_825C8BC0(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  fVar5 = lbl_821CC160;
  iVar6 = 0;
  do {
    iVar7 = iVar6 * 0x10 + param_2;
    uVar3 = *(uint *)(iVar7 + 0xc);
    if ((uVar3 & 0x80000000) != 0) {
      fVar2 = *(float *)(iVar7 + 0x14);
      fVar4 = *(float *)(iVar7 + 0x10) - fVar2;
      fVar1 = (float)((double)*(float *)(iVar7 + 0x18) * param_1);
      if (fVar1 <= ABS(fVar4)) {
        if (fVar4 <= fVar5) {
          fVar2 = fVar2 - fVar1;
        }
        else {
          fVar2 = fVar2 + fVar1;
        }
        *(float *)(iVar7 + 0x14) = fVar2;
      }
      else {
        *(float *)(iVar7 + 0x14) = *(float *)(iVar7 + 0x10);
        *(uint *)(iVar7 + 0xc) = uVar3 & 0x7fffffff;
        if ((uVar3 & 0x40000000) == 0) {
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_2 + 0x54) + 0x134);
          }
          else {
            *(undefined4 *)((iVar6 + 1) * 4 + param_2) =
                 *(undefined4 *)(*(int *)(param_2 + 0x54) + 0x14c);
          }
        }
        else {
          *(undefined4 *)((iVar6 + 1) * 4 + param_2) = 0;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  if (*(int *)(param_2 + 0x2c) == 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x44) + param_1);
  *(float *)(param_2 + 0x44) = fVar1;
  if (fVar1 <= *(float *)(param_2 + 0x40)) {
    return;
  }
  *(float *)(param_2 + 0x44) = fVar5;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}

