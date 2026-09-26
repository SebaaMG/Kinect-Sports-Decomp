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
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;
extern unsigned int uRam00000000;


void fn_82FF7968(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    puVar3 = puVar1;
    if (puVar2 == (undefined4 *)*param_2) {
      *param_2 = puVar1;
      puVar3 = (undefined4 *)uRam00000000;
    }
    uRam00000000 = puVar3;
    if (puVar2 == (undefined4 *)param_2[1]) {
      param_2[1] = 0;
    }
    param_2[2] = param_2[2] + -1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    if (puVar2[1] != 0) {
      puVar2[2] = puVar2[1];
      fn_82FA5190(lbl_831BC768);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
    }
    fn_82FA5190(lbl_831BC768,puVar2);
    puVar2 = puVar1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

