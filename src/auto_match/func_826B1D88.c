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
extern int fn_82695FA0();
extern int fn_826A8E58();
extern int fn_826AE718();
extern int fn_826B0A78();
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


void fn_826B1D88(undefined8 param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  uint *puStack_30;
  uint uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  fn_826B0A78(&puStack_30,param_1,param_2);
  piStack_28 = (int *)0x0;
  uStack_24 = 0;
  cVar1 = fn_826A8E58(&puStack_30,&piStack_28);
  if (cVar1 == '\0') {
    fn_82695FA0(((ulonglong)uStack_2c & 0x7ffffff) * 0x20 + (ulonglong)*puStack_30 + 0x18,
                      param_3);
  }
  else {
    uStack_24 = (undefined4)param_3;
    piStack_28 = param_2;
    fn_826AE718(param_1,param_1,&piStack_28,*(undefined4 *)(*param_2 + 0xc));
  }
  return;
}

