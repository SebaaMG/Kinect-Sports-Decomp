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
extern int fn_826A8E58();
extern int fn_826D9590();
extern int fn_826DD168();
extern unsigned int uStack_2c;


void fn_826DF020(undefined8 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int *piStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 *puStack_24;
  
  piStack_30 = param_2;
  fn_826D9590(&piStack_28,param_1,&piStack_30);
  piStack_30 = (int *)0x0;
  uStack_2c = 0;
  cVar1 = fn_826A8E58(&piStack_28,&piStack_30);
  if (cVar1 == '\0') {
    *(undefined4 *)((int)puStack_24 * 0x10 + *piStack_28 + 0x14) = *param_3;
  }
  else {
    piStack_28 = param_2;
    puStack_24 = param_3;
    fn_826DD168(param_1,param_1,&piStack_28);
  }
  return;
}

