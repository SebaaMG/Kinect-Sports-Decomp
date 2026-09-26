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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8259A3A8();
extern int fn_8259AF08();
extern int fn_8265C9E0();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827DE858();
extern int fn_82811400();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CA78C;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined4 * fn_8259B530(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [80];
  
  uStack_60 = fn_827D96A0(param_2);
  lVar2 = fn_8259AF08(param_1,&uStack_60);
  if (lVar2 == 0) {
    puVar6 = (undefined4 *)0x0;
    *param_3 = 0;
  }
  else {
    iVar1 = *(int *)lbl_83156AA0;
    uVar3 = fn_82811400(auStack_50,4);
    uVar4 = (**(code **)(iVar1 + 0xc))(lbl_83156AA0,0x1b8,uVar3);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uStack_60 = 0;
      uVar5 = fn_8259A3A8(uVar4,lVar2,*(undefined4 *)(param_1 + 0x70),&uStack_60,param_2,0);
    }
    *param_3 = uVar5;
    puVar6 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uStack_60 = 0;
      iStack_5c = 0;
      fn_82517978(&uStack_60,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
      iVar1 = iStack_5c;
      uStack_58 = 0;
      uStack_54 = 0;
      uVar5 = *param_3;
      fn_82517978(&uStack_58,uStack_60,iStack_5c,0);
      fn_827DE858(puVar6,&uStack_58,uVar5);
      *puVar6 = &lbl_821CA78C;
      fn_827D9630(puVar6 + 6,param_2);
      if (iVar1 != 0) {
        fn_822315A0(iVar1);
      }
    }
  }
  return puVar6;
}

