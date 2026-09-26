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
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern int fn_823FDDA8();
extern unsigned int iStack_9c;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_a0;


undefined4 *
fn_823FCB80(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  char cVar9;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 in_stack_00000054;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [104];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_6[1];
    uVar2 = *param_6;
    uStack_a0 = 0;
    iStack_9c = 0;
    if ((iVar1 != 0) && (cVar9 = fn_8223AAC0(iVar1), cVar9 != '\0')) {
      uStack_a0 = uVar2;
      iStack_9c = iVar1;
    }
    fn_82365BD8(auStack_98,in_stack_00000054);
    uVar3 = fn_82365BD8(auStack_90,param_8);
    uVar4 = fn_82365BD8(auStack_88,param_7);
    uVar5 = fn_82365BD8(auStack_80,param_5);
    uVar6 = fn_82365BD8(auStack_78,param_4);
    uVar7 = fn_82365BD8(auStack_70,param_3);
    uVar8 = fn_82365BD8(auStack_68,param_2);
    fn_823FDDA8(param_1 + 3,uVar8,uVar7,uVar6,uVar5,&uStack_a0,uVar4,uVar3);
  }
  return param_1;
}

