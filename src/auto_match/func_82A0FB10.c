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
extern int fn_82645CF8();
extern int fn_82F6F870();
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82A0FB10(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = &uStack_30;
  puVar2 = (undefined4 *)(param_2 + 0x18);
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  lVar3 = 6;
  uStack_30 = 0;
  uStack_14 = lbl_831BB8F0;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = (undefined8 *)((int)puVar1 + 4);
    *(undefined4 *)puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82645CF8(param_1,5,&uStack_30,0x1c);
  fn_82F6F870(uStack_14);
  return;
}

