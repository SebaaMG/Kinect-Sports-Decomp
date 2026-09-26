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
extern int fn_82CEA160();


void fn_83082770(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = (int *)(param_2 + 8);
  iVar7 = 0;
  if (-1 < *(int *)(param_2 + 0x10)) {
    piVar4 = (int *)*piVar6;
    do {
      if (*piVar4 != -1) break;
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar7 <= *(int *)(param_2 + 0x10));
  }
  if (iVar7 <= *(int *)(param_2 + 0x10)) {
    do {
      puVar5 = (undefined4 *)(iVar7 * 8 + *piVar6);
      uVar1 = puVar5[1];
      uVar2 = *puVar5;
      iVar3 = fn_82CE5410();
      fn_82CEA160(param_1 + 8,*(undefined4 *)(iVar3 + 0x10),uVar2,uVar1);
      iVar7 = iVar7 + 1;
      if (iVar7 <= *(int *)(param_2 + 0x10)) {
        piVar4 = (int *)(iVar7 * 8 + *piVar6);
        do {
          if (*piVar4 != -1) break;
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar7 <= *(int *)(param_2 + 0x10));
      }
    } while (iVar7 <= *(int *)(param_2 + 0x10));
  }
  return;
}

