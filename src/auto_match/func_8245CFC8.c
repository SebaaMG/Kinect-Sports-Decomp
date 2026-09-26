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
extern int fn_82A1DD38();


undefined8
fn_8245CFC8(int param_1,undefined8 param_2,ulonglong param_3,int param_4,undefined4 param_5,
             undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  
  do {
    if ((param_3 & 0xffffffff) == 0) {
      if (param_4 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 4) + 0x10) = param_5;
        *(undefined4 *)(*(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 4) + 0x14) = param_6;
      }
      return 1;
    }
    iVar2 = *(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 4);
    puVar5 = (uint *)(iVar2 + 4);
    if (*(int *)(param_1 + 0xc) == 0) {
      if ((ulonglong)*(uint *)(param_1 + 0x14) < (*puVar5 + param_3 & 0xffffffff)) {
LAB_8245d038:
        *(undefined4 *)(iVar2 + 0xc) = 1;
      }
    }
    else if ((ulonglong)*puVar5 == (ulonglong)*(uint *)(param_1 + 0x14)) goto LAB_8245d038;
    iVar2 = *(int *)(param_1 + 4);
    puVar4 = (uint *)(*(int *)(param_1 + 8) * 0x20 + iVar2);
    if (puVar4[3] != 0) {
      uVar3 = 0;
      if (*(uint *)(param_1 + 0x10) != 0) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + iVar2 + 0xc) == 0) break;
          uVar3 = uVar3 + 1;
          iVar1 = iVar1 + 0x20;
        } while (uVar3 < *(uint *)(param_1 + 0x10));
      }
      if (uVar3 == *(uint *)(param_1 + 0x10)) {
        return 0;
      }
      *(uint *)(param_1 + 8) = uVar3;
      puVar4 = (uint *)(uVar3 * 0x20 + iVar2);
      puVar5 = puVar4 + 1;
    }
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x14) - (ulonglong)*puVar5;
    if ((param_3 & 0xffffffff) < (uVar6 & 0xffffffff)) {
      uVar6 = param_3;
    }
    fn_82A1DD38((ulonglong)*puVar5 + (ulonglong)*puVar4,param_2,uVar6);
    param_3 = param_3 - uVar6;
    *puVar5 = *puVar5 + (int)uVar6;
    if (param_4 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 4) + 0xc) = 1;
    }
  } while( true );
}

