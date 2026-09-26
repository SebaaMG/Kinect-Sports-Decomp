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
extern int fn_8223FD30();
extern int fn_8223FE60();
extern int fn_8223FFB8();
extern int fn_82240070();


int * fn_8223B728(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_40 [4];
  char cStack_3c;
  
  uVar1 = param_2[4];
  uVar5 = 0;
  uVar4 = *(ulonglong *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  if (((longlong)uVar4 < 1) || (uVar4 = uVar4 & 0xffffffff, uVar6 = uVar4 - uVar1, uVar4 <= uVar1))
  {
    uVar6 = 0;
  }
  fn_8223FD30(auStack_40,param_1);
  if (cStack_3c == '\0') {
    uVar5 = 4;
  }
  else {
    if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 0x1c0) != 0x40) {
      uVar4 = uVar6 & 0xffffffff;
      while (uVar4 != 0) {
        iVar3 = fn_8223FFB8(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                                *(undefined1 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar3 == -1) {
          uVar5 = 4;
          goto LAB_8223b7f4;
        }
        uVar6 = uVar6 - 1;
        uVar4 = uVar6;
      }
    }
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
    uVar4 = (**(code **)(*piVar2 + 0x24))(piVar2,param_2,(ulonglong)uVar1);
    if (uVar4 == uVar1) {
LAB_8223b7f4:
      uVar4 = uVar6 & 0xffffffff;
      while (uVar4 != 0) {
        iVar3 = fn_8223FFB8(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                                *(undefined1 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar3 == -1) {
          uVar5 = 4;
          break;
        }
        uVar6 = uVar6 - 1;
        uVar4 = uVar6;
      }
    }
    else {
      uVar5 = 4;
    }
    *(undefined8 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20) = 0;
  }
  iVar3 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar5 != 0) {
    uVar5 = *(uint *)(iVar3 + 0xc) | uVar5;
    if (*(int *)(iVar3 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    fn_82240070(iVar3,uVar5,0);
  }
  fn_8223FE60(auStack_40);
  return param_1;
}

