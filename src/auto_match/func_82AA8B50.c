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


undefined8 fn_82AA8B50(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xe8);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = iVar2 + 0x28;
  if (piVar1[1] < iVar3) {
    return 0xfffffffffffffff5;
  }
  piVar1[2] = iVar3;
  if (piVar1[1] < iVar2 + 0x2c) {
    return 0xfffffffffffffff4;
  }
  iVar2 = *piVar1 + iVar3;
  *(byte *)param_2 = *(byte *)(*piVar1 + iVar3);
  *(byte *)((int)param_2 + 1) = *(byte *)(iVar2 + 1);
  *(byte *)((int)param_2 + 2) = *(byte *)(iVar2 + 2);
  *(byte *)((int)param_2 + 3) = *(byte *)(iVar2 + 3);
  piVar1[2] = piVar1[2] + 4;
  *param_2 = (uint)(byte)*param_2 << 0x18 | (uint)*(byte *)((int)param_2 + 2) << 0x10 |
             (uint)*(byte *)((int)param_2 + 1) << 8 | (uint)*(byte *)param_2;
  return 0;
}

