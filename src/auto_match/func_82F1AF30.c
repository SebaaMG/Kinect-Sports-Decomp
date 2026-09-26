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


uint fn_82F1AF30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x2d0);
  iVar3 = (iVar1 * param_3 + param_2) * 0x114 + *(int *)(param_1 + 0x1e54);
  if (*(int *)(iVar3 + 0x74) == 0) {
    return 0;
  }
  uVar2 = 1;
  if ((param_2 != 0) && (*(int *)(iVar3 + -0xa0) != 0)) {
    uVar2 = 3;
  }
  if (((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_3 * 4) == 0)) &&
     (*(int *)(iVar3 + iVar1 * -0x114 + 0x74) != 0)) {
    uVar2 = uVar2 | 4;
  }
  if ((uVar2 == 7) && (*(int *)(iVar3 + iVar1 * -0x114 + -0xa0) != 0)) {
    uVar2 = 0xf;
  }
  if (param_4 == 1) {
    if ((uVar2 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    return uVar2 | 2;
  }
  if (param_4 == 2) {
    if ((uVar2 & 2) != 0) {
      uVar2 = uVar2 | 8;
    }
    return uVar2 | 4;
  }
  if (param_4 != 3) {
    return uVar2;
  }
  return 0xf;
}

