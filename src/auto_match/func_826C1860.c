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
extern int fn_826C0018();
extern int fn_826C1018();


void fn_826C1860(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 4);
    uVar4 = *(uint *)(*param_2 + 0xc) & uVar2;
    iVar6 = uVar4 * 0x30 + iVar1;
    if ((*(int *)(iVar6 + 8) != -2) && ((*(uint *)(*(int *)(iVar6 + 0x10) + 0xc) & uVar2) == uVar4))
    {
      uVar3 = uVar4;
      uVar5 = 0xffffffff;
      while( true ) {
        uVar7 = uVar3;
        puVar9 = (uint *)(iVar6 + 8);
        if (((*(uint *)(*(int *)(iVar6 + 0x10) + 0xc) & uVar2) == uVar4) &&
           (*(int *)(iVar6 + 0x10) == *param_2)) break;
        uVar3 = *puVar9;
        if (uVar3 == 0xffffffff) {
          return;
        }
        iVar6 = uVar3 * 0x30 + iVar1;
        uVar5 = uVar7;
      }
      if (uVar4 == uVar7) {
        if (*puVar9 != 0xffffffff) {
          puVar8 = (uint *)(*puVar9 * 0x30 + iVar1 + 8);
          fn_826C0018(iVar6 + 0x10,0);
          *puVar9 = 0xfffffffe;
          fn_826C1018(puVar9,puVar8);
          puVar9 = puVar8;
        }
      }
      else {
        *(uint *)(uVar5 * 0x30 + iVar1 + 8) = *puVar9;
      }
      fn_826C0018(puVar9 + 2,0);
      *puVar9 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
    }
  }
  return;
}

