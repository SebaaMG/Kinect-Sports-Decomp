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
extern int fn_829AB0F0();
extern int fn_829AB128();
extern int fn_829AB308();
extern int fn_829AE0D8();
extern int fn_829B0F38();
extern int fn_829B9B60();
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_82054E10;
extern unsigned int lbl_82054E18;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829BA158(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte bStack_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  longlong lStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x558);
  if ((uVar1 & 1) == 0) {
    fn_829AB0F0(param_1,0xffffffff82054e84);
  }
  else {
    if ((uVar1 & 4) != 0) {
      uVar3 = 0xffffffff82054e50;
      goto LAB_829ba1b4;
    }
    if ((uVar1 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        uVar3 = 0xffffffff82054e20;
        goto LAB_829ba1b4;
      }
    }
    else {
      fn_829AB128(param_1,0xffffffff82054e38);
    }
  }
  if ((param_3 & 0xffffffff) == 4) {
    fn_829B0F38(param_1,&bStack_30,4);
    fn_829AB308(param_1,&bStack_30,4);
    iVar2 = fn_829B9B60(param_1,0);
    if (iVar2 != 0) {
      return;
    }
    lStack_28 = (((ulonglong)bStack_30 * 0x100 + (ulonglong)bStack_2f) * 0x100 +
                (ulonglong)bStack_2e) * 0x100 + (ulonglong)bStack_2d;
    if (lStack_28 == 0) {
      return;
    }
    if (((*(uint *)(param_2 + 8) & 0x800) != 0) &&
       (lbl_82054E10 < ABS((double)lStack_28 - lbl_82054E18))) {
      fn_829AB128(param_1,0xffffffff82054dd8);
      return;
    }
    *(float *)(param_1 + 0x630) = (float)lStack_28 * lbl_8201DCB8;
    fn_829AE0D8(param_1,param_2);
    return;
  }
  uVar3 = 0xffffffff82054e68;
LAB_829ba1b4:
  fn_829AB128(param_1,uVar3);
  fn_829B9B60(param_1,param_3);
  return;
}

