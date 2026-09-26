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
extern int fn_82A40BA8();
extern int fn_82A412D8();
extern int fn_82A42BB0();
extern int fn_82A4F4E0();


void fn_82A42D68(int *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar2 = 8;
    do {
      uVar3 = 0;
      do {
        fn_82A42BB0(param_1,param_1 + (uVar2 + uVar3) * 0x3c + -0x1d6);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 8);
      uVar2 = uVar2 + 8;
    } while (uVar2 < 0x41);
    while( true ) {
      uVar1 = fn_82A40BA8(param_1 + 0xf0a);
      if (uVar1 == 0) break;
      fn_82A42BB0(param_1,uVar1 + 0xc);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82A412D8(uVar1 + 0x20);
        fn_82A4F4E0(uVar1);
      }
    }
    (**(code **)(*(int *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}

