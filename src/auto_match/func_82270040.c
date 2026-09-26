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
extern int fn_82270B70();
extern int fn_822A87F0();


void fn_82270040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar5 = fn_82270B70();
  piVar2 = *(int **)(iVar5 + 0x5c);
  fn_822A87F0(piVar2,param_1,param_2,param_3,param_4,param_5,param_6);
  if ((param_7 != 0) && (iVar5 = *piVar2, iVar5 != piVar2[1])) {
    do {
      iVar3 = *(int *)(iVar5 + 0x24);
      if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x54c) == 0 && (*(int *)(iVar3 + 0x548) == 0)))) {
        uVar1 = *(undefined4 *)(iVar5 + 0x20);
        puVar4 = (undefined4 *)(iVar5 + 0x10U & 0xfffffff0);
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        uVar8 = puVar4[2];
        uVar9 = puVar4[3];
        *(undefined4 *)(iVar3 + 0x544) = 0;
        *(undefined4 *)(iVar3 + 0x520) = uVar1;
        *(undefined4 *)(iVar3 + 0x548) = 0;
        puVar4 = (undefined4 *)(iVar3 + 0x510U & 0xfffffff0);
        *puVar4 = uVar6;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        *(undefined4 *)(iVar3 + 0x534) = 0;
      }
      iVar5 = iVar5 + 0x30;
    } while (iVar5 != piVar2[1]);
  }
  return;
}

