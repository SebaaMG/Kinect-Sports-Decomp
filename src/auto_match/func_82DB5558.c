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


void fn_82DB5558(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = *param_2;
  if (iVar6 < param_1[1]) {
    iVar7 = iVar6 * 0xc;
    do {
      iVar1 = *(int *)(*(int *)(*param_1 + iVar7) + 0x30);
      if ((*(char *)((uint)*(ushort *)(*(int *)(iVar1 + 4) + 0xa8) + *param_3) == '\x10') &&
         (*(char *)((uint)*(ushort *)(*(int *)(iVar1 + 8) + 0xa8) + *param_3) == '\x10')) {
        iVar1 = *param_2;
        *param_2 = iVar1 + 1;
        iVar2 = *param_1;
        iVar8 = iVar7 + iVar2;
        puVar9 = (undefined4 *)(iVar1 * 0xc + iVar2);
        uVar3 = puVar9[2];
        uVar4 = *puVar9;
        *puVar9 = *(undefined4 *)(iVar7 + iVar2);
        uVar5 = puVar9[1];
        puVar9[1] = *(undefined4 *)(iVar8 + 4);
        puVar9[2] = *(undefined4 *)(iVar8 + 8);
        *(undefined4 *)(iVar7 + iVar2) = uVar4;
        *(undefined4 *)(iVar8 + 4) = uVar5;
        *(undefined4 *)(iVar8 + 8) = uVar3;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < param_1[1]);
  }
  return;
}

