extern unsigned int *puRam8322b1e0;
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
extern int fn_82BE56B0();
extern int fn_82BEE0C8();
extern int fn_82BEE168();
extern unsigned int lbl_8317523C;


undefined8 fn_82BE8020(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;

  if (puRam8322b1e0 == (undefined4 *)0x0) {
    if ((param_2 & 0xffffffff) == 0) {
      uVar1 = 100;
    }
    else {
      iVar2 = fn_82BE56B0(0x18);
      if (iVar2 == 0) {
        puRam8322b1e0 = (undefined4 *)0x0;
      }
      else {
        puRam8322b1e0 = (undefined4 *)fn_82BEE0C8();
      }
      if (puRam8322b1e0 == (undefined4 *)0x0) {
        uVar1 = 0x65;
      }
      else {
        lbl_8317523C = 1;
        iVar2 = fn_82BEE168(puRam8322b1e0,0xffffffff82bee850,param_2,0xffffffff820e9b0c);
        if (iVar2 == 0) {
          lbl_8317523C = 0;
          if (puRam8322b1e0 != (undefined4 *)0x0) {
            (**(code **)*puRam8322b1e0)(puRam8322b1e0,1);
          }
          uVar1 = 0x69;
          puRam8322b1e0 = (undefined4 *)0x0;
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 0x69;
  }
  return uVar1;
}
