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
extern int fn_822ABA88();
extern int fn_8242C410();
extern int fn_8288B760();


int fn_8242C1B8(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar3 = fn_8242C410();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(**(int **)(param_1 + 8) + iVar3);
      iVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
      if (*(char *)(*(int *)(param_1 + 0x174) + 200) == '\0') {
LAB_8242c240:
        bVar2 = true;
      }
      else {
        if (*(int *)(iVar4 + 0x168) == 0) {
          uVar5 = *(uint *)(iVar4 + 0x16c);
        }
        else {
          uVar5 = fn_8288B760();
          uVar5 = uVar5 & 0xff;
        }
        bVar2 = false;
        if (uVar5 != 0) goto LAB_8242c240;
      }
      if ((*(int *)(iVar4 + 0x24) != 0) && (bVar2)) {
        if (iVar6 == *(int *)(*(int *)(param_1 + 0x174) + 0xc0)) {
          return iVar4;
        }
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = fn_8242C410(param_1);
    } while (iVar7 < iVar4);
  }
  return 0;
}

