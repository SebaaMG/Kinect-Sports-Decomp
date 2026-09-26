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
extern int fn_826A7918();
extern int fn_826BDE10();


void fn_826BE998(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  iVar7 = *param_1;
  if (iVar7 != 0) {
    uVar1 = *(uint *)(iVar7 + 4);
    uVar3 = *(uint *)(*param_2 + 0xc) & uVar1;
    iVar6 = uVar3 * 0x20 + iVar7;
    if ((*(int *)(iVar6 + 8) != -2) && ((*(uint *)(*(int *)(iVar6 + 0x10) + 0xc) & uVar1) == uVar3))
    {
      uVar5 = 0xffffffff;
      uVar4 = uVar3;
      while( true ) {
        puVar8 = (uint *)(iVar6 + 8);
        if (((*(uint *)(*(int *)(iVar6 + 0x10) + 0xc) & uVar1) == uVar3) &&
           (*(int *)(iVar6 + 0x10) == *param_2)) break;
        uVar2 = *puVar8;
        if (uVar2 == 0xffffffff) {
          return;
        }
        iVar6 = uVar2 * 0x20 + iVar7;
        uVar5 = uVar4;
        uVar4 = uVar2;
      }
      if (uVar3 == uVar4) {
        if (*puVar8 != 0xffffffff) {
          iVar7 = *puVar8 * 0x20 + iVar7;
          fn_826A7918(iVar6 + 0x10,0);
          *puVar8 = 0xfffffffe;
          *puVar8 = *(uint *)(iVar7 + 8);
          fn_826BDE10(iVar6 + 0x10,iVar7 + 0x10);
          puVar8 = (uint *)(iVar7 + 8);
        }
      }
      else {
        *(uint *)(uVar5 * 0x20 + iVar7 + 8) = *puVar8;
      }
      fn_826A7918(puVar8 + 2,0);
      *puVar8 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
    }
  }
  return;
}

