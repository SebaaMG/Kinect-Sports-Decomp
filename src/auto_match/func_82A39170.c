extern int *piRam83219598;
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
extern unsigned int *auStack_40;
extern int fn_82A37888();
extern int fn_82A37BC8();
extern int fn_82A381F0();
extern int fn_82A383C0();


undefined8 fn_82A39170(undefined8 param_1)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  int *piVar5;
  undefined4 auStack_40;

  piVar1 = piRam83219598;
  piVar5 = piRam83219598 + 0x14;
  iVar3 = fn_82A381F0(piVar5,param_1,0);
  if (iVar3 == 0) {
    uVar2 = (**(code **)(*piVar1 + 4))(param_1);
  }
  else {
    iVar4 = -0x3fffffff;
    if ((code *)piVar1[0xf] != (code *)0x0) {
      iVar4 = (*(code *)piVar1[0xf])(0xffffffff820893a4,param_1,5,0,0,0,0,&auStack_40);
    }
    fn_82A37888(piVar1 + 0x31,*(undefined4 *)(iVar3 + 4));
    fn_82A37BC8(piVar1 + 0x23,*(undefined4 *)(iVar3 + 0x10));
    uVar2 = fn_82A383C0(piVar5,param_1);
    if (((code *)piVar1[0x10] != (code *)0x0) && (-1 < iVar4)) {
      (*(code *)piVar1[0x10])(uVar2,auStack_40);
    }
  }
  return uVar2;
}
