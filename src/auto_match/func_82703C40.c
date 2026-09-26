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
extern int fn_82693410();
extern int fn_826F75B8();
extern int fn_82703910();
extern int fn_827039E8();
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int uStack_24;
extern unsigned int uStack_30;


void fn_82703C40(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  lVar1 = fn_82693410();
  iStack_2c = param_1 + 0xa2c;
  uStack_30 = 0;
  uStack_24 = 0;
  iStack_28 = 0;
  while( true ) {
    uVar2 = fn_827039E8(&uStack_30);
    if ((uVar2 & 0xffffffff) == 0) break;
    fn_826F75B8(uVar2,param_1);
  }
  if (iStack_28 != 0) {
    fn_82703910(iStack_2c);
  }
  lVar3 = fn_82693410();
  *(longlong *)(param_1 + 0xb38) = *(longlong *)(param_1 + 0xb38) + (lVar3 - lVar1);
  return;
}

