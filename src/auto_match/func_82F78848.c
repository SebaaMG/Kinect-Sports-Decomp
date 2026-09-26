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
extern unsigned int *auStack_30;
extern int fn_82F72318();
extern int fn_82F72738();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F78748();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined8 fn_82F78848(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 auStack_30 [6];
  
  puVar1 = (undefined8 *)fn_82F72318(0xffffffff832635a0,8,0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)puVar1 = 0;
    *(undefined1 *)((int)puVar1 + 4) = 0;
    *(undefined1 *)((int)puVar1 + 5) = 0;
  }
  fn_82F78748(param_1,puVar1);
  fn_82F72738(auStack_30);
  uStack_40 = auStack_30[0];
  fn_82F735D8(&uStack_40,0x20);
  uStack_38 = uStack_40;
  fn_82F73228(&uStack_38,param_2);
  *puVar1 = uStack_38;
  return param_1;
}

