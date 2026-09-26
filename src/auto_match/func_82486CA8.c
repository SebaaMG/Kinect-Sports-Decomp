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
extern int fn_82F666D0();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82486CA8(undefined4 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  *param_2 = 0;
  switch(param_1) {
  case 0:
    uVar1 = 0xffffffff821be7b0;
    break;
  case 1:
    uVar1 = 0xffffffff821be7bc;
    break;
  case 2:
    uVar1 = 0xffffffff821be7d0;
    break;
  case 3:
    uVar1 = 0xffffffff821be7dc;
    break;
  case 4:
    uVar1 = 0xffffffff821be7ec;
    break;
  case 5:
    uVar1 = 0xffffffff821be7fc;
    break;
  case 6:
    uVar1 = 0xffffffff821be808;
    break;
  case 7:
    uVar1 = 0xffffffff821be814;
    break;
  case 8:
    uVar1 = 0xffffffff821be820;
    break;
  case 9:
    return;
  case 10:
    uVar1 = 0xffffffff821be828;
    break;
  default:
    return;
  }
  uStack00000048 = 0;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  fn_82F666D0(param_2,0x14,uVar1,0,&stack0x00000028);
  return;
}

