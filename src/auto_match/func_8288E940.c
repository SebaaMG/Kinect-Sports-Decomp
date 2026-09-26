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
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_8288B2D8();
extern int fn_8288CD40();
extern int fn_82897620();
extern int fn_82897BA8();
extern int fn_8289AB78();
extern int fn_828A12E8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern unsigned int uStack_50;


longlong fn_8288E940(int *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar5;
  undefined8 uVar4;
  char cVar8;
  int iVar6;
  int iVar7;
  ulonglong uVar9;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [72];
  
  lVar3 = fn_828A12E8(param_1[4]);
  fn_828B5580(auStack_48,param_1 + 5);
  uStack_50 = fn_828B55F8(auStack_48);
  piVar5 = (int *)fn_8288CD40(auStack_4c,lVar3 + 0x94,&uStack_50);
  iVar1 = *(int *)(*piVar5 + 0x40);
  fn_828B55B0(auStack_48);
  uVar4 = (**(code **)(*param_1 + 4))(param_1);
  uVar2 = *(uint *)(iVar1 + 8);
  lVar3 = 1;
  uVar9 = 0;
  if (uVar2 != 0) {
    do {
      fn_8288B2D8(iVar1,uVar9);
      cVar8 = fn_82897BA8();
      if (cVar8 == '\0') {
        iVar6 = fn_82897620(uVar4,uVar9);
        if ((((*(int **)(iVar6 + 0x20) != (int *)0x0) &&
             (iVar7 = (**(code **)(**(int **)(iVar6 + 0x20) + 4))(), iVar7 != 0)) ||
            ((*(int **)(iVar6 + 0x20) != (int *)0x0 &&
             (iVar7 = (**(code **)(**(int **)(iVar6 + 0x20) + 0x14))(), iVar7 != 0)))) &&
           ((cVar8 = fn_8289AB78(iVar6), lVar3 == 0 || (lVar3 = 1, cVar8 == '\0')))) {
          lVar3 = 0;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((uVar9 & 0xffffffff) < (ulonglong)uVar2);
  }
  return lVar3;
}

