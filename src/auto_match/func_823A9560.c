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
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B47C8;


undefined4 * fn_823A9560(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821AD588;
    puVar3[2] = 1;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      uVar1 = *param_3;
      uVar2 = *param_2;
      puVar3[4] = 0;
      puVar3[3] = &lbl_821B47C8;
      fn_828ABF58(puVar3 + 5,0,uVar2,uVar1);
    }
  }
  param_1[1] = puVar3;
  *param_1 = puVar3 + 3;
  return param_1;
}

