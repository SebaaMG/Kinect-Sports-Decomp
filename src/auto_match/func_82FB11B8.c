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
extern int fn_82FA5060();
extern int fn_82FAF408();
extern int fn_83008600();
extern int fn_830087C8();
extern int fn_83029968();
extern unsigned int lbl_8216D2CC;
extern unsigned int lbl_831BC768;


undefined8
fn_82FB11B8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)fn_83029968(param_1 + 0x88);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      fn_83008600();
      puVar2[10] = 0;
      *puVar2 = &lbl_8216D2CC;
    }
    *piVar1 = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      fn_82FAF408(param_1 + 0x88,param_2);
    }
    else {
      fn_830087C8(puVar2,param_2,param_3,param_4,param_5);
    }
    if (*piVar1 != 0) {
      return 1;
    }
  }
  return 2;
}

