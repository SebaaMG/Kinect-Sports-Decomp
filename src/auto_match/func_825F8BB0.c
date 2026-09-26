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
extern int fn_82522DF8();
extern int fn_825F8418();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_825F8BB0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
  
  iVar1 = (int)param_1;
  if ((0 < *(int *)(iVar1 + 0x248)) &&
     (lVar5 = (ulonglong)*(uint *)((*(int *)(iVar1 + 0x248) + 0x8b) * 4 + iVar1) * 0x2c + param_1,
     lVar5 != -4)) {
    piVar6 = (int *)((int)lVar5 + 0xc);
    if (*piVar6 != 0) goto LAB_825f8c68;
  }
  iVar3 = fn_825F8418((double)lbl_821CA460,param_1,param_2,param_3,0);
  iVar1 = iVar3 * 0x2c + iVar1;
  puVar4 = (undefined4 *)fn_82522DF8(0x4c);
  *(undefined4 **)(iVar1 + 0xc) = puVar4;
  *puVar4 = 0xffffffff;
  piVar6 = (int *)(iVar1 + 0xc);
  *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10) = 0;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x18) = param_4;
  *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc) = uVar2;
LAB_825f8c68:
  *(int *)(*(int *)(*piVar6 + 4) * 8 + *piVar6 + 0x1c) = (int)param_3;
  *(undefined4 *)((*(int *)(*piVar6 + 4) + 4) * 8 + *piVar6) = *param_2;
  *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + 1;
  return;
}

