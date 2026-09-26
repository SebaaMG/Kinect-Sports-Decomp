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
extern unsigned int *auStack_38;
extern int fn_8280A5D8();
extern int fn_82810208();
extern int fn_828102A8();
extern int fn_828106A0();
extern int fn_82862238();
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;


void fn_82863B20(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined1 auStack_38 [56];
  
  fn_828106A0(param_2);
  uVar2 = *(ushort *)(param_1 + 8);
  lVar3 = 0;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      fn_82862238((double)lbl_832116BC,*(undefined4 *)(param_1 + 4),uVar2,lbl_832116B8,param_4
                        ,lVar3,auStack_38);
      fn_82810208(param_2,auStack_38,param_2);
      uVar1 = *(ushort *)(param_1 + 8);
      lVar3 = lVar3 + 1;
      uVar2 = uVar1;
    } while ((int)lVar3 < (int)(uint)uVar1);
  }
  fn_8280A5D8((double)uVar1);
  fn_828102A8(param_2,param_2);
  return;
}

