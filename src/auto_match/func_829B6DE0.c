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


undefined8 fn_829B6DE0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((((*(int *)(param_1 + 0x4c) == 0) && (*(int *)(param_1 + 0x130) == 0)) &&
       (*(int *)(param_1 + 0x28) == 3)) &&
      (((*(int *)(param_1 + 0x24) == 3 && (*(int *)(param_1 + 0x2c) == 2)) &&
       ((*(int *)(param_1 + 0x78) == 3 &&
        ((iVar1 = *(int *)(param_1 + 0xdc), *(int *)(iVar1 + 8) == 2 &&
         (*(int *)(iVar1 + 0x5c) == 1)))))))) &&
     ((*(int *)(iVar1 + 0xb0) == 1 &&
      (((((*(int *)(iVar1 + 0xc) < 3 && (*(int *)(iVar1 + 0x60) == 1)) &&
         (*(int *)(iVar1 + 0xb4) == 1)) &&
        ((iVar2 = *(int *)(param_1 + 0x140), *(int *)(iVar1 + 0x24) == iVar2 &&
         (*(int *)(iVar1 + 0x78) == iVar2)))) && (*(int *)(iVar1 + 0xcc) == iVar2)))))) {
    return 1;
  }
  return 0;
}

