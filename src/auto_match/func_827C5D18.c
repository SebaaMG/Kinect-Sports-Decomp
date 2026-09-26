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
extern int fn_827C5390();
extern int fn_827C5428();
extern int fn_827C5538();


void fn_827C5D18(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  fn_827C5390(param_1,0xd8);
  lVar2 = 0;
  piVar1 = (int *)(param_1 + 0x48);
  do {
    if (*piVar1 != 0) {
      fn_827C5428(param_1,lVar2);
    }
    lVar2 = lVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)lVar2 < 4);
  if (*(char *)(param_1 + 0xb1) == '\0') {
    lVar2 = 0;
    piVar1 = (int *)(param_1 + 0x68);
    do {
      if (piVar1[-4] != 0) {
        fn_827C5538(param_1,lVar2,0);
      }
      if (*piVar1 != 0) {
        fn_827C5538(param_1,lVar2,1);
      }
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lVar2 < 4);
  }
  fn_827C5390(param_1,0xd9);
  return;
}

