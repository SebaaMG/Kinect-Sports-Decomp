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
extern unsigned int *auStack_70;
extern int fn_82A9CA40();
extern int fn_82A9E7D8();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82A9F2C8(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar1 = fn_82A9E7D8(param_1,param_4,auStack_70);
    *(int *)(param_1 + 0x90) = iVar1;
    if (-1 < iVar1) {
      uStack_58 = auStack_70[0];
      uStack_60 = param_2;
      uStack_5c = param_3;
      uStack_54 = param_5;
      uStack_50 = param_6;
      uStack_4c = param_7;
      fn_82A9CA40(*(undefined4 *)(param_1 + 0x1c),&uStack_60,(int *)(param_1 + 0x90));
    }
  }
  return;
}

