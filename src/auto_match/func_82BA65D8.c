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
extern int fn_82BA4058();
extern int fn_82BBFE28();


void fn_82BA65D8(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  piVar4 = (int *)fn_82BA4058();
  do {
    bVar10 = false;
    iVar9 = 1;
    iVar5 = fn_82BBFE28(param_1 + 0x80);
    piVar2 = piVar4;
    if (0 < iVar5) {
      do {
        piVar1 = (int *)piVar2[1];
        cVar6 = (**(code **)(*piVar1 + 8))(piVar1);
        if (cVar6 == '\0') {
          iVar5 = piVar1[0x21];
          iVar8 = 0;
          for (uVar7 = 1; uVar7 <= *(uint *)(piVar1[0xe] + 4); uVar7 = uVar7 + 1) {
            piVar3 = (int *)(*(int *)(piVar1[0xe] + 8) + iVar8);
            iVar8 = iVar8 + 4;
            piVar1[0x21] = *(uint *)(*piVar3 + 0x84) | piVar1[0x21];
          }
          bVar10 = iVar5 != piVar1[0x21];
        }
        iVar9 = iVar9 + 1;
        iVar5 = fn_82BBFE28(param_1 + 0x80);
        piVar2 = piVar2 + 1;
      } while (iVar9 <= iVar5);
    }
  } while (bVar10);
  return;
}

