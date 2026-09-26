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


void fn_826867E8(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = *(uint *)(iVar1 + 4);
    uVar5 = (uVar2 >> 6 ^ uVar2) & uVar3;
    puVar9 = (uint *)((uVar5 + 1) * 8 + iVar1);
    if ((*puVar9 != 0xfffffffe) && (((puVar9[1] >> 6 ^ puVar9[1]) & uVar3) == uVar5)) {
      uVar6 = 0xffffffff;
      uVar7 = uVar5;
      while ((((puVar9[1] >> 6 ^ puVar9[1]) & uVar3) != uVar5 || (puVar9[1] != uVar2))) {
        uVar4 = *puVar9;
        if (uVar4 == 0xffffffff) {
          return;
        }
        uVar6 = uVar7;
        uVar7 = uVar4;
        puVar9 = (uint *)((uVar4 + 1) * 8 + iVar1);
      }
      if (uVar5 == uVar7) {
        uVar2 = *puVar9;
        if (uVar2 != 0xffffffff) {
          *puVar9 = 0xfffffffe;
          puVar8 = (uint *)((uVar2 + 1) * 8 + iVar1);
          *puVar9 = *puVar8;
          puVar9[1] = puVar8[1];
          puVar9 = puVar8;
        }
      }
      else {
        *(uint *)((uVar6 + 1) * 8 + iVar1) = *puVar9;
      }
      *puVar9 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
    }
  }
  return;
}

