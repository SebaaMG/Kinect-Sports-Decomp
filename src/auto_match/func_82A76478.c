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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A761F8();
extern int fn_82A76260();
extern unsigned int lbl_82089670;


longlong fn_82A76478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)fn_82A3FF60(0xffffffff83219d50,0x44,0x20970006,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[8] = 0;
    *puVar1 = &lbl_82089670;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0x7fffffff;
    puVar1[0xd] = 0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    lVar2 = fn_82A76260(puVar1,param_1,param_2,param_3);
    if (lVar2 < 0) {
      fn_82A761F8(puVar1);
      fn_82A4F4E0(puVar1);
    }
    else {
      *param_4 = puVar1;
    }
  }
  return lVar2;
}

