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


void fn_82774430(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  iVar6 = *param_1;
  if (iVar6 != 0) {
    uVar1 = *param_2;
    uVar4 = (uVar1 >> 6 ^ uVar1) & *(uint *)(iVar6 + 4);
    iVar7 = uVar4 * 0xc + iVar6;
    puVar8 = (uint *)(iVar7 + 8);
    if ((*puVar8 != 0xfffffffe) && (*(uint *)(iVar7 + 0xc) == uVar4)) {
      uVar2 = uVar4;
      uVar3 = 0xffffffff;
      while ((uVar5 = uVar2, puVar8[1] != uVar4 || (puVar8[2] != uVar1))) {
        uVar2 = *puVar8;
        if (uVar2 == 0xffffffff) {
          return;
        }
        puVar8 = (uint *)(uVar2 * 0xc + iVar6 + 8);
        uVar3 = uVar5;
      }
      if (uVar4 == uVar5) {
        uVar1 = *puVar8;
        if (uVar1 != 0xffffffff) {
          *puVar8 = 0xfffffffe;
          iVar6 = uVar1 * 0xc + iVar6;
          *puVar8 = *(uint *)(iVar6 + 8);
          puVar8[1] = *(uint *)(iVar6 + 0xc);
          puVar8[2] = *(uint *)(iVar6 + 0x10);
          puVar8 = (uint *)(iVar6 + 8);
        }
      }
      else {
        *(uint *)(uVar3 * 0xc + iVar6 + 8) = *puVar8;
      }
      *puVar8 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
    }
  }
  return;
}

