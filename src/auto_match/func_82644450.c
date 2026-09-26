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
extern int fn_82644388();
extern int iRam832823fc;
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_82644450(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iStack0000001c;
  uint uStack00000024;
  
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  if ((*(int **)(param_1 + 0x54f4) != (int *)0x0) && (iRam832823fc == 0)) {
    (**(code **)(**(int **)(param_1 + 0x54f4) + 0x18))();
  }
  if (*(code **)(param_1 + 0x5c18) != (code *)0x0) {
    (**(code **)(param_1 + 0x5c18))(1,&stack0x0000001c,&stack0x00000024,0);
  }
  uVar7 = *(uint *)(param_1 + 0x2acc);
  uVar1 = *(uint *)(param_1 + 0x3b08);
  iVar2 = *(int *)(param_1 + 0x3b04);
  fn_82644388(param_1,uVar7,uStack00000024);
  uVar6 = 0;
  if (uStack00000024 != 0) {
    iVar5 = 0;
    do {
      iVar3 = uVar7 * 4;
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 1 & uVar1;
      puVar4 = (undefined4 *)(iVar5 + iStack0000001c);
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar3 + iVar2) = *puVar4;
    } while (uVar6 < uStack00000024);
  }
  *(uint *)(param_1 + 0x2acc) = uVar7;
  if (*(int **)(param_1 + 0x54f4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54f4) + 0x1c))();
  }
  if (*(code **)(param_1 + 0x5c18) != (code *)0x0) {
    (**(code **)(param_1 + 0x5c18))(2,0,0,0);
  }
  return;
}

