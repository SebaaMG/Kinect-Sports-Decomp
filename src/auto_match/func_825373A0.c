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
extern int fn_825380D0();
extern int fn_8265C9E0();
extern unsigned int lbl_821C4044;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


undefined4 * fn_825373A0(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uStack0000001c;
  undefined **ppuStack_30;
  undefined1 *puStack_2c;
  undefined ***pppuStack_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uStack0000001c = param_2;
  uVar1 = fn_8265C9E0(0x34);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    puStack_2c = (undefined1 *)&stack0x0000001c;
    pppuStack_20 = &ppuStack_30;
    ppuStack_30 = &lbl_821C4044;
    uVar2 = fn_825380D0(uVar1,&ppuStack_30);
  }
  param_1[0xc] = uVar2;
  param_1[0xe] = 0x3e5;
  param_1[0xf] = 1;
  param_1[0xd] = uStack0000001c;
  return param_1;
}

