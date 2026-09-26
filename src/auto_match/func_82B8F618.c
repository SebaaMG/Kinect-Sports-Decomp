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


undefined8 fn_82B8F618(int param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff;
    uVar2 = (uint)(uVar1 << 1) & 0x1e;
    uVar2 = ((2 << ((int)(((ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff) << 1) + 1U & 0x1f)) - 1U
             & *(uint *)((int)*(uint **)(param_1 + 0x28) +
                        ((uint)uVar1 >> 2 & 0x1ffffffc) +
                        (((uint)(((ulonglong)**(uint **)(param_1 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                         0x1ffffffc) + 2) * 2) & -1 << uVar2) >> uVar2;
    if ((uVar2 == 0) || (uVar2 == 3)) break;
    param_2 = *(int *)(param_2 + 0x40);
    if (param_2 == 0) {
      return 1;
    }
  }
  return 0;
}

