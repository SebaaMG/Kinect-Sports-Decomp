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
extern unsigned int lbl_83212A1C;


void fn_82886CB0(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  piVar2 = (int *)*param_2;
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
    if ((0 < *(int *)(iVar5 * 4 + lbl_83212A1C)) && (*(char *)(piVar2 + 9) != '\0')) {
      uVar1 = *(ushort *)((int)piVar2 + 0x26);
      uVar7 = (uint)uVar1;
      iVar5 = (**(code **)(*piVar2 + 4))(piVar2);
      piVar3 = *(int **)(iVar5 * 4 + param_1);
      uVar4 = 1 << (*(uint *)(iVar5 * 4 + lbl_83212A1C) & 0x3f);
      uVar6 = *piVar3 - (uVar4 >> 1);
      if (uVar4 < uVar6) {
        uVar6 = uVar6 + uVar4;
      }
      if (uVar6 < (uint)piVar3[2]) {
        if (uVar6 <= uVar7) {
LAB_82886d6c:
          if (uVar7 < (uint)piVar3[2]) goto LAB_82886d74;
        }
      }
      else {
        if (uVar7 < uVar6) goto LAB_82886d6c;
LAB_82886d74:
        piVar3[2] = (uint)uVar1;
      }
    }
    piVar2 = (int *)piVar2[0xc];
  } while( true );
}

