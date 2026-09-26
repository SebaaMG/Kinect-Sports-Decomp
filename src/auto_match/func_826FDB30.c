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
extern int fn_826F8490();


void fn_826FDB30(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar8 = *param_1;
  if (iVar8 != 0) {
    uVar1 = *(uint *)(iVar8 + 4);
    uVar4 = *(uint *)(*param_2 + 0xc) & uVar1;
    iVar6 = uVar4 * 0xc + iVar8;
    if ((*(int *)(iVar6 + 8) != -2) && ((*(uint *)(*(int *)(iVar6 + 0xc) + 0xc) & uVar1) == uVar4))
    {
      uVar2 = uVar4;
      uVar5 = 0xffffffff;
      while( true ) {
        uVar7 = uVar2;
        puVar9 = (uint *)(iVar6 + 8);
        if (((*(uint *)(*(int *)(iVar6 + 0xc) + 0xc) & uVar1) == uVar4) &&
           (*(int *)(iVar6 + 0xc) == *param_2)) break;
        uVar2 = *puVar9;
        if (uVar2 == 0xffffffff) {
          return;
        }
        iVar6 = uVar2 * 0xc + iVar8;
        uVar5 = uVar7;
      }
      if (uVar4 == uVar7) {
        if (*puVar9 != 0xffffffff) {
          iVar8 = *puVar9 * 0xc + iVar8;
          fn_826F8490((int *)(iVar6 + 0xc),0);
          *puVar9 = 0xfffffffe;
          *puVar9 = *(uint *)(iVar8 + 8);
          iVar3 = *(int *)(iVar8 + 0xc);
          *(int *)(iVar6 + 0xc) = iVar3;
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
          puVar9 = (uint *)(iVar8 + 8);
        }
      }
      else {
        *(uint *)(uVar5 * 0xc + iVar8 + 8) = *puVar9;
      }
      fn_826F8490(puVar9 + 1,0);
      *puVar9 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
    }
  }
  return;
}

