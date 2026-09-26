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
extern int fn_8223FE60();
extern int fn_82240070();
extern int fn_82296E38();
extern int fn_82297CF0();
extern int fn_82F64CE0();


int * fn_82296618(int *param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_40 [4];
  char cStack_3c;
  
  uVar7 = 0;
  uVar2 = fn_82F64CE0(param_2);
  uVar2 = uVar2 & 0xffffffff;
  lVar6 = *(longlong *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  if ((lVar6 < 1) || (lVar8 = lVar6 - uVar2, lVar6 <= (longlong)uVar2)) {
    lVar8 = 0;
  }
  fn_82297CF0(auStack_40,param_1);
  if (cStack_3c == '\0') {
    uVar7 = 4;
  }
  else {
    if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 0x1c0) != 0x40) {
      for (; 0 < lVar8; lVar8 = lVar8 + -1) {
        sVar5 = fn_82296E38(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                                *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (sVar5 == -1) goto LAB_82296704;
      }
    }
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
    uVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,param_2,uVar2);
    if (uVar3 == uVar2) {
      for (; 0 < lVar8; lVar8 = lVar8 + -1) {
        sVar5 = fn_82296E38(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                                *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (sVar5 == -1) goto LAB_82296704;
      }
    }
    else {
LAB_82296704:
      uVar7 = 4;
    }
    *(undefined8 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20) = 0;
  }
  iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar7 != 0) {
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar7;
    if (*(int *)(iVar4 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    fn_82240070(iVar4,uVar7,0);
  }
  fn_8223FE60(auStack_40);
  return param_1;
}

