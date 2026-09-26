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
extern int fn_8265CA20();
extern int fn_82E1D888();
extern int fn_82E1DFA0();
extern int fn_82E1E0E8();
extern int fn_82E1F690();


undefined8 fn_82E1E1C8(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar1 = fn_82E1F690(param_2);
  if ((param_2 & 0xffffffff) != 0) {
    puVar2 = (undefined1 *)fn_82E1D888(param_1,uVar1,0x3d);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)fn_82E1D888(param_1,uVar1,0x3c);
      if ((puVar2 == (undefined1 *)0x0) &&
         (puVar2 = (undefined1 *)fn_82E1D888(param_1,uVar1,0x2b), puVar2 == (undefined1 *)0x0))
      goto LAB_82e1e268;
      *puVar2 = 0;
      fn_82E1E0E8(param_1,uVar1,puVar2 + 1);
    }
    else {
      *puVar2 = 0;
      fn_82E1DFA0(param_1,uVar1,puVar2 + 1);
    }
    uVar3 = 1;
  }
LAB_82e1e268:
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8265CA20(uVar1);
  }
  return uVar3;
}

