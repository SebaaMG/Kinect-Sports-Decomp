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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_822C6B30();
extern int fn_822E58E8();
extern int fn_8255A780();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D9208;


void fn_822E5710(int param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)(*(int *)((*(int **)(param_1 + 0x1c))[4] * 4 +
                                     **(int **)(param_1 + 0x1c)) + 0x14);
  iVar1 = fn_8255A780((double)*(float *)(param_1 + 0x2a0),dVar2,(double)lbl_831D9208);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x2a0) = (float)dVar2;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  if (*(int *)(param_1 + 0x2a8) == 0) {
    iVar1 = fn_822E58E8(param_1);
    if (iVar1 == 0) {
      fn_822C6B30((ulonglong)*(uint *)(param_1 + 0x114) + 0x50,param_1 + 0x80,param_1 + 0xc0,
                        CONCAT44(lbl_821CC160,*(undefined4 *)(param_1 + 0x2a0)),
                        (ulonglong)lbl_821CC160 << 0x20);
    }
    else {
      *(undefined4 *)(param_1 + 0x2a8) = 1;
    }
  }
  return;
}

