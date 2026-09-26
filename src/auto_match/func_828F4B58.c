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
extern int fn_828FA8D8();


undefined8 fn_828F4B58(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x274) + 0x38);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x5e5;
    uVar3 = 0xffffffff820292d4;
  }
  else {
    if (piVar1[2] == 0) {
      if ((*piVar1 != 0) || (uVar4 = 1, piVar1[1] == 0)) {
        uVar4 = 0;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      *piVar1 = 1;
      piVar1[2] = 1;
      return 0;
    }
    uVar2 = 0x5ea;
    uVar3 = 0xffffffff820292b0;
  }
  fn_828FA8D8(param_1 + 0x18,param_1 + 0x280,uVar2,uVar3);
  *(undefined4 *)(param_1 + 0x50) = 1;
  return 0xffffffff80004005;
}

