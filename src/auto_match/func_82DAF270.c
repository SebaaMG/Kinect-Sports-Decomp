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
extern int fn_82D80C58();
extern int fn_82D80C90();
extern int fn_82D82CA8();
extern int fn_82D839C0();
extern int fn_82D92868();
extern int fn_82DAFFF8();
extern unsigned int iStack_38;


void fn_82DAF270(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  int *piVar5;
  int iVar7;
  int aiStack_40 [2];
  int iStack_38;
  
  fn_82D80C58();
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  fn_82D82CA8(param_1,aiStack_40);
  iVar4 = fn_82CE5410();
  cVar6 = (**(code **)(**(int **)(iVar4 + 0x18) + 0x20))(*(int **)(iVar4 + 0x18),aiStack_40[0]);
  do {
    if (cVar6 != '\0') {
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
      fn_82D80C90(param_1);
      return;
    }
    bVar1 = *(byte *)(iStack_38 + 0x25);
    iVar4 = iStack_38;
    while (iVar3 = aiStack_40[0], bVar1 = bVar1 >> 4 & 3, iVar7 = iVar4, bVar1 != 0) {
      while (bVar1 != 0) {
        fn_82D92868(param_1,iVar4);
        fn_82D82CA8(param_1,aiStack_40);
        iVar7 = iStack_38;
        if ((iStack_38 != iVar4) || (aiStack_40[0] != iVar3)) break;
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) >> 1;
        bVar1 = *(byte *)(iStack_38 + 0x25) & 0x30;
      }
      iVar4 = iVar7;
      bVar1 = *(byte *)(iVar7 + 0x25);
    }
    iVar4 = fn_82CE5410();
    cVar6 = (**(code **)(**(int **)(iVar4 + 0x18) + 0x20))(*(int **)(iVar4 + 0x18),aiStack_40[0]);
    iVar4 = iStack_38;
    if (cVar6 == '\0') {
      cVar6 = fn_82DAFFF8();
      if (cVar6 == '\0') {
        *(byte *)(iVar4 + 0x25) = *(byte *)(iVar4 + 0x25) & 0xcf | 0x10;
      }
      else {
        piVar5 = (int *)fn_82D839C0(param_1);
        (**(code **)(*piVar5 + 0x14))(piVar5,iVar4,0);
        fn_82D82CA8(param_1,aiStack_40);
      }
    }
    iVar4 = fn_82CE5410();
    cVar6 = (**(code **)(**(int **)(iVar4 + 0x18) + 0x20))(*(int **)(iVar4 + 0x18),aiStack_40[0]);
  } while( true );
}

