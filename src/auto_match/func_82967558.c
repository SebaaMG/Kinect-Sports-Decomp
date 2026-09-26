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
extern int fn_82964628();


int fn_82967558(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82964628(*(undefined8 *)(*(int *)(param_4 * 4 + *(int *)(param_1 + 0x14)) + 0x20),
                        param_1,*(undefined4 *)(param_1 + 0x78),param_2,param_3);
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 0x80000;
    *(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4) + 0x38) = param_4;
  }
  return iVar2;
}

