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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern int fn_823FD508();
extern unsigned int iStack_6c;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_70;


undefined4 *
fn_823FC578(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char cVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_70;
  int iStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [80];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_2[1];
    uVar2 = *param_2;
    uStack_70 = 0;
    iStack_6c = 0;
    if ((iVar1 != 0) && (cVar7 = fn_8223AAC0(iVar1), cVar7 != '\0')) {
      uStack_70 = uVar2;
      iStack_6c = iVar1;
    }
    uVar3 = fn_82365BD8(auStack_68,param_6);
    uVar4 = fn_82365BD8(auStack_60,param_5);
    uVar5 = fn_82365BD8(auStack_58,param_4);
    uVar6 = fn_82365BD8(auStack_50,param_3);
    fn_823FD508(param_1 + 3,&uStack_70,uVar6,uVar5,uVar4,uVar3);
  }
  return param_1;
}

