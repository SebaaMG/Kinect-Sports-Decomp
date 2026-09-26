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
extern unsigned int *auStack_80;
extern int fn_827D8830();
extern int fn_827D8910();
extern int fn_827DCA38();
extern int fn_827DCBF8();
extern int fn_827DE048();
extern int fn_827E81A8();
extern int fn_82811438();
extern int fn_82F6D6A0();
extern unsigned int lbl_83156AA0;


undefined4 *
fn_827E3DE0(double param_1,double param_2,double param_3,undefined4 *param_4,undefined1 param_5,
             byte param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puStack00000014;
  undefined4 in_stack_00000054;
  undefined1 in_stack_0000005f;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  puStack00000014 = param_4;
  uVar1 = fn_827DE048(auStack_70);
  fn_827D8910(param_4 + 1,uVar1);
  param_4[0x13] = (float)param_3;
  param_4[0x12] = param_8;
  param_4[0x14] = (float)param_1;
  param_4[0x15] = (float)param_2;
  *(byte *)(param_4 + 0x17) = param_6;
  param_4[0x11] = param_7;
  puVar6 = param_4 + 0x19;
  param_4[0x16] = in_stack_00000054;
  *(undefined1 *)((int)param_4 + 0x5d) = param_5;
  *(undefined1 *)((int)param_4 + 0x5e) = in_stack_0000005f;
  fn_827D8830(puVar6);
  iVar7 = 0;
  param_4[0x23] = 0;
  lVar2 = -1;
  uVar5 = (ulonglong)param_6 << 6;
  if (0x3ffffff < (ulonglong)param_6) {
    uVar5 = 0xffffffffffffffff;
  }
  if ((uVar5 & 0xffffffff) < 0xfffffffc) {
    lVar2 = uVar5 + 4;
  }
  puVar3 = (uint *)fn_827E81A8(lVar2);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = (uint)param_6;
    puVar3 = puVar3 + 1;
    fn_82F6D6A0(puVar3,0x40,(ulonglong)param_6,0xffffffff827e82c0,0xffffffff827e82f0);
  }
  *param_4 = puVar3;
  if (*(char *)((int)param_4 + 0x5e) == '\0') {
    param_4[0x18] = 0;
  }
  else {
    fn_82811438(auStack_70,auStack_80,0x10);
    uVar4 = (**(code **)(*(int *)lbl_83156AA0 + 0xc))
                      (lbl_83156AA0,
                       (longlong)(int)(uint)*(byte *)((int)param_4 + 0x5e) *
                       (longlong)(int)param_4[0x11],auStack_70);
    param_4[0x18] = uVar4;
  }
  fn_827DCA38(puVar6,*(undefined1 *)((int)param_4 + 0x5e));
  if (*(char *)((int)param_4 + 0x5e) != '\0') {
    do {
      fn_827DCBF8(puVar6,auStack_80);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)((int)param_4 + 0x5e));
  }
  return param_4;
}

