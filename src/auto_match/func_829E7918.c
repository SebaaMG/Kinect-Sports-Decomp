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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_40;
extern int fn_829E7640();
extern int fn_829E7830();
extern int fn_829E8B70();
extern int fn_829E8C48();
extern int fn_829E8FA8();
extern int fn_829E9078();
extern int fn_829E97C8();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


longlong fn_829E7918(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar4;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar5;
  uint auStack_40 [2];
  longlong lStack_38;
  
  puVar5 = (undefined4 *)(param_1 + 4);
  fn_829E7640(puVar5);
  iVar4 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x28);
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_829E8FA8();
  }
  *puVar5 = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = fn_829E97C8(uVar2,param_2,1);
    if (lVar3 < 0) {
      fn_829E7640(puVar5);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else {
      iVar4 = fn_829E9078(*puVar5,auStack_40);
      if (-1 < iVar4) {
        uVar1 = (uint)SQRT((float)auStack_40[0]);
        lStack_38 = (longlong)(int)uVar1;
        *(uint *)(param_1 + 8) = uVar1;
        if ((0 < (int)uVar1) &&
           (*(uint *)(param_1 + 0xc) = auStack_40[0] / uVar1, uVar1 == auStack_40[0] / uVar1)) {
          fn_829E8B70(param_1 + 0x14);
          fn_829E8C48(param_1 + 0x14,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc)
                          ,1,4,2,0);
          *(undefined1 *)(param_1 + 0x10) = 1;
          fn_829E7830(param_1 + 0x48,
                        (longlong)*(int *)(param_1 + 0xc) * (longlong)*(int *)(param_1 + 8));
        }
      }
    }
  }
  return lVar3;
}

