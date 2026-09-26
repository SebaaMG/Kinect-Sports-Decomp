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
extern int fn_82758E40();
extern int fn_827A1590();
extern int fn_827A8770();
extern int fn_827AEB38();
extern int fn_827AF5B8();


void fn_827A1FB0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar5;
  undefined8 uVar4;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)*(uint *)(param_2 + 0x4c);
  uVar5 = fn_827A8770(param_2 + 0x24);
  dVar7 = (double)uVar5;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(param_2 + 0x114) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x114) + 0x14);
    }
    fn_827AEB38(param_1,uVar6);
  }
  if ((*(int *)(param_1 + 4) != 0) &&
     ((((*(char *)(param_1 + 0x18) == '\0' || ((double)*(float *)(param_1 + 0xa4) != dVar8)) ||
       ((double)*(float *)(param_1 + 0xa8) != dVar7)) ||
      (*(short *)(param_1 + 0xac) != *(short *)(param_2 + 0x138))))) {
    *(float *)(param_1 + 0xa4) = (float)dVar8;
    *(float *)(param_1 + 0xa8) = (float)dVar7;
    *(undefined2 *)(param_1 + 0xac) = *(undefined2 *)(param_2 + 0x138);
    uVar4 = fn_827A1590(param_2,*(undefined4 *)(param_2 + 0x38));
    fn_827AF5B8((double)*(float *)(param_1 + 0xa4),(double)*(float *)(param_1 + 0xa8),param_1,
                      param_1 + 0x1c,param_2 + 0x24,param_2 + 0x3c,uVar4);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x54) != 0) || (bVar2 = true, *(int *)(iVar1 + 0x60) != 0)) {
      bVar2 = false;
    }
    bVar3 = false;
    if (!bVar2) goto LAB_827a20f4;
  }
  bVar3 = true;
LAB_827a20f4:
  if (!bVar3) {
    fn_82758E40(param_1 + 0x1c,param_3,param_4,param_5,0,0);
  }
  return;
}

