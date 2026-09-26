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
extern int fn_8251E4D0();
extern int fn_825200A8();


void fn_8257F228(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((int *)(param_3 + 0x98) != (int *)0x0) {
    iVar1 = *(int *)(param_3 + 0x9c);
    iVar7 = 0;
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        iVar2 = *(int *)(param_3 + 0x98);
        piVar3 = *(int **)(iVar6 + iVar2);
        uVar4 = (**(code **)(*piVar3 + 0x20))(piVar3);
        iVar5 = fn_825200A8(param_4,uVar4);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_8251E4D0(param_2 + 4);
        }
        ((int (*)())fn_8257F228)(param_1,param_2,piVar3,param_4,param_5,param_6,param_7,
                      *(undefined4 *)(iVar6 + iVar2 + 8));
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x1a0;
      } while (iVar7 < iVar1);
    }
  }
  return;
}

