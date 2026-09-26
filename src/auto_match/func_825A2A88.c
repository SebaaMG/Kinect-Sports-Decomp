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


undefined4 fn_825A2A88(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = *(uint *)(param_1 + 0x230); uVar1 < *(uint *)(param_1 + 0x234); uVar1 = uVar1 + 0x60)
  {
    if (*(int *)(uVar1 + 0x3c) == param_2) goto code_r0x825a2ab8;
  }
  uVar1 = 0;
code_r0x825a2ab8:
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x30) == 0)) {
    return *(undefined4 *)
            (*(int *)(*(int *)(((int)*(uint *)(uVar1 + 0x34) >> 8 & 0xffU) * 4 +
                              *(int *)(param_1 + 0x4c) + 0x7fc) + 4) +
            (*(uint *)(uVar1 + 0x34) & 0xff) * 4);
  }
  return 0;
}

