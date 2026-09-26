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
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8326459C;


double fn_830551F8(int param_1)

{
  ulonglong uVar1;
  double dVar2;
  
  uVar1 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x60) + 0x84);
  trapWord(6,uVar1,0);
  dVar2 = (double)(*(float *)(param_1 + 0x98) /
                   (float)(((((ulonglong)*(uint *)(param_1 + 0x68) -
                             (ulonglong)*(uint *)(param_1 + 0x94)) + uVar1) - 1 & 0xffffffff) /
                          uVar1) -
                  (float)(*(longlong *)(*(int *)(param_1 + 0x60) + 0x50) -
                         *(longlong *)(param_1 + 0x58)) / lbl_8326459C);
  if (dVar2 <= (double)lbl_821AAD20) {
    return (double)lbl_821AAD20;
  }
  return dVar2;
}

