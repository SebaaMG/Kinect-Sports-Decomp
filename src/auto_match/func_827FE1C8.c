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


void fn_827FE1C8(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  
  uVar1 = *(undefined4 *)(param_4 + 0x98);
  uVar2 = *(undefined4 *)(param_3 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  sVar4 = fn_827F7210();
  if (sVar4 != 0) {
    fn_827FCBE8(param_1,uVar3,uVar2,uVar1,param_5,0);
  }
  fn_827FB300(param_1,uVar3,uVar2,uVar1,param_5,0);
  fn_827FB050(uVar3,uVar2,uVar1);
  return;
}

