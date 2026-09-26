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
extern int fn_82B7BD28();
extern int fn_82BAFE48();
extern int fn_82BC0A30();
extern int fn_82BC13C0();
extern int fn_82BC2958();
extern int fn_82BC3A28();
extern int fn_82BC43D8();
extern int fn_82BC5538();
extern int fn_82BC5580();
extern unsigned int lbl_820E3514;
extern unsigned int lbl_820E36A0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82BC1BA0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar7;
  undefined8 uVar6;
  
  fn_82BC13C0();
  *param_1 = &lbl_820E3514;
  iVar1 = *(int *)(param_4 + 0xab0);
  iVar4 = (lbl_820E36A0 + 6) * 4;
  iVar3 = *(int *)(iVar4 + iVar1);
  if (iVar3 == 0) {
    uVar5 = fn_82BAFE48(*(undefined4 *)(iVar1 + 0xac),0xf);
    uVar2 = *(undefined4 *)(param_4 + 0x5ac);
    puVar7 = (undefined4 *)fn_82B7BD28(uVar2,0x3c4);
    *puVar7 = uVar2;
    if (puVar7 + 1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_82BC3A28(puVar7 + 1,param_1,param_4);
    }
    fn_82BC5580(*(undefined4 *)(iVar1 + 0xa4),uVar6);
    fn_82BC2958(uVar6,0,uVar5);
    fn_82BC0A30(uVar5,uVar6);
    *(int *)(iVar4 + iVar1) = (int)uVar6;
  }
  else {
    uVar5 = (ulonglong)*(uint *)(iVar3 + 0x1c);
  }
  uVar6 = fn_82BC43D8(0x31,param_4);
  fn_82BC2958(uVar6,1,uVar5);
  fn_82BC2958(uVar6,0,param_1);
  fn_82BC0A30(param_1,uVar6);
  fn_82BC5538(*(undefined4 *)(iVar1 + 0xa4),uVar6);
  return param_1;
}

