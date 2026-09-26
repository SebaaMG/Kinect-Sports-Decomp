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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern int fn_823FD610();
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


undefined4 *
fn_823FC760(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  char cVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [104];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_5[1];
    uVar2 = *param_5;
    uStack_88 = 0;
    iStack_84 = 0;
    if (iVar1 != 0) {
      cVar7 = fn_8223AAC0(iVar1);
      if (cVar7 != '\0') {
        uStack_88 = uVar2;
        iStack_84 = iVar1;
      }
    }
    iVar1 = param_4[1];
    uVar2 = *param_4;
    uStack_90 = 0;
    iStack_8c = 0;
    if ((iVar1 != 0) && (cVar7 = fn_8223AAC0(iVar1), cVar7 != '\0')) {
      uStack_90 = uVar2;
      iStack_8c = iVar1;
    }
    uVar3 = fn_82365BD8(auStack_80,param_7);
    uVar4 = fn_82365BD8(auStack_78,param_6);
    uVar5 = fn_82365BD8(auStack_70,param_3);
    uVar6 = fn_82365BD8(auStack_68,param_2);
    fn_823FD610(param_1 + 3,uVar6,uVar5,&uStack_90,&uStack_88,uVar4,uVar3);
  }
  return param_1;
}

