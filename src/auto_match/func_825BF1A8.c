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
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D98C8();
extern int fn_827DE948();
extern int fn_82811438();
extern unsigned int iStack_64;
extern unsigned int lbl_821CAC94;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


undefined4 * fn_825BF1A8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_70 [2];
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [80];
  
  auStack_70[0] = 0;
  fn_82811438(auStack_50,auStack_70,0x10);
  puVar3 = (undefined4 *)
           (**(code **)(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x1c,auStack_50,param_3);
  if ((int)param_4 == -1) {
    param_4 = fn_827D98C8(param_1);
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uStack_68 = 0;
    iStack_64 = 0;
    fn_82517978(&uStack_68,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
    iVar2 = iStack_64;
    uStack_60 = 0;
    uStack_5c = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    fn_82517978(&uStack_60,uStack_68,iStack_64,0);
    fn_827DE948(puVar3,param_2,&uStack_60,param_4);
    puVar3[6] = uVar1;
    puVar3[5] = 0;
    *puVar3 = &lbl_821CAC94;
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
  }
  return puVar3;
}

