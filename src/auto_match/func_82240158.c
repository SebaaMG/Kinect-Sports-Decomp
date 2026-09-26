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


int * fn_82240158(int *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  char *pcVar6;
  longlong lVar5;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_40 [4];
  char cStack_3c;
  
  uVar7 = 0;
  lVar5 = param_2;
  do {
    pcVar6 = (char *)lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar6 != '\0');
  uVar2 = (lVar5 - param_2) - 1U & 0xffffffff;
  lVar5 = *(longlong *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  if ((lVar5 < 1) || (lVar8 = lVar5 - uVar2, lVar5 <= (longlong)uVar2)) {
    lVar8 = 0;
  }
  fn_8223FD30(auStack_40,param_1);
  if (cStack_3c == '\0') {
    uVar7 = 4;
  }
  else {
    if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 0x1c0) != 0x40) {
      for (; 0 < lVar8; lVar8 = lVar8 + -1) {
        iVar4 = fn_8223FFB8(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                              *(undefined1 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar4 == -1) goto LAB_82240254;
      }
    }
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
    uVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,param_2,uVar2);
    if (uVar3 == uVar2) {
      for (; 0 < lVar8; lVar8 = lVar8 + -1) {
        iVar4 = fn_8223FFB8(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                              *(undefined1 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar4 == -1) goto LAB_82240254;
      }
    }
    else {
LAB_82240254:
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

