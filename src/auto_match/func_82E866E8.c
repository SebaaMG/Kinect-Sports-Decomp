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
extern float lbl_82015610;
extern unsigned int lbl_8215F6A8;


void fn_82E866E8(int param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  uVar1 = *(uint *)(param_1 + 0x7658);
  uVar2 = *(uint *)(param_1 + 0xa1c);
  dVar3 = (double)(*(int *)(param_1 + 0x7650) + *(uint *)(param_1 + 0x7654) + uVar1);
  if ((dVar3 <= (double)((longlong)
                         ((double)(((ulonglong)*(uint *)(param_1 + 0x2d8) & 0x3fffffff) << 2) *
                         *(double *)(param_1 + 0x7648)) & 0xffffffff) * lbl_82015610) ||
     ((double)uVar1 <= dVar3 * lbl_82015610)) {
    if (((double)uVar1 <= dVar3 * lbl_8215F6A8) &&
       ((double)*(uint *)(param_1 + 0x7654) <= dVar3 * lbl_82015610)) {
      uVar2 = uVar2 - 1;
    }
  }
  else {
    uVar2 = uVar2 + 1;
  }
  if (1 < (int)uVar2) {
    *(undefined4 *)(param_1 + 0xa1c) = 1;
    return;
  }
  *(uint *)(param_1 + 0xa1c) = -((int)uVar2 >> 0x1f) - 1U & uVar2;
  return;
}

