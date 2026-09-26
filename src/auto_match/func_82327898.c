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
extern unsigned int fStack_64;
extern int fn_822C0AA0();
extern int fn_82321138();
extern int fn_823223C0();
extern int fn_8234B0C8();
extern int fn_8265CA20();
extern int fn_8288DCC0();
extern int fn_828A12E8();
extern int fn_828B55B0();
extern unsigned int iStack_7c;
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_90;


void fn_82327898(double param_1,int param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int in_stack_00000054;
  undefined4 uStack_90;
  int aiStack_8c [3];
  uint uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  
  uVar1 = *(uint *)(param_2 + 0xbc);
  uVar7 = (ulonglong)uVar1;
  uVar5 = fn_828A12E8(*(undefined4 *)(param_2 + 0x10));
  iVar6 = fn_8288DCC0(uVar5,param_7);
  if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0xbc), iVar6 != 0)) {
    fStack_64 = (float)param_1;
    uStack_70 = (undefined4)param_4;
    uStack_80 = uVar1;
    iStack_7c = iVar6;
    uStack_78 = param_8;
    uStack_74 = param_3;
    uStack_6c = param_6;
    uStack_68 = param_5;
    fn_82321138(uVar7 + 0x508,&uStack_80);
    uStack_90 = param_3;
    fn_823223C0(aiStack_8c,uVar7 + 0x2a0,&uStack_90);
    fn_822C0AA0(uVar7,param_4,*(undefined4 *)(aiStack_8c[0] + 0x10));
    fn_8234B0C8((double)lbl_8218E8E8,(ulonglong)*(uint *)(iVar6 + 0x118) + 0x2c0,
                      0xffffffff821acc9c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0xd0);
  puVar8 = (undefined4 *)*puVar2;
  while (puVar8 != puVar2) {
    if (puVar8[2] == in_stack_00000054) {
      puVar3 = (undefined4 *)puVar8[1];
      puVar4 = (undefined4 *)*puVar8;
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      fn_8265CA20(puVar8);
      *(int *)(param_2 + 0xd4) = *(int *)(param_2 + 0xd4) + -1;
      puVar8 = puVar4;
    }
    else {
      puVar8 = (undefined4 *)*puVar8;
    }
  }
  fn_828B55B0(param_7);
  return;
}

