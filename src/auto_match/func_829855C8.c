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
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82933088();
extern int fn_82983380();


int fn_829855C8(undefined8 param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  for (; *(int *)(param_2 + 4) != 3; param_2 = *(int *)(param_2 + 8)) {
  }
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,0,0,0,1,param_2 + 0x10);
  }
  if (iVar2 == 0) {
LAB_82985634:
    iVar2 = 0;
  }
  else {
    if (param_3 != (int *)0x0) {
      iVar3 = (**(code **)(*param_3 + 4))(param_3);
      *(int *)(iVar2 + 0x20) = iVar3;
      if (iVar3 == 0) goto LAB_82985634;
    }
    piVar6 = (int *)(iVar2 + 0x10);
    for (iVar3 = *(int *)(iVar2 + 0x20); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar5 = *(int *)(iVar3 + 8);
      if (((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0xe)) && (*(int *)(iVar5 + 0x10) != 0)) {
        uVar1 = fn_82930318(0x14);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_829304E0(uVar1,0,0,0xffffffff8204e398);
        }
        *piVar6 = iVar4;
        if (iVar4 == 0) goto LAB_82985634;
        iVar5 = fn_82930458(*(undefined4 *)(iVar5 + 0x10));
        *(int *)(*piVar6 + 8) = iVar5;
        if (iVar5 == 0) goto LAB_82985634;
        piVar6 = (int *)(*piVar6 + 0xc);
      }
    }
    fn_82983380(param_1,iVar2);
  }
  return iVar2;
}

