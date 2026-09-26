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
extern unsigned int *auStack_38;
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256AF38();
extern int fn_8256B080();
extern int fn_8256BD38();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82569C38(undefined4 *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [56];
  
  uVar2 = fn_82569B10();
  fn_82549610(&uStack_3c,uVar2);
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    uStack_40 = uVar1;
    lVar3 = fn_82569B10();
    piVar4 = (int *)fn_8256BD38(auStack_38,lVar3 + 0x10,&uStack_40);
    iVar6 = *piVar4;
    iVar5 = fn_82569B10();
    if (iVar6 == *(int *)(iVar5 + 0x14)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0xc);
    }
    if (iVar6 == 0) {
      fn_8256AF38(uVar1,param_1,param_2);
    }
    else {
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      *(int *)(param_2 + 0x14) = iVar6;
    }
    fn_8256B080(param_1,param_3,*(undefined4 *)(param_2 + 0x14));
  }
  fn_82A1BB18();
  fn_8259C738(uStack_3c);
  return;
}

