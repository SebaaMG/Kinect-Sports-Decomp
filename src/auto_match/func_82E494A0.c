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
extern int fn_82E23B70();
extern unsigned int lbl_82153A68;


undefined8 fn_82E494A0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    puVar2 = (undefined4 *)fn_82E23B70(0x18);
    uVar1 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *puVar2 = &lbl_82153A68;
      puVar2[5] = 1;
    }
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    else {
      *param_1 = puVar2;
      if (param_2 == 0) {
        uVar1 = 0xffffffff80004003;
      }
      else {
        puVar2[2] = param_2;
        puVar2[3] = param_2;
        puVar2[1] = param_3;
        puVar2[4] = param_2;
      }
    }
  }
  return uVar1;
}

