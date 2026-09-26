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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F6E8D4();
extern int fn_82FAB9C0();
extern int fn_82FE89F8();
extern int fn_8300E980();
extern int fn_8301E708();
extern unsigned int lbl_832642E0;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


undefined4 fn_82FEA528(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar1 = register0x0000000c;
  uVar2 = fn_82FE89F8();
  piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x1628,uVar2);
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    uVar6 = (param_3 & 0x3fffffff) * -4 & 0xfffffff0;
    fn_82F6E8D4();
    uVar5 = 0;
    lVar7 = (ZEXT48(&stack0x00000000) - 0x80) + uVar6;
    *(undefined4 *)lVar7 = *puVar1;
    lVar7 = lVar7 + 0x50;
    iVar4 = fn_8301E708(piVar3,param_2,lVar7,param_3);
    if (iVar4 == 1) {
      uVar5 = fn_8300E980(piVar3 + 5,piVar3[3],lVar7,param_3);
    }
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return uVar5;
}

