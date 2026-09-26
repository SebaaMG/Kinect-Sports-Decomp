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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B4840;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


undefined4 *
fn_82393000(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  char cVar4;
  int iVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [88];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar2 = param_5[1];
    uVar1 = *param_5;
    uStack_68 = 0;
    iStack_64 = 0;
    iVar5 = 0;
    if (iVar2 != 0) {
      cVar4 = fn_8223AAC0(iVar2);
      if (cVar4 != '\0') {
        iVar5 = iVar2;
        uStack_68 = uVar1;
        iStack_64 = iVar2;
      }
    }
    iVar2 = param_3[1];
    uVar1 = *param_3;
    iStack_6c = 0;
    uStack_70 = 0;
    iVar6 = 0;
    if ((iVar2 != 0) && (cVar4 = fn_8223AAC0(iVar2), cVar4 != '\0')) {
      iVar6 = iVar2;
      uStack_70 = uVar1;
      iStack_6c = iVar2;
    }
    iVar2 = fn_82365BD8(auStack_60,param_4);
    iVar3 = fn_82365BD8(auStack_58,param_2);
    param_1[4] = 0;
    param_1[3] = &lbl_821B4840;
    fn_82365BD8(param_1 + 9,iVar3);
    fn_82365BD8(param_1 + 0xb,&uStack_70);
    fn_82365BD8(param_1 + 0xd,iVar2);
    fn_82365BD8(param_1 + 0xf,&uStack_68);
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
    if (iVar6 != 0) {
      fn_822315A0(iVar6);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
  }
  return param_1;
}

