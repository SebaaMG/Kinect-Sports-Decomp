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
extern int fn_82FEF328();
extern unsigned int lbl_832643DC;


undefined8 fn_82FECEE8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  
  puVar3 = (undefined4 *)fn_82FEF328(0xffffffff831bc794);
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 2;
  }
  else {
    puVar3[1] = param_1;
    *puVar3 = param_2;
    uVar1 = lbl_832643DC;
    uVar2 = 1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[2] = uVar1;
  }
  return uVar2;
}

