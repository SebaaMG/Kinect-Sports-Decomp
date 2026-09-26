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
extern int fn_827D9EA8();
extern int fn_827DE858();
extern int fn_82811400();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CB838;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined4 * fn_8260C7F8(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)lbl_83156AA0;
  uVar3 = fn_82811400(auStack_50,4);
  puVar4 = (undefined4 *)(**(code **)(iVar1 + 0xc))(lbl_83156AA0,0x3c,uVar3);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uStack_60 = 0;
    iStack_5c = 0;
    fn_82517978(&uStack_60,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
    uVar5 = fn_827D9EA8(param_2);
    iVar1 = iStack_5c;
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    fn_82517978(&uStack_58,uStack_60,iStack_5c,0);
    fn_827DE858(puVar4,&uStack_58,param_2);
    puVar4[5] = uVar2;
    puVar4[6] = uVar5;
    puVar4[7] = 0;
    *puVar4 = &lbl_821CB838;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return puVar4;
}

