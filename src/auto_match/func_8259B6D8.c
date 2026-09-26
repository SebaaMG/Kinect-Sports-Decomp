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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8259A3A8();
extern int fn_8259AF08();
extern int fn_827D96A0();
extern int fn_82811400();
extern unsigned int lbl_83156AA0;


undefined8 fn_8259B6D8(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  auStack_60[0] = fn_827D96A0(param_2);
  lVar2 = fn_8259AF08(param_1,auStack_60);
  if (lVar2 != 0) {
    iVar1 = *(int *)lbl_83156AA0;
    uVar3 = fn_82811400(auStack_50,4);
    uVar4 = (**(code **)(iVar1 + 0xc))(lbl_83156AA0,0x1b8,uVar3);
    if ((uVar4 & 0xffffffff) != 0) {
      auStack_60[0] = 0;
      uVar3 = fn_8259A3A8(uVar4,lVar2,*(undefined4 *)(param_1 + 0x70),auStack_60,param_2,0);
      return uVar3;
    }
  }
  return 0;
}

