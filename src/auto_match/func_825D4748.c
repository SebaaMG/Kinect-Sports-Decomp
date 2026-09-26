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
extern int fn_8263FB88();
extern int fn_82645EA8();
extern int fn_8264C1F8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;


undefined8 fn_825D4748(int param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar2 = lbl_821CC160;
  uVar1 = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x17d0) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x17d4) = uVar1;
  *(undefined4 *)(param_1 + 0x17d8) = uVar2;
  *(undefined4 *)(param_1 + 0x17dc) = uVar2;
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) | 0x4000000000000000;
  lVar3 = fn_8263FB88(param_1,0xd,param_2,0x1c);
  *param_3 = (int)lVar3;
  if ((longlong)-(ulonglong)(lVar3 == 0) < 0) {
    if (param_1 == lbl_8320A898) {
      fn_82645EA8();
    }
    else {
      fn_8264C1F8(param_1,0,0);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

