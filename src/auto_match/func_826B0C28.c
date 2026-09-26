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
extern int fn_826AE5C0();
extern int fn_826AE688();


void fn_826B0C28(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  iVar7 = *param_1;
  if (iVar7 != 0) {
    uVar1 = *(uint *)(iVar7 + 4);
    uVar3 = *(uint *)(*param_2 + 0xc) & uVar1;
    iVar5 = uVar3 * 0x14 + iVar7;
    if ((*(int *)(iVar5 + 8) != -2) && ((*(uint *)(*(int *)(iVar5 + 0xc) + 0xc) & uVar1) == uVar3))
    {
      uVar2 = uVar3;
      uVar4 = 0xffffffff;
      while( true ) {
        uVar6 = uVar2;
        puVar8 = (uint *)(iVar5 + 8);
        if (((*(uint *)(*(int *)(iVar5 + 0xc) + 0xc) & uVar1) == uVar3) &&
           (*(int *)(iVar5 + 0xc) == *param_2)) break;
        uVar2 = *puVar8;
        if (uVar2 == 0xffffffff) {
          return;
        }
        iVar5 = uVar2 * 0x14 + iVar7;
        uVar4 = uVar6;
      }
      if (uVar3 == uVar6) {
        if (*puVar8 != 0xffffffff) {
          iVar7 = *puVar8 * 0x14 + iVar7;
          fn_826AE5C0(iVar5 + 0xc);
          *puVar8 = 0xfffffffe;
          *puVar8 = *(uint *)(iVar7 + 8);
          fn_826AE688(iVar5 + 0xc,iVar7 + 0xc);
          puVar8 = (uint *)(iVar7 + 8);
        }
      }
      else {
        *(uint *)(uVar4 * 0x14 + iVar7 + 8) = *puVar8;
      }
      fn_826AE5C0(puVar8 + 1);
      *puVar8 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
    }
  }
  return;
}

