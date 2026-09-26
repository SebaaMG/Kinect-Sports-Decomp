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
extern unsigned int *auStack_28;
extern int fn_8251FA58();
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256BA58();
extern int fn_8256BD38();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8256A790(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  uVar1 = fn_82569B10();
  fn_82549610(&uStack_2c,uVar1);
  if (param_1 != (undefined4 *)0x0) {
    uStack_30 = *param_1;
    lVar2 = fn_82569B10();
    piVar3 = (int *)fn_8256BD38(auStack_28,lVar2 + 0x10,&uStack_30);
    iVar5 = *piVar3;
    iVar4 = fn_82569B10();
    if (iVar5 == *(int *)(iVar4 + 0x14)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    lVar2 = (ulonglong)*(uint *)(iVar5 + 4) - 1;
    *(int *)(iVar5 + 4) = (int)lVar2;
    if (lVar2 == 0) {
      fn_8256BA58();
    }
    else if (*(int *)(iVar5 + 8) != 0) {
      fn_8251FA58();
    }
  }
  *param_2 = 0;
  fn_82A1BB18();
  fn_8259C738(uStack_2c);
  return;
}

