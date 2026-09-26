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
extern int fn_82258220();
extern int fn_82359C18();
extern int fn_82517C10();
extern int fn_82518120();
extern int fn_82518248();
extern unsigned int lbl_82196E7C;


int fn_822579F8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuStack_30;
  code *pcStack_2c;
  undefined ***pppuStack_20;
  
  pcStack_2c = fn_82258220;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_82196E7C;
  fn_82517C10(param_1,param_2,4,1,0xffffffff82257b60,0xffffffff8251c5a0,0xffffffff82257be0,
                    0xffffffff82257ca8);
  fn_82359C18(&ppuStack_30);
  *(int *)(param_1 + 0x50) = (int)param_3;
  uVar1 = fn_82518120();
  fn_82518248(uVar1,param_3,param_1);
  return param_1;
}

