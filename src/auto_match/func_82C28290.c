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
extern int fn_82C27C38();
extern int fn_82C29788();
extern unsigned int iStack_40;


void fn_82C28290(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iStack_40;
  int *apiStack_3c [15];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apiStack_3c[0] = (int *)0x0;
  iStack_40 = 0;
  if ((*(longlong *)(iVar1 + 0x28) == *(longlong *)(iVar1 + 0x20)) ||
     (iVar4 = (*(code *)**(undefined4 **)(iVar1 + 0x4c))(*(undefined4 **)(iVar1 + 0x4c)), -1 < iVar4
     )) {
    *(uint *)(iVar1 + 0x5c) = param_2;
    *(undefined8 *)(iVar1 + 0x60) = *(undefined8 *)(iVar1 + 0x40);
    while( true ) {
      lVar5 = *(longlong *)(iVar1 + 0x60);
      iVar4 = fn_82C29788(param_1,lVar5,apiStack_3c,&iStack_40);
      piVar3 = apiStack_3c[0];
      if (iVar4 < 0) {
        return;
      }
      if (iStack_40 == 0) break;
      if ((lVar5 == *(longlong *)(*apiStack_3c[0] + 8)) &&
         (iVar4 = fn_82C27C38(param_1), iVar4 < 0)) {
        return;
      }
      uVar10 = *(ulonglong *)(iVar1 + 0x60);
      uVar7 = (ulonglong)*(uint *)(iVar1 + 0x5c);
      uVar9 = (ulonglong)*(uint *)(*piVar3 + 4);
      uVar8 = *(ulonglong *)(*piVar3 + 8);
      uVar6 = (uVar9 - uVar10) + uVar8;
      if (uVar6 < uVar7) {
        piVar3[1] = piVar3[1] + -1;
        uVar7 = ((uVar8 & 0xffffffff) - (uVar10 & 0xffffffff)) + uVar9;
      }
      else if (uVar6 == uVar7) {
        piVar3[1] = piVar3[1] + -1;
      }
      lVar5 = *(uint *)(iVar1 + 0x5c) - uVar7;
      uVar6 = (uVar7 & 0xffffffff) + *(longlong *)(iVar1 + 0x60);
      *(int *)(iVar1 + 0x5c) = (int)lVar5;
      *(ulonglong *)(iVar1 + 0x60) = uVar6;
      if ((lVar5 == 0) || (*(ulonglong *)(iVar1 + 0x20) < uVar6)) break;
    }
    if (*(uint *)(iVar1 + 0x5c) != 0) {
      iVar4 = (*(code *)**(undefined4 **)(iVar1 + 0x4c))
                        (*(undefined4 **)(iVar1 + 0x4c),
                         (ulonglong)*(uint *)(iVar1 + 0x5c) + *(longlong *)(iVar1 + 0x20));
      if (iVar4 < 0) {
        return;
      }
      uVar2 = *(uint *)(iVar1 + 0x5c);
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      *(ulonglong *)(iVar1 + 0x20) = (ulonglong)uVar2 + *(longlong *)(iVar1 + 0x20);
      *(ulonglong *)(iVar1 + 0x28) = *(longlong *)(iVar1 + 0x28) + (ulonglong)uVar2;
    }
    *(ulonglong *)(iVar1 + 0x40) = (ulonglong)param_2 + *(longlong *)(iVar1 + 0x40);
  }
  return;
}

