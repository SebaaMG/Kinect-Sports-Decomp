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
extern int fn_82FABF68();
extern int fn_82FB2590();
extern int fn_82FB5408();
extern int fn_82FB5640();
extern int fn_82FB5D80();
extern int fn_82FB60A0();
extern int fn_8300CA50();
extern int fn_8300CAF0();
extern unsigned int lbl_831BC768;


undefined8
fn_82FB5E50(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 auStack_40 [16];
  
  *(int *)(param_1 + 0x4c) = (int)param_5;
  uVar1 = fn_82FABF68();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  uVar1 = fn_8300CA50(param_1 + 0x40,param_4,param_5);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  uVar1 = fn_82FB60A0(param_1 + 0x54,8,0xffffffffffffffff,lbl_831BC768);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uVar2 = fn_8300CAF0(param_1 + 0x40,*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x28),param_4,
                          param_5);
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = fn_82FB5408(param_1,0,param_6);
    if (((uVar3 & 0xffffffff) != 0) && (iVar4 = fn_82FB5640(param_1,uVar3), iVar4 == 1)) {
      iVar4 = fn_82FB5D80(param_1,uVar2);
      if (iVar4 != 0) {
        *param_6 = iVar4;
        *(int *)(param_1 + 0x48) = (int)uVar2;
        return uVar1;
      }
      goto LAB_82fb5f8c;
    }
  }
  else {
    fn_82FB2590(*(undefined4 *)(param_1 + 0x44),uVar2,auStack_40);
    uVar3 = fn_82FB5408(param_1,auStack_40[0],param_6);
    if (((uVar3 & 0xffffffff) != 0) && (iVar4 = fn_82FB5640(param_1,uVar3), iVar4 == 1))
    goto LAB_82fb5f8c;
  }
  uVar1 = 2;
LAB_82fb5f8c:
  *(int *)(param_1 + 0x48) = (int)uVar2;
  return uVar1;
}

