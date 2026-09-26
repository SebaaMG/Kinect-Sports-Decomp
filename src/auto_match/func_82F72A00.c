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
extern int fn_82F72318();
extern unsigned int lbl_82169D7C;


void fn_82F72A00(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)fn_82F72318(0xffffffff832635a0,0x10,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *param_1;
      puVar2[2] = param_2;
      puVar2[3] = 0xffffffff;
      *puVar2 = &lbl_82169D7C;
      puVar2[1] = uVar1;
    }
    *param_1 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}

