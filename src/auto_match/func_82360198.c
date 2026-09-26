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
extern unsigned int lbl_82193B04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82360198(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((*(int *)(param_1 + 0x2c8c) + 0xb0a) * 4 + param_1);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1d0) = 1;
  }
  fVar1 = lbl_821CA460;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2c8c) = param_3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c88);
    if (*(uint *)(param_1 + 0x2c8c) < 0xd) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(uint *)(param_1 + 0x2c90) = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(int *)(param_1 + 0x2c8c) =
           (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar1) * (float)(longlong)iVar3 +
                lbl_82193B04);
    }
    else {
      uVar2 = ((-(uint)(*(int *)(param_1 + 0x2c90) != 0) & 2) - 1) + *(uint *)(param_1 + 0x2c8c);
      *(uint *)(param_1 + 0x2c8c) = uVar2;
      if (uVar2 < 0xd) {
        iVar3 = iVar3 + 0xc;
      }
      else {
        if (uVar2 < iVar3 + 0xdU) goto code_r0x823602c4;
        iVar3 = 0xd;
      }
      *(int *)(param_1 + 0x2c8c) = iVar3;
    }
  }
code_r0x823602c4:
  if (*(int *)((*(int *)(param_1 + 0x2c8c) + 0xb0a) * 4 + param_1) == 0) {
    return;
  }
  *(float *)(param_1 + 0x2c98) = fVar1;
  *(undefined4 *)(param_1 + 0x2c94) = lbl_821CC160;
  return;
}

