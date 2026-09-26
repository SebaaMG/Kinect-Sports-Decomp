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
extern int fn_8223AAC0();
extern int fn_8224B7A0();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


undefined4 *
fn_8224B320(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_7[1];
    uVar2 = *param_7;
    uStack_90 = 0;
    iStack_8c = 0;
    if (iVar1 != 0) {
      cVar3 = fn_8223AAC0(iVar1);
      if (cVar3 != '\0') {
        uStack_90 = uVar2;
        iStack_8c = iVar1;
      }
    }
    iVar1 = param_6[1];
    uVar2 = *param_6;
    uStack_88 = 0;
    iStack_84 = 0;
    if (iVar1 != 0) {
      cVar3 = fn_8223AAC0(iVar1);
      if (cVar3 != '\0') {
        uStack_88 = uVar2;
        iStack_84 = iVar1;
      }
    }
    iVar1 = param_5[1];
    uVar2 = *param_5;
    uStack_80 = 0;
    iStack_7c = 0;
    if (iVar1 != 0) {
      cVar3 = fn_8223AAC0(iVar1);
      if (cVar3 != '\0') {
        uStack_80 = uVar2;
        iStack_7c = iVar1;
      }
    }
    iVar1 = param_4[1];
    uVar2 = *param_4;
    uStack_78 = 0;
    iStack_74 = 0;
    if (iVar1 != 0) {
      cVar3 = fn_8223AAC0(iVar1);
      if (cVar3 != '\0') {
        uStack_78 = uVar2;
        iStack_74 = iVar1;
      }
    }
    iVar1 = param_3[1];
    uVar2 = *param_3;
    uStack_70 = 0;
    iStack_6c = 0;
    if (iVar1 != 0) {
      cVar3 = fn_8223AAC0(iVar1);
      if (cVar3 != '\0') {
        uStack_70 = uVar2;
        iStack_6c = iVar1;
      }
    }
    iVar1 = param_2[1];
    uVar2 = *param_2;
    uStack_68 = 0;
    iStack_64 = 0;
    if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
      uStack_68 = uVar2;
      iStack_64 = iVar1;
    }
    fn_8224B7A0(param_1 + 3,&uStack_68,&uStack_70,&uStack_78,&uStack_80,&uStack_88,&uStack_90)
    ;
  }
  return param_1;
}

