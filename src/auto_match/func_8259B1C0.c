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
extern int fn_827D96A0();
extern int fn_82A1BB18();
extern unsigned int uStack_30;


bool fn_8259B1C0(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  lVar2 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar2 + 1);
  uStack_30 = fn_827D96A0(param_2);
  fn_8259BB38(aiStack_2c,param_1 + 0x34,&uStack_30);
  iVar1 = *(int *)(param_1 + 0x38);
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  return aiStack_2c[0] != iVar1;
}

