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
extern int fn_827912D8();
extern int fn_827A3A50();


void fn_827A4F70(int param_1,ulonglong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((param_2 & 0x102) == 0) {
    uVar2 = fn_827912D8(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    if (*(uint *)(param_1 + 0x18) <= uVar2) {
      return;
    }
    uVar3 = fn_827912D8(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    uVar1 = *(ushort *)(param_1 + 0x68);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x68);
    if (((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) == 0)) {
      return;
    }
    uVar3 = 0;
  }
  fn_827A3A50(param_1,uVar3,uVar1 >> 1 & 1);
  return;
}

