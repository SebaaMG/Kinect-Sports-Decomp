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
extern int fn_8259BB38();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();


longlong fn_8259AF08(int param_1,undefined8 param_2)

{
  longlong lVar1;
  int aiStack_30 [12];
  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  fn_8259BB38(aiStack_30,param_1 + 0x34,param_2);
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  if (aiStack_30[0] == *(int *)(param_1 + 0x38)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(aiStack_30[0] + 0xc) + 0x18;
  }
  return lVar1;
}

