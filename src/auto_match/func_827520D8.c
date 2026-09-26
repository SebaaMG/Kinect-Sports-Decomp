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
extern unsigned int *auStack_20;
extern int fn_826944C8();
extern int fn_826A76D0();
extern int fn_826F6FA8();
extern int fn_82720748();
extern unsigned int uStack_13;
extern unsigned int uStack_14;
extern unsigned int uStack_15;
extern unsigned int uStack_16;
extern unsigned int uStack_18;


void fn_827520D8(int param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,uint param_6)

{
  int *piVar2;
  ulonglong uVar1;
  longlong lVar3;
  int aiStack_30 [4];
  uint auStack_20 [2];
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  auStack_20[0] = param_6 & 0xff;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined1 *)(param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  auStack_20[1] = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_15 = 0xff;
  uStack_14 = 0;
  uStack_13 = 0;
  fn_826A76D0(aiStack_30,auStack_20,param_2);
  if (*(int *)(param_1 + 0x44) != 0) {
    piVar2 = (int *)fn_826F6FA8(*(int *)(param_1 + 0x44),0);
    if (piVar2 != (int *)0x0) {
      uVar1 = (**(code **)(*piVar2 + 0x5c))();
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82720748(uVar1,param_1 + 0x10,aiStack_30,0,0);
      }
    }
  }
  lVar3 = (ulonglong)*(uint *)(aiStack_30[0] + 8) - 1;
  *(int *)(aiStack_30[0] + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(aiStack_30[0]);
  }
  return;
}

