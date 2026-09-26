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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern int fn_823933E0();
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


undefined4 *
fn_82393160(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 *param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  char cVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [112];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_7[1];
    uVar2 = *param_7;
    uStack_90 = 0;
    iStack_8c = 0;
    if (iVar1 != 0) {
      cVar5 = fn_8223AAC0(iVar1);
      if (cVar5 != '\0') {
        uStack_90 = uVar2;
        iStack_8c = iVar1;
      }
    }
    iVar1 = param_6[1];
    uVar2 = *param_6;
    uStack_98 = 0;
    iStack_94 = 0;
    if (iVar1 != 0) {
      cVar5 = fn_8223AAC0(iVar1);
      if (cVar5 != '\0') {
        uStack_98 = uVar2;
        iStack_94 = iVar1;
      }
    }
    iVar1 = param_4[1];
    uVar2 = *param_4;
    uStack_b0 = 0;
    iStack_ac = 0;
    if (iVar1 != 0) {
      cVar5 = fn_8223AAC0(iVar1);
      if (cVar5 != '\0') {
        uStack_b0 = uVar2;
        iStack_ac = iVar1;
      }
    }
    iVar1 = param_3[1];
    uVar2 = *param_3;
    uStack_a8 = 0;
    iStack_a4 = 0;
    if (iVar1 != 0) {
      cVar5 = fn_8223AAC0(iVar1);
      if (cVar5 != '\0') {
        uStack_a8 = uVar2;
        iStack_a4 = iVar1;
      }
    }
    iVar1 = param_2[1];
    uVar2 = *param_2;
    uStack_a0 = 0;
    iStack_9c = 0;
    if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
      uStack_a0 = uVar2;
      iStack_9c = iVar1;
    }
    fn_82365BD8(auStack_88,in_stack_0000005c);
    fn_82365BD8(auStack_80,in_stack_00000054);
    uVar3 = fn_82365BD8(auStack_78,param_8);
    uVar4 = fn_82365BD8(auStack_70,param_5);
    fn_823933E0(param_1 + 3,&uStack_a0,&uStack_a8,&uStack_b0,uVar4,&uStack_98,&uStack_90,uVar3);
  }
  return param_1;
}

