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
extern int fn_82720090();
extern unsigned int iStack_28;
extern unsigned int lbl_8201046C;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


void fn_82720D48(ulonglong param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong lVar1;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  
  lVar1 = param_1 + 0x10;
  ppuStack_30 = &lbl_8201046C;
  if ((param_1 & 0xffffffff) == 0) {
    lVar1 = 0;
  }
  uStack_2c = param_3;
  iStack_28 = param_4;
  uStack_24 = param_5;
  uStack_20 = param_6;
  uStack_1c = param_7;
  uStack_18 = param_8;
  fn_82720090(param_2,lVar1,
                ((ulonglong)(param_4 + 2) & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_2 + 0x78),
                &ppuStack_30);
  return;
}

