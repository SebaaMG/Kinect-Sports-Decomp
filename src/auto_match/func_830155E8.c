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
extern int fn_83015270();
extern int fn_83015DC8();
extern int fn_830195D8();


undefined8
fn_830155E8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  
  fn_83015270(param_1,param_2,param_4,param_5);
  puVar2 = (undefined4 *)fn_83015DC8(param_1 + 0x88);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 2;
  }
  else {
    *puVar2 = (int)param_2;
    puVar2[3] = (int)param_4;
    puVar2[2] = (int)param_5;
    puVar2[1] = param_3;
    if (((param_7 & 0xffffffff) == 0) || ((param_8 & 0xffffffff) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = fn_830195D8(puVar2 + 4,param_7,param_8,param_6);
    }
  }
  return uVar1;
}

