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
extern int fn_8267C498();
extern int fn_827A38F0();


void fn_827242E8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1[0x28] + 0x114) != 0) {
    iVar1 = *(int *)(*(int *)(param_1[0x28] + 0x114) + 0x14);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      fn_827A38F0(iVar1);
      iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0xb00) = *(uint *)(iVar2 + 0xb00) | 0x400;
      }
      fn_8267C498(iVar1);
    }
  }
  return;
}

