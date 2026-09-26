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


void fn_826941E8(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 4);
    uVar4 = *(uint *)(*param_2 + 0xc) & uVar2;
    puVar7 = (uint *)((uVar4 + 1) * 8 + iVar1);
    if ((*puVar7 != 0xfffffffe) && ((*(uint *)(puVar7[1] + 0xc) & uVar2) == uVar4)) {
      uVar3 = uVar4;
      uVar8 = 0xffffffff;
      while( true ) {
        uVar5 = uVar3;
        if (((*(uint *)(puVar7[1] + 0xc) & uVar2) == uVar4) && (puVar7[1] == *param_2)) break;
        uVar3 = *puVar7;
        if (uVar3 == 0xffffffff) {
          return;
        }
        puVar7 = (uint *)((uVar3 + 1) * 8 + iVar1);
        uVar8 = uVar5;
      }
      if (uVar4 == uVar5) {
        uVar2 = *puVar7;
        if (uVar2 != 0xffffffff) {
          *puVar7 = 0xfffffffe;
          puVar6 = (uint *)((uVar2 + 1) * 8 + iVar1);
          *puVar7 = *puVar6;
          puVar7[1] = puVar6[1];
          puVar7 = puVar6;
        }
      }
      else {
        *(uint *)((uVar8 + 1) * 8 + iVar1) = *puVar7;
      }
      *puVar7 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
    }
  }
  return;
}

