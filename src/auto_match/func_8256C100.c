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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_82517978();
extern int fn_8256C480();
extern int fn_8256D528();
extern int fn_827D96A0();
extern int fn_827D9C40();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


undefined8
fn_8256C100(int param_1,undefined8 param_2,undefined8 param_3,code *param_4,undefined8 param_5,
             ulonglong param_6,undefined4 *param_7,undefined8 param_8)

{
  uint uVar1;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar2;
  undefined8 uVar6;
  ulonglong uVar7;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  for (uVar7 = (ulonglong)*(uint *)(param_1 + 0x9c); (uVar7 & 0xffffffff) != (ulonglong)uVar1;
      uVar7 = uVar7 + 8) {
    puVar3 = (uint *)fn_82365BD8(&uStack_78,uVar7);
    iVar4 = fn_827D96A0((ulonglong)*puVar3 + 0x1f8);
    iVar5 = fn_827D96A0(param_2);
    if (puVar3[1] != 0) {
      fn_822315A0();
    }
    if (iVar5 == iVar4) break;
  }
  uVar6 = 0;
  iStack_80 = 0;
  iStack_7c = 0;
  if ((uVar7 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0xa0)) {
    uStack_78 = 0;
    uStack_74 = 0;
    fn_82517978(&uStack_78,*param_7,param_7[1],0);
    fn_8256C480(param_2,param_3,param_4,param_5,&iStack_80,&uStack_78,param_8);
    iVar4 = 0;
    if (iStack_80 != 0) {
      fn_82376640(param_1 + 0x9c,&iStack_80);
      iVar4 = iStack_80;
    }
    uVar6 = 1;
  }
  else {
    fn_8256D528(&iStack_80,uVar7);
    iVar4 = iStack_80;
    if (param_4 != (code *)0x0) {
      uVar2 = fn_827D9C40(&uStack_78,iStack_80);
      (*param_4)(uVar2,param_5);
    }
  }
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x1f0) = *(int *)(iVar4 + 0x1f0) + 1;
  }
  if ((param_6 & 0xffffffff) != 0) {
    fn_8256D528(param_6,&iStack_80);
  }
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return uVar6;
}

