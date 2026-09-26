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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_823018E8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AECCC;


undefined4 * fn_822FF208(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x1f0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 4;
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (puVar2 != (undefined4 *)0x0) {
      fn_82230110(auStack_60,0xffffffff821aecb4);
      fn_82230110(auStack_80,0xffffffff821aecb4);
      fn_823018E8(puVar2,auStack_80,param_2,auStack_60,param_3);
      fn_82230300(auStack_80,1,0);
      fn_82230300(auStack_60,1,0);
      *puVar2 = &lbl_821AECCC;
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 4;
  return param_1;
}

