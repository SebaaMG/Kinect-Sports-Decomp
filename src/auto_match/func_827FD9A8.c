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
extern int fn_827F7210();
extern int fn_827FB050();
extern int fn_827FB300();
extern int fn_827FCBE8();
extern int fn_82F68B78();


void fn_827FD9A8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  short sVar2;
  undefined8 extraout_f1;
  undefined8 uVar3;
  
  uVar1 = fn_82F68B78();
  uVar3 = extraout_f1;
  sVar2 = fn_827F7210();
  if (sVar2 != 0) {
    fn_827FCBE8(uVar3,uVar1,param_2,param_3,param_4,param_5);
  }
  fn_827FB300(uVar3,uVar1,param_2,param_3,param_4,0);
  fn_827FB050(uVar1,param_2,param_3);
  return;
}

