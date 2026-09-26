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
extern unsigned int *auStack_40;
extern unsigned int iStack_44;


void fn_82CF7138(int param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iStack_44;
  undefined1 auStack_40 [64];
  
  iVar4 = param_2 * 8 + param_1;
  uVar7 = *(uint *)(iVar4 + 0x10);
  uVar6 = (ulonglong)uVar7;
  uVar1 = *(undefined4 *)((param_2 + 0x25) * 4 + param_1);
  do {
    if ((int)uVar7 < 1) {
      return;
    }
    if ((int)uVar6 < 5) {
      uVar2 = uVar6;
      if (0 < (int)uVar6) goto LAB_82cf7188;
    }
    else {
      uVar2 = 4;
LAB_82cf7188:
      piVar3 = &iStack_44;
      uVar8 = uVar2;
      do {
        piVar5 = *(int **)(iVar4 + 0xc);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
          *(int *)(iVar4 + 0xc) = *piVar5;
        }
        piVar3 = piVar3 + 1;
        *piVar3 = (int)piVar5;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar6 = uVar6 - uVar2;
    (**(code **)(**(int **)(param_1 + 4) + 0x1c))(*(int **)(param_1 + 4),auStack_40,uVar2,uVar1);
    uVar7 = (uint)uVar6;
  } while( true );
}

