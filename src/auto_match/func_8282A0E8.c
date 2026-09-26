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
extern unsigned int *auStack_40;
extern int fn_828233A8();
extern int fn_828299A8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


bool fn_8282A0E8(longlong param_1,undefined4 param_2)

{
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_58 = param_2;
  fn_828299A8(&uStack_58,param_1,&iStack_60);
  uStack_2c = *(undefined4 *)(iStack_60 + 0xc);
  uStack_28 = uStack_54;
  uStack_30 = param_2;
  fn_828233A8(param_1 + 0x36c,&iStack_5c,0xffffffff82829f58,auStack_40);
  return iStack_5c == 0;
}

