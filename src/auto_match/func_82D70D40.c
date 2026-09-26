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
extern int fn_82CE5410();


void fn_82D70D40(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  puVar1 = (undefined4 *)*param_1;
  piVar2 = (int *)*puVar1;
  iVar6 = 0;
  iVar5 = 0;
  do {
    iVar3 = *piVar2;
    piVar7 = piVar2 + 4;
    do {
      piVar8 = piVar7;
      switch(*(undefined1 *)piVar7) {
      case 0:
        piVar8 = (int *)((uint)(byte)*piVar7 + (int)piVar7);
        break;
      case 1:
        iVar6 = puVar1[iVar6];
        if (iVar6 != 0) {
          iVar5 = fn_82CE5410();
          (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),iVar6,0x200);
        }
        iVar6 = fn_82CE5410();
        piVar2 = *(int **)(iVar6 + 0x10);
        param_1[1] = 0;
        if ((param_1[2] & 0x80000000U) == 0) {
          (**(code **)(*piVar2 + 0x10))(piVar2,*param_1,param_1[2] & 0x3fffffff,4);
        }
        *param_1 = 0;
        param_1[2] = -0x80000000;
        return;
      case 2:
      case 3:
      case 6:
      case 10:
      case 0xb:
      case 0xe:
        piVar8 = (int *)((uint)(byte)*piVar7 + (int)piVar7);
        (**(code **)((uint)*(byte *)((int)piVar7 + 1) * 0x50 + param_2 + 0x16b4))
                  (piVar7,piVar7 + 4,param_3,param_4,param_2);
        break;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        piVar8 = (int *)((uint)(byte)*piVar7 + (int)piVar7);
        (**(code **)((uint)*(byte *)((int)piVar7 + 1) * 0x50 + param_2 + 0x16b4))
                  (piVar7,piVar7 + 8,param_3,param_4,param_2);
      }
      piVar7 = piVar8;
    } while (piVar8 < (int *)((int)piVar2 + iVar3 + 0x10));
    iVar3 = *(int *)(iVar5 + (int)puVar1);
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
    if (iVar3 != 0) {
      iVar4 = fn_82CE5410();
      (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),iVar3,0x200);
    }
    piVar2 = *(int **)(*param_1 + iVar5);
  } while( true );
}

