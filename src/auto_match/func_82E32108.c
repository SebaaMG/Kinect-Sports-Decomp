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


undefined8 fn_82E32108(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0xac);
  iVar2 = *param_1;
  if (*(int *)(iVar1 + 0xd4) == 0) {
    param_1[0x41ce] = *(int *)(*(int *)(iVar1 + 0xb8) + -4);
  }
  param_1 = param_1 + 0x41ce;
  iVar3 = *param_1;
  iVar4 = *(int *)(*(int *)(iVar1 + 0xb8) + -4);
  if (iVar3 == iVar4) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
    return 0;
  }
  if (iVar3 < iVar4) {
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar1 + 0xb8));
    *(uint *)(iVar2 + 0x14) = *(uint *)((*param_1 + 1) * 4 + *(int *)(iVar1 + 0xb8)) & 0x7fffffff;
    *(int *)(iVar2 + 0x18) = -1 - (*(int *)((*param_1 + 1) * 4 + *(int *)(iVar1 + 0xb8)) >> 0x1f);
    *param_1 = *param_1 + 2;
  }
  return 0;
}

