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
extern int fn_82FA5060();
extern unsigned int lbl_82005758;
extern unsigned int lbl_831BC768;


undefined8 fn_8302A490(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)(*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x10)) /
          (double)(*(int *)(param_1 + 0x14) - 1);
  *(float *)(param_1 + 0x18) = (float)(lbl_82005758 / dVar5);
  iVar2 = fn_82FA5060(lbl_831BC768,*(int *)(param_1 + 0x14) << 2);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar2 = 0;
      do {
        dVar4 = (double)(**(code **)(param_1 + 8))
                                  ((double)uVar3 * dVar5 + (double)*(float *)(param_1 + 0x10));
        uVar3 = uVar3 + 1;
        *(float *)(*(int *)(param_1 + 4) + iVar2) = (float)dVar4;
        iVar2 = iVar2 + 4;
      } while (uVar3 < *(uint *)(param_1 + 0x14));
    }
    uVar1 = 1;
  }
  return uVar1;
}

