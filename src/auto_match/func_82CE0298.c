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
extern unsigned int *auStack_20;
extern int fn_82A1C098();
extern int fn_831430DC();
extern unsigned int iStack_18;
extern unsigned int uStack_10;
extern unsigned int uStack_14;


uint fn_82CE0298(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_1 == 0) {
    puVar3 = auStack_20;
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uVar1 = fn_831430DC(0xfa,0x7001a,0,&iStack_18,0xc,puVar3);
  if (((int)uVar1 < 0) || (uVar1 = fn_82A1C098(0), (int)uVar1 < 0)) {
    uVar2 = uVar1 & 0xffff;
    if ((uVar1 & 0x1fff0000) != 0x70000) {
      uVar2 = 0x65b;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

