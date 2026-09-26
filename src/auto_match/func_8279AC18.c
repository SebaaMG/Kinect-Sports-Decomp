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
extern int fn_827AEE00();
extern int fn_827AFE68();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8279AC18(int param_1)

{
  int iVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = fn_827AEE00(*(int *)(param_1 + 0x14),0x7fffffff);
    if (iVar1 == 0) {
      uStack_2c = 0x7fffffff;
      uStack_38 = 0xffffffff;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_20 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_28 = 0xff000000;
      uStack_1c = 0x18;
      uStack_24 = 0xffffffff;
      fn_827AFE68(*(undefined4 *)(param_1 + 0x14),&uStack_40);
    }
  }
  return;
}

