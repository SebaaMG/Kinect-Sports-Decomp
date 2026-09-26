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


void fn_82555B58(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar1 = 0;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      iVar3 = iVar2 + *param_1;
      iVar2 = iVar2 + 0x1a0;
      *(uint *)(iVar3 + 0x24) =
           *(uint *)(iVar3 + 0x24) & 0xfbffffff | (uint)((param_2 & 0xffffffff) << 0x1a) & 0x4000000
      ;
      iVar3 = param_1[1];
    } while (iVar1 < iVar3);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      if ((((uint *)(iVar3 + *param_1))[9] & 0x40000000) != 0) {
        fn_82555B58((ulonglong)*(uint *)(iVar3 + *param_1) + 0x98,param_2);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1a0;
    } while (iVar1 < param_1[1]);
  }
  return;
}

