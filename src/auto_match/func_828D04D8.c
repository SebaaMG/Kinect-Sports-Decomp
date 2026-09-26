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
extern unsigned int *auStack_60;
extern int fn_8265CA20();
extern int fn_828AC508();
extern int fn_828D0300();
extern int fn_828E9D28();
extern int fn_828E9D78();
extern int fn_82CE0730();
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;


void fn_828D04D8(int param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_60 [16];
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  iStack_50 = 0;
  uStack_4c = 0;
  fn_828E9D28(auStack_60,0,0);
  *(undefined1 *)(param_1 + 0x11) = param_2;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined2 *)(param_1 + 0x14) = param_4;
  fn_828AC508(param_1 + 0x18,param_5);
  *(undefined1 *)(param_1 + 0x30) = param_6;
  fn_828D0300(param_1 + 0x10,auStack_60);
  uVar1 = fn_828E9D78(auStack_60);
  iVar2 = iStack_50;
  if (iStack_50 == 0) {
    iVar2 = iStack_48;
  }
  fn_82CE0730(param_1,iVar2,uVar1,0,4);
  if (iStack_48 != 0) {
    fn_8265CA20();
  }
  return;
}

