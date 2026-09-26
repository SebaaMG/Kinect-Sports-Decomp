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
extern int fn_826A8E58();
extern int fn_826D6290();
extern int fn_826D9530();
extern int fn_826DD110();
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


void fn_826DEF90(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  uint *puStack_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  uint uStack_24;
  
  puStack_30 = param_2;
  fn_826D9530(&puStack_28,param_1,&puStack_30);
  puStack_30 = (uint *)0x0;
  uStack_2c = 0;
  cVar1 = fn_826A8E58(&puStack_28,&puStack_30);
  if (cVar1 == '\0') {
    fn_826D6290(((ulonglong)uStack_24 + 1) * 0x14 + (ulonglong)*puStack_28,param_3);
  }
  else {
    uStack_24 = (uint)param_3;
    puStack_28 = param_2;
    fn_826DD110(param_1,param_1,&puStack_28);
  }
  return;
}

