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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82526C70();
extern int fn_8266F600();
extern int fn_82672C20();
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82278E58(int param_1,undefined8 param_2)

{
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [128];
  
  fn_8266F600(*(undefined4 *)(param_1 + 8),param_2,auStack_b0,0x20);
  uStack_c0 = 0;
  uStack_bc = 0;
  fn_82273CD8(&uStack_c0,4);
  puStack_b8 = auStack_b0;
  fn_82526C70(auStack_90,0x80,0xffffffff821a8180,param_1 + 0x18);
  fn_82672C20(*(undefined4 *)(param_1 + 8),auStack_90,&uStack_c0,1);
  fn_82273C88(&uStack_c0);
  return;
}

