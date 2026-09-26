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


void fn_82DB4B60(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  param_3 = param_1[1] - param_3;
  if (param_3 < param_1[1]) {
    iVar8 = param_3 * 0xc;
    do {
      iVar2 = *(int *)(*(int *)(*param_1 + iVar8) + 0x30);
      cVar1 = *(char *)(*(int *)(iVar2 + 4) + 0xe8);
      if ((cVar1 == '\x05') || (bVar7 = false, cVar1 == '\x04')) {
        bVar7 = true;
      }
      if (bVar7) {
code_r0x82db4be8:
        iVar2 = *param_2;
        *param_2 = iVar2 + 1;
        iVar3 = *param_1;
        iVar9 = iVar8 + iVar3;
        puVar10 = (undefined4 *)(iVar2 * 0xc + iVar3);
        uVar4 = puVar10[2];
        uVar5 = *puVar10;
        *puVar10 = *(undefined4 *)(iVar8 + iVar3);
        uVar6 = puVar10[1];
        puVar10[1] = *(undefined4 *)(iVar9 + 4);
        puVar10[2] = *(undefined4 *)(iVar9 + 8);
        *(undefined4 *)(iVar8 + iVar3) = uVar5;
        *(undefined4 *)(iVar9 + 4) = uVar6;
        *(undefined4 *)(iVar9 + 8) = uVar4;
      }
      else {
        cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0xe8);
        if ((cVar1 == '\x05') || (bVar7 = false, cVar1 == '\x04')) {
          bVar7 = true;
        }
        if (bVar7) goto code_r0x82db4be8;
      }
      param_3 = param_3 + 1;
      iVar8 = iVar8 + 0xc;
    } while (param_3 < param_1[1]);
  }
  return;
}

