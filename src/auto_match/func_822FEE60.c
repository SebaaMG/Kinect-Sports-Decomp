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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822EA970();
extern int fn_82365BD8();
extern int fn_82376640();
extern unsigned int iStack_b4;
extern unsigned int stack0x00000054;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_822FEE60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5,uint *param_6,uint *param_7,int *param_8)

{
  uint uVar1;
  uint *puVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 auStack_b8 [4];
  int iStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  puVar3 = (uint *)fn_822EA970(auStack_b8,param_4,param_3,param_2,param_4,&stack0x00000054);
  uStack_c0 = *puVar3;
  uVar5 = (ulonglong)uStack_c0;
  uVar6 = 0;
  uStack_bc = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  if (iStack_b4 != 0) {
    fn_822315A0();
  }
  uVar1 = *param_6;
  uVar2 = fn_822C7578(uVar5 + 0x40,(ulonglong)*param_7 + 4);
  fn_82230218(uVar2,(ulonglong)uVar1 + 4,0,0xffffffffffffffff);
  iVar4 = fn_82365BD8(auStack_b0,param_7);
  fn_82376640(uVar5 + 0x30,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_1,&uStack_c0);
  uVar2 = fn_822C7578((ulonglong)*param_5 + 0x40,param_4);
  fn_82230218(uVar2,param_4,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((ulonglong)*param_6 + 0x40,param_4);
  fn_82230218(uVar2,param_4,0,0xffffffffffffffff);
  iVar4 = *param_8;
  if (param_8[1] - iVar4 >> 2 != 0) {
    uVar5 = (ulonglong)uStack_c0;
    iVar7 = 0;
    do {
      fn_82230110(auStack_80,*(undefined4 *)(iVar7 + iVar4));
      fn_82230110(auStack_a0,*(undefined4 *)(iVar7 + *param_8));
      uVar2 = fn_822C7578(uVar5 + 0x40,auStack_a0);
      fn_82230218(uVar2,auStack_80,0,0xffffffffffffffff);
      fn_82230300(auStack_a0,1,0);
      fn_82230300(auStack_80,1,0);
      iVar4 = *param_8;
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar6 < (uint)(param_8[1] - iVar4 >> 2));
  }
  if (uStack_bc != 0) {
    fn_822315A0();
  }
  if (param_5[1] != 0) {
    fn_822315A0();
  }
  if (param_6[1] != 0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return;
}

