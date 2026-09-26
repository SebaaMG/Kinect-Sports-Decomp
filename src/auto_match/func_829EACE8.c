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
extern int fn_829E8C48();
extern int fn_829E9A88();
extern int fn_829EA248();
extern int fn_829EA708();
extern int fn_829EE260();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


ulonglong fn_829EACE8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  iVar2 = 0;
  uVar3 = 0;
  if ((int)(param_1[0x31] - param_1[0x30]) / 0x24 != 0) {
    do {
      iVar1 = fn_829EE260(param_1 + 0x2e,uVar3);
      if (iVar2 <= *(int *)(iVar1 + 0x1c)) {
        iVar2 = fn_829EE260(param_1 + 0x2e,uVar3);
        iVar2 = *(int *)(iVar2 + 0x1c);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)((int)(param_1[0x31] - param_1[0x30]) / 0x24));
  }
  uVar3 = (ulonglong)(uint)param_1[6];
  uVar4 = 0x80000 / (((longlong)iVar2 * (longlong)(int)param_1[8] & 0x7ffffffU) << 5);
  uVar5 = (uint)uVar4;
  if (((int)uVar5 <= (int)param_1[6]) && (uVar3 = uVar4, uVar5 < 0x21)) {
    uVar3 = 0x20;
  }
  uVar4 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x34);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_829E9A88(uVar4,uVar3,iVar2,param_1[8],2);
  }
  param_1[0x53] = iVar1;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(iVar1 + 4);
    if ((((-1 < (int)*(uint *)(iVar1 + 4)) &&
         (uVar4 = fn_829E8C48(param_1 + 0x60,*param_1,1,param_1[8],4,2,2), -1 < (int)uVar4)) &&
        (uVar4 = fn_829E8C48(param_1 + 0x6d,uVar3,1,param_1[8],4,2,2), -1 < (int)uVar4)) &&
       ((uVar4 = fn_829EA248(param_1 + 0x54,iVar2), -1 < (int)uVar4 &&
        (uVar4 = fn_829EA708(param_1 + 0x58,iVar2), -1 < (int)uVar4)))) {
      uVar4 = fn_829EA248(param_1 + 0x5c,iVar2);
    }
  }
  return uVar4;
}

