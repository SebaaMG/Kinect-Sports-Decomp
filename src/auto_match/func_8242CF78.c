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
extern int fn_82291680();
extern int fn_82520158();
extern int fn_8265C9E0();


undefined4 * fn_8242CF78(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [48];
  
  fn_82520158(0xffffffff821b2700,auStack_30,0);
  uVar1 = fn_8265C9E0(0x7c);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82291680(uVar1,param_2,param_3 + 0x40,auStack_30,param_3 + 0x44);
  }
  *param_1 = uVar2;
  return param_1;
}

