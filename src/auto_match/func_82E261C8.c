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
extern unsigned int lbl_83187510;


undefined8 fn_82E261C8(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  piVar2 = (int *)0x8214c3fc;
  do {
    if (param_1 == *piVar2) {
      if (param_2 == (undefined4 *)0x0) {
        return 1;
      }
      uVar3 = 1;
      goto LAB_82e26224;
    }
    uVar1 = uVar1 + 4;
    piVar2 = piVar2 + 1;
  } while ((uVar1 & 0xffffffff) != 0xc);
  uVar1 = 0;
  piVar2 = &lbl_83187510;
  do {
    if (param_1 == *piVar2) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      return 0;
    }
    uVar1 = uVar1 + 0x24;
    piVar2 = piVar2 + 9;
  } while ((uVar1 & 0xffffffff) != 0x804);
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = 0;
LAB_82e26224:
    *param_2 = uVar3;
  }
  return 1;
}

