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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8229EB38(int param_1,int param_2)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  
  uStack_20 = 0;
  uStack_1c = 0;
  if (param_2 != *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = param_2;
    if (param_2 == 0) {
      fn_82273CD8(&uStack_20,4);
      pcStack_18 = "single";
    }
    else {
      if (param_2 != 1) goto code_r0x8229ebbc;
      fn_82273CD8(&uStack_20,4);
      pcStack_18 = "versus";
    }
    fn_82672C20(*(undefined4 *)(param_1 + 8),0xffffffff821ab578,&uStack_20,1);
  }
code_r0x8229ebbc:
  fn_82273C88(&uStack_20);
  return;
}

