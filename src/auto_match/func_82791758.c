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
extern int fn_826BCD88();
extern int fn_82791560();


void fn_82791758(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) == 2) && (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x10))) {
    while ((uVar1 = *(uint *)(param_1 + 0x14), uVar1 != 0x3d &&
           (((uVar1 != 0x3e && (uVar1 != 0x3c)) && (uVar1 != 0x2f))))) {
      iVar2 = fn_826BCD88(0xffffffff820094c8,uVar1 & 0xffff);
      if (iVar2 != 0) {
        return;
      }
      fn_82791560((uint *)(param_1 + 8));
      if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 8)) {
        return;
      }
    }
  }
  return;
}

