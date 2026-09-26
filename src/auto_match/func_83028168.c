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
extern int fn_83008038();
extern int fn_830195D8();
extern int fn_83028018();


undefined8
fn_83028168(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,ulonglong param_7)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  
  fn_83028018(param_1,param_3,param_4);
  puVar2 = (undefined4 *)fn_83008038(param_1 + 100);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 2;
  }
  else {
    puVar2[3] = (int)param_3;
    puVar2[4] = (int)param_4;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = param_2;
    if (((param_6 & 0xffffffff) == 0) || ((param_7 & 0xffffffff) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = fn_830195D8(puVar2 + 5,param_6,param_7,param_5);
    }
  }
  return uVar1;
}

