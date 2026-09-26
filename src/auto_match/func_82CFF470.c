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


void fn_82CFF470(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  iVar6 = 0;
  if (0 < (int)puVar3[3]) {
    iVar7 = 0;
    do {
      uVar1 = *puVar3;
      uVar4 = *(undefined4 *)(puVar3[2] + iVar7);
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),uVar4,uVar1);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < (int)puVar3[3]);
  }
  iVar6 = fn_82CE5410();
  piVar2 = *(int **)(iVar6 + 0x10);
  puVar3[3] = 0;
  if ((puVar3[4] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,puVar3[2],puVar3[4] & 0x3fffffff,4);
  }
  puVar3[2] = 0;
  puVar3[4] = 0x80000000;
  puVar3[1] = *puVar3;
  return;
}

