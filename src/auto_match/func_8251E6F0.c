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
extern int fn_8243CD40();
extern int fn_82594EC8();


void fn_8251E6F0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x2c);
    puVar2 = (uint *)fn_8243CD40(0xffffffff83296ff4,puVar3);
    uVar1 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_82594EC8(puVar3);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *puVar3 = 0;
  }
  return;
}

