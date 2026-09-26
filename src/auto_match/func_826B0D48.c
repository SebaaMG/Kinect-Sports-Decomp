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
extern int fn_826A65E8();
extern int fn_826AE5C0();
extern int fn_826AE688();


void fn_826B0D48(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    uVar2 = *(uint *)(*(int *)*param_2 + 0xc) & *(uint *)(iVar5 + 4);
    iVar4 = uVar2 * 0x14 + iVar5;
    if ((*(int *)(iVar4 + 8) != -2) &&
       ((*(uint *)(*(int *)(iVar4 + 0xc) + 0xc) & *(uint *)(iVar5 + 4)) == uVar2)) {
      uVar1 = uVar2;
      uVar6 = 0xffffffff;
      while( true ) {
        uVar8 = uVar1;
        puVar9 = (uint *)(iVar4 + 8);
        iVar7 = iVar4 + 0xc;
        if (((*(uint *)(iVar5 + 4) & *(uint *)(*(int *)(iVar4 + 0xc) + 0xc)) == uVar2) &&
           (cVar3 = fn_826A65E8(*param_2,iVar7), cVar3 != '\0')) break;
        uVar1 = *puVar9;
        if (uVar1 == 0xffffffff) {
          return;
        }
        iVar5 = *param_1;
        iVar4 = uVar1 * 0x14 + iVar5;
        uVar6 = uVar8;
      }
      if (uVar2 == uVar8) {
        if (*puVar9 != 0xffffffff) {
          iVar5 = *puVar9 * 0x14 + *param_1;
          fn_826AE5C0(iVar7);
          *puVar9 = 0xfffffffe;
          *puVar9 = *(uint *)(iVar5 + 8);
          fn_826AE688(iVar7,iVar5 + 0xc);
          puVar9 = (uint *)(iVar5 + 8);
        }
      }
      else {
        *(uint *)(uVar6 * 0x14 + *param_1 + 8) = *puVar9;
      }
      fn_826AE5C0(puVar9 + 1);
      *puVar9 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
      return;
    }
  }
  return;
}

