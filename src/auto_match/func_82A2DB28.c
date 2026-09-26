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
extern unsigned int *auStack_4c;
extern int fn_82A2B9A0();
extern int fn_82A2D890();
extern int fn_82F691F0();
extern unsigned int uStack_50;


void fn_82A2DB28(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uStack_50;
  undefined1 auStack_4c [76];
  
  iVar1 = fn_82A2B9A0();
  if ((iVar1 == 0) && (iVar1 = fn_82A2D890(param_1,&uStack_50,auStack_4c), iVar1 < 0)) {
    return;
  }
  if ((param_3 != 0) && (param_3 < 4)) {
    trapWord(6,(ulonglong)*(uint *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc),0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(((ulonglong)uStack_50 & 0xfffff) * 0x1000 + (ulonglong)*(uint *)(param_1 + 0x34),0,
               0x1000);
}

