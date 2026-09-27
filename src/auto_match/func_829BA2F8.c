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
extern int fn_829AE270();
extern int fn_829B0F38();
extern int fn_829B9B60();
extern unsigned int lbl_82005730;
extern unsigned int lbl_82054E10;
extern unsigned int lbl_82054E18;
extern float lbl_82054EA0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829BA2F8(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte abStack_30;
  
  uVar1 = *(uint *)(param_1 + 0x558);
  if ((uVar1 & 1) == 0) {
    fn_829AB0F0(param_1,0xffffffff82054f1c);
  }
  else {
    if ((uVar1 & 4) != 0) {
      uVar3 = 0xffffffff82054ee8;
      goto LAB_829ba354;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
        uVar3 = 0xffffffff82054eb8;
        goto LAB_829ba354;
      }
    }
    else {
      fn_829AB128(param_1,0xffffffff82054ed0);
    }
  }
  if ((param_3 & 0xffffffff) == 1) {
    fn_829B0F38(param_1,&abStack_30,1);
    fn_829AB308(param_1,&abStack_30,1);
    iVar2 = fn_829B9B60(param_1,0);
    if (iVar2 != 0) {
      return;
    }
    if (3 < abStack_30) {
      fn_829AB128(param_1,0xffffffff82054ea4);
      return;
    }
    if (((*(uint *)(param_2 + 8) & 1) != 0) &&
       (lbl_82054E10 <
        ABS(((double)(*(float *)(param_1 + 0x630) * lbl_82054EA0) + lbl_82005730) - lbl_82054E18)))
    {
      fn_829AB128(param_1,0xffffffff82054dd8);
    }
    fn_829AE270(param_1,param_2,abStack_30);
    return;
  }
  uVar3 = 0xffffffff82054f00;
LAB_829ba354:
  fn_829AB128(param_1,uVar3);
  fn_829B9B60(param_1,param_3);
  return;
}

