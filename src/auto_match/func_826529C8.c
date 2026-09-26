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
extern int fn_82645110();


void fn_826529C8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x5568) == 2) {
    if (*(int *)(param_1 + 0x5570) == 3) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5570) + 1;
    }
    if (iVar2 != *(int *)(param_1 + 0x556c)) {
      iVar2 = iVar2 * 2;
      if (param_2 == 0) {
        iVar2 = iVar2 + 1;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x38) < uVar1) {
        uVar1 = fn_82645110(param_1);
      }
      *(undefined4 *)(uVar1 + 4) = 0xc0025800;
      *(undefined4 *)(uVar1 + 8) = 0x80000003;
      uVar3 = *(int *)(param_1 + 0x5564) + iVar2 * 4;
      *(uint *)(uVar1 + 0xc) = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1fffffff) | 2;
      *(undefined4 *)(uVar1 + 0x10) = 0xdeadbeef;
      *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar1 + 0x10);
    }
  }
  return;
}

