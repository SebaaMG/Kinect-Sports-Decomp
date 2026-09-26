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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82636E10();
extern int fn_82AA1C90();
extern int fn_82AA2720();
extern unsigned int iStack_28;
extern unsigned int uStack_30;


undefined8
fn_82AA5158(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  int iStack_28;
  
  if (*(int *)(param_6 * 8 + param_3 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uStack_30 = CONCAT44((int)param_1,param_2);
    iStack_28 = param_6;
    uVar1 = fn_82636E10(param_5,&uStack_30,0xffffffff82aa5020);
    if (-1 < (int)uVar1) {
      fn_82AA2720(param_1,0xffffffff821ce7a4);
      fn_82AA1C90(param_1,0xffffffff821cc86c);
      uVar1 = 0;
    }
  }
  return uVar1;
}

