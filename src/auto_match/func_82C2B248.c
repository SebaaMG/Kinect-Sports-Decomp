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
extern int fn_82C2A820();
extern int fn_82C2AC98();
extern int fn_82C2B040();
extern unsigned int iStack_30;


ulonglong fn_82C2B248(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iStack_30;
  int *apiStack_2c [11];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apiStack_2c[0] = (int *)0x0;
  iStack_30 = 0;
  *(uint *)(iVar1 + 0x44) = param_2;
  *(undefined8 *)(iVar1 + 0x48) = *(undefined8 *)(iVar1 + 0x28);
  while( true ) {
    lVar4 = *(longlong *)(iVar1 + 0x48);
    uVar3 = fn_82C2AC98(param_1,lVar4,apiStack_2c,&iStack_30);
    piVar2 = apiStack_2c[0];
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (iStack_30 == 0) break;
    if ((lVar4 == *(longlong *)(*apiStack_2c[0] + 8)) &&
       (uVar3 = fn_82C2A820(param_1), (int)uVar3 < 0)) {
      return uVar3;
    }
    uVar9 = *(ulonglong *)(iVar1 + 0x48);
    uVar5 = (ulonglong)*(uint *)(iVar1 + 0x44);
    uVar7 = (ulonglong)*(uint *)(*piVar2 + 4);
    uVar6 = *(ulonglong *)(*piVar2 + 8);
    uVar8 = uVar5;
    if ((uVar7 - uVar9) + uVar6 < uVar5) {
      uVar8 = ((uVar6 & 0xffffffff) - (uVar9 & 0xffffffff)) + uVar7;
    }
    uVar9 = (uVar8 & 0xffffffff) + uVar9;
    *(int *)(iVar1 + 0x44) = (int)(uVar5 - uVar8);
    *(ulonglong *)(iVar1 + 0x48) = uVar9;
    if ((uVar5 - uVar8 == 0) || (*(ulonglong *)(iVar1 + 0x20) < uVar9)) break;
  }
  if (*(int *)(iVar1 + 0x44) != 0) {
    uVar3 = fn_82C2B040(param_1);
    uVar3 = -(ulonglong)(uVar3 != 0xffffffff80500000) & uVar3;
  }
  *(ulonglong *)(iVar1 + 0x28) = (ulonglong)param_2 + *(longlong *)(iVar1 + 0x28);
  return uVar3;
}

