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
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern int fn_823FE080();
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


undefined4 *
fn_823FCDC8(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char cVar4;
  undefined8 uVar3;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [88];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_5[1];
    uVar2 = *param_5;
    uStack_60 = 0;
    iStack_5c = 0;
    if (iVar1 != 0) {
      cVar4 = fn_8223AAC0(iVar1);
      if (cVar4 != '\0') {
        uStack_60 = uVar2;
        iStack_5c = iVar1;
      }
    }
    iVar1 = param_4[1];
    uVar2 = *param_4;
    uStack_68 = 0;
    iStack_64 = 0;
    if (iVar1 != 0) {
      cVar4 = fn_8223AAC0(iVar1);
      if (cVar4 != '\0') {
        uStack_68 = uVar2;
        iStack_64 = iVar1;
      }
    }
    iVar1 = param_3[1];
    uVar2 = *param_3;
    uStack_70 = 0;
    iStack_6c = 0;
    if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
      uStack_70 = uVar2;
      iStack_6c = iVar1;
    }
    uVar3 = fn_82365BD8(auStack_58,param_2);
    fn_823FE080(param_1 + 3,uVar3,&uStack_70,&uStack_68,&uStack_60);
  }
  return param_1;
}

