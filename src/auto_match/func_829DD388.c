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
extern unsigned int *auStack_800;
extern unsigned int *auStack_b70;
extern int fn_829DC778();
extern int fn_829DD328();
extern int fn_82A1DDC0();
extern unsigned int register0x0000000c;


void fn_829DD388(int param_1,undefined4 param_2)

{
  undefined1 auStack_b70 [800];
  undefined1 *puStack_850;
  undefined1 auStack_800 [2048];
  
  puStack_850 = (undefined1 *)register0x0000000c;
  fn_82A1DDC0(auStack_800,param_2,2000);
  fn_829DC778(param_1,auStack_800);
  if (*(int *)(param_1 + 0xf4a10) == 500) {
    fn_829DD328(param_1,200,auStack_b70);
  }
  return;
}

