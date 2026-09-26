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
extern unsigned int *auStack_50;
extern int fn_8275EB28();
extern int fn_82762BE0();
extern int fn_82783F98();
extern int fn_827842B8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_827630A8(undefined8 param_1,int param_2,int param_3)

{
  undefined1 auStack_50 [24];
  uint uStack_38;
  uint uStack_34;
  
  fn_827842B8(param_3);
  fn_82783F98(param_1,param_3);
  *(byte *)(param_3 + 0x44) = *(byte *)(param_2 + 0x24) >> 3 & 1;
  fn_8275EB28(auStack_50,param_2);
  while (uStack_38 < uStack_34) {
    fn_82762BE0(auStack_50,param_3);
  }
  return;
}

