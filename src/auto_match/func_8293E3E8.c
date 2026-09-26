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
extern int fn_82937A60();
extern int fn_8293BF58();
extern int fn_8293C4C0();
extern int fn_8293CBC8();
extern int fn_8293D1E0();
extern int fn_8293D368();
extern int fn_8293D760();
extern int fn_8293E2D0();


undefined8 fn_8293E3E8(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (uVar1 < 9) {
      if (uVar1 == 0) {
        uVar2 = fn_8293D368();
      }
      else if (uVar1 == 1) {
        uVar2 = fn_8293D1E0();
      }
      else if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
        uVar2 = fn_8293CBC8();
      }
      else if (uVar1 == 5) {
        uVar2 = fn_8293D760();
      }
      else if (uVar1 == 6) {
        uVar2 = fn_8293BF58();
      }
      else if (uVar1 == 7) {
        uVar2 = fn_8293C4C0();
      }
      else {
        uVar2 = fn_8293E2D0();
      }
    }
  }
  else {
    if (uVar1 == 6) {
      uVar2 = 0xffffffff820340b8;
    }
    else if (uVar1 == 7) {
      if (*(int *)(param_2 + 0x34) == 0xf8) {
        uVar2 = 0xffffffff820340f0;
      }
      else {
        uVar2 = 0xffffffff82034124;
      }
    }
    else {
      if (uVar1 != 8) {
        return 0;
      }
      uVar2 = 0xffffffff82034158;
    }
    fn_82937A60(param_1,uVar2);
    uVar2 = 0xffffffff80004005;
  }
  return uVar2;
}

