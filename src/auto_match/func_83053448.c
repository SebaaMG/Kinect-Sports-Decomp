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


char fn_83053448(int param_1,int param_2,longlong *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(int *)(param_1 + 0x60) = param_2;
  lVar3 = *param_3;
  *(longlong *)(param_1 + 0x18) = lVar3;
  *(longlong *)(param_1 + 0x20) = param_3[1];
  *(longlong *)(param_1 + 0x28) = param_3[2];
  *(longlong *)(param_1 + 0x30) = param_3[3];
  if (lVar3 < 0) {
    return '\x1f';
  }
  uVar2 = *(uint *)(param_1 + 0x9c) | 0x1000000;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = *(uint *)(param_1 + 0x9c) & 0xfeffffff;
  }
  *(uint *)(param_1 + 0x9c) = uVar2;
  *(uint *)(param_1 + 0x9c) = param_4 << 0x1d | uVar2 & 0x1fffffff;
  iVar1 = (**(code **)(**(int **)(param_2 + 0x80) + 8))(*(int **)(param_2 + 0x80),param_1 + 0x18);
  *(int *)(param_1 + 0x6c) = iVar1;
  return (iVar1 == 0) + '\x01';
}

