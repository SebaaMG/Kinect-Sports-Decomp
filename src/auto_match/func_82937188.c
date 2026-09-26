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
extern int fn_82930318();
extern int fn_82930358();
extern unsigned int lbl_82031798;


void fn_82937188(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_82930318(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_82930358(puVar1);
    puVar1[4] = 0xffffffff;
    *puVar1 = &lbl_82031798;
    puVar1[5] = 0xffffffff;
  }
  puVar1[4] = param_3;
  puVar1[5] = param_2;
  puVar1[3] = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 **)(param_1 + 0x148) = puVar1;
  return;
}

