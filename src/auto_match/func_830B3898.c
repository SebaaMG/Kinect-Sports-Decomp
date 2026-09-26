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
extern int fn_82CE09D0();
extern int fn_82CE0AD8();
extern int fn_82CE0BB0();
extern int fn_82CE0BE8();
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


undefined8
fn_830B3898(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  
  uStack_24c = *param_2;
  uStack_260 = 0;
  uStack_250 = 1;
  uStack_25c = 0;
  uStack_140 = 1;
  uStack_13c = uStack_24c;
  iVar1 = fn_82CE09D0(0,0,&uStack_250,&uStack_140,&uStack_260);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 != 0) {
    if ((iVar1 < 1) || (2 < iVar1)) {
      return 0;
    }
    iVar1 = fn_82CE0BE8(*param_2,&uStack_250);
    if (iVar1 == 0) {
      *param_5 = 0;
      return 1;
    }
    iVar1 = fn_82CE0AD8(*param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 != -1) {
      *param_5 = iVar1;
      return 1;
    }
    uVar2 = fn_82CE0BB0();
    if (uVar2 < 0x2733) {
      return 0;
    }
    if ((0x2734 < uVar2) && (uVar2 != 0x2747)) {
      return 0;
    }
  }
  *param_5 = 0;
  return 1;
}

