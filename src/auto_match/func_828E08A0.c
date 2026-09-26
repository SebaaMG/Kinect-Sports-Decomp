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
extern unsigned int *auStack_b0;
extern int fn_8223C478();
extern int fn_8265CA20();
extern int fn_828E03E0();
extern int fn_828E04E8();
extern int fn_828E9D28();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9DB8();
extern int fn_828E9FF8();
extern unsigned int iStack_98;
extern unsigned int lbl_82026CF0;
extern unsigned int lbl_82026D2C;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;


void fn_828E08A0(int *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_b0 [16];
  undefined1 *puStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_80 [128];
  
  uVar1 = *(uint *)(&lbl_82026D2C + param_3 * 4);
  if ((int)param_4 == 0) {
    (**(code **)(*param_1 + 0x40))(param_1,auStack_80);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,auStack_80,param_4);
  }
  puStack_a0 = auStack_80 + (uVar1 >> 3);
  iStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0x41;
  fn_828E9D28(auStack_b0,puStack_a0,0x41);
  if ((uVar1 & 7) != 0) {
    iVar3 = fn_828E9DA8(auStack_b0);
    iVar4 = fn_828E9D90(auStack_b0);
    if ((int)(uVar1 & 7) <= iVar3 - iVar4) {
      fn_828E9FF8(auStack_b0,uVar1 & 7);
    }
  }
  uVar2 = *(undefined4 *)(&lbl_82026CF0 + param_3 * 4);
  fn_8223C478(auStack_b0,uVar2,0);
  fn_828E9DB8(auStack_b0,param_2,uVar2);
  if ((int)param_4 == 0) {
    fn_828E04E8(param_1,auStack_80);
  }
  else {
    fn_828E03E0(param_1,auStack_80,param_4);
  }
  if (iStack_98 != 0) {
    fn_8265CA20();
  }
  return;
}

