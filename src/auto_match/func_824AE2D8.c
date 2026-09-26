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
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int lbl_821CC160;


undefined8 fn_824AE2D8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  uVar1 = *(uint *)(iVar3 + 0x14);
  if (1 < uVar1) {
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = uVar1 - 1;
      if (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 0xc) >> 6 <= iVar2) {
        iVar2 = iVar2 - (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 6);
      }
      iVar2 = iVar2 * 0x40 + *(int *)(iVar3 + 0xc);
    }
    if (*(float *)(iVar2 + 0x34) < *(float *)(iVar3 + 0x28)) {
      *(undefined4 *)(iVar3 + 0x20) = lbl_821CC160;
      return 0;
    }
  }
  fn_82F4EBC0(0);
  iVar3 = *(int *)(param_1 + 0x3c);
  dVar4 = (double)fn_82F4ED08();
  iVar2 = *(int *)(param_1 + 0x3c);
  *(float *)(iVar3 + 0x20) = (float)(dVar4 + (double)*(float *)(iVar3 + 0x20));
  uVar1 = *(uint *)(iVar2 + 0x14);
  if (1 < uVar1) {
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = uVar1 - 1;
      if (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 6 <= iVar3) {
        iVar3 = iVar3 - (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 6);
      }
      iVar3 = iVar3 * 0x40 + *(int *)(iVar2 + 0xc);
    }
    if ((*(float *)(iVar2 + 0x2c) < *(float *)(iVar3 + 0x34)) &&
       (*(float *)(*(int *)(param_1 + 0x3c) + 0x20) < *(float *)(*(int *)(param_1 + 0x3c) + 0x24)))
    {
      return 1;
    }
  }
  return 0;
}

