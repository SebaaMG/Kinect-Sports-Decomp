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
extern unsigned int *auStack_3c;
extern int fn_82273C88();
extern int fn_8228E780();
extern int fn_8267B890();
extern int fn_8267BE38();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_40;


void fn_826837C8(uint *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  if ((param_3 & 0xffffffff) == 0) {
    if (*param_1 != 0) {
      fn_8267BE38();
      *param_1 = 0;
    }
    param_1[2] = 0;
  }
  else {
    lVar2 = (param_3 + 3 & 0xffffffc) << 4;
    if (*param_1 == 0) {
      auStack_3c[0] = 2;
      uVar1 = fn_8267B890(lbl_831E7E64,lVar2,auStack_3c);
      *param_1 = uVar1;
    }
    else {
      uStack_40 = 2;
      lVar2 = fn_8267B890(lbl_831E7E64,lVar2,&uStack_40);
      uVar1 = 0;
      if (param_1[1] != 0) {
        lVar3 = 0;
        do {
          if (lVar3 + lVar2 != 0) {
            fn_8228E780(lVar3 + lVar2,lVar3 + (ulonglong)*param_1);
          }
          fn_82273C88(lVar3 + (ulonglong)*param_1);
          uVar1 = uVar1 + 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar1 < param_1[1]);
      }
      fn_8267BE38(*param_1);
      *param_1 = (uint)lVar2;
    }
    param_1[2] = (uint)(param_3 + 3) & 0xfffffffc;
  }
  return;
}

