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
extern int fn_82834388();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828344D0(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uVar1 = (param_2 - (int)param_1) / 0xc;
  lVar4 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < lVar4) {
    lVar3 = lVar4 * 0xc + param_1;
    do {
      lVar3 = lVar3 + -0xc;
      puVar2 = (undefined4 *)lVar3;
      uStack_40 = *puVar2;
      lVar4 = lVar4 + -1;
      uStack_3c = puVar2[1];
      uStack_38 = puVar2[2];
      fn_82834388(param_1,lVar4,uVar1,&uStack_40,param_3);
    } while (0 < (int)lVar4);
  }
  return;
}

