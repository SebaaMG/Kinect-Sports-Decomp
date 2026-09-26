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
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8229EAA8(int *param_1,undefined4 param_2)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_1 != 0) {
    *param_1 = 0;
    fn_82672C20(param_1[2],0xffffffff821ab58c,0,0);
    if (*param_1 != 0) {
      return;
    }
  }
  uStack_30 = 0;
  uStack_2c = 0;
  fn_82273CD8(&uStack_30,5);
  uStack_28 = param_2;
  fn_82672C20(param_1[2],0xffffffff821ab59c,&uStack_30,1);
  fn_82273C88(&uStack_30);
  return;
}

