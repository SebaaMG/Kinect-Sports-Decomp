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
extern unsigned int *auStack_a0;
extern int fn_8265CA20();
extern int fn_828E9D28();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA180();
extern unsigned int iStack_88;
extern unsigned int lbl_82026D2C;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


void fn_828E0EE0(int *param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_70 [112];
  
  uVar1 = *(uint *)(&lbl_82026D2C + param_2 * 4);
  (**(code **)(*param_1 + 0x40))(param_1,auStack_70);
  puStack_90 = auStack_70 + (uVar1 >> 3);
  iStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0x41;
  fn_828E9D28(auStack_a0,puStack_90,0x41);
  if ((uVar1 & 7) != 0) {
    iVar2 = fn_828E9DA8(auStack_a0);
    iVar3 = fn_828E9D90(auStack_a0);
    if ((int)(uVar1 & 7) <= iVar2 - iVar3) {
      fn_828E9FF8(auStack_a0,uVar1 & 7);
    }
  }
  iVar2 = fn_828E9DA8(auStack_a0);
  iVar3 = fn_828E9D90(auStack_a0);
  if ((int)((param_4 & 0xffffffff) << 3) <= iVar2 - iVar3) {
    fn_828EA180(auStack_a0,param_3,param_4);
  }
  if (iStack_88 != 0) {
    fn_8265CA20();
  }
  return;
}

