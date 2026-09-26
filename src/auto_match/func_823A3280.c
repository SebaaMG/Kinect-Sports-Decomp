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
extern unsigned int *auStack_20;
extern int fn_822AA770();


undefined8 fn_823A3280(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar5;
  longlong lVar3;
  longlong lVar4;
  uint auStack_20 [2];
  
  if ((*(int *)(*(int *)(param_1 + 8) + 0x228) == 0) &&
     (iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x78))(), iVar5 != 0)) {
    puVar1 = (undefined4 *)**(int **)(*(int *)(param_1 + 8) + 8);
    lVar3 = fn_822AA770(*puVar1);
    auStack_20[0] = (uint)(lVar3 != 0);
    lVar4 = fn_822AA770(puVar1[1]);
    auStack_20[1] = (uint)(lVar4 != 0);
    if ((((lVar3 != 0) != 0) && (auStack_20[1] != 0)) ||
       (piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x2e0),
       iVar5 = (**(code **)(*piVar2 + 0x7c))(piVar2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x1e4)),
       auStack_20[iVar5] == 0)) {
      return 1;
    }
  }
  return 0;
}

