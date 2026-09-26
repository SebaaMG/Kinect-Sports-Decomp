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


undefined8 fn_827A8510(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 < 0) {
    uVar2 = (uint)*(byte *)(param_1 + 7);
  }
  else {
    uVar2 = param_1[1];
  }
  if (uVar2 != 0) {
    iVar3 = (int)param_1 + 0x1e;
    if (-1 < *param_1) {
      iVar3 = (int)param_1 + 0x2a;
    }
    iVar3 = uVar2 * 8 + iVar3;
    if ((*(byte *)(iVar3 + -2) & 1) != 0) {
      if (((*(byte *)(iVar3 + -2) & 1) == 0) ||
         (bVar1 = true, (*(ushort *)(iVar3 + -4) & 0xf000) != 0)) {
        bVar1 = false;
      }
      if (!bVar1) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

