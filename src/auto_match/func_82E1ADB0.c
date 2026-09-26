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
extern int fn_82CEA280();
extern int fn_82E17300();


void fn_82E1ADB0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar4 = param_2[2];
  iVar6 = 0;
  if (-1 < iVar4) {
    piVar5 = (int *)*param_2;
    do {
      if (*piVar5 != -1) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar6 <= iVar4);
  }
  if (iVar6 <= iVar4) {
    do {
      puVar7 = (undefined4 *)(iVar6 * 8 + *param_2);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      iVar4 = fn_82CEA280(param_1 + 3,uVar1,0xffffffffffffffff);
      if (iVar4 != -1) {
        iVar3 = *param_1;
        do {
          **(undefined4 **)(iVar3 + iVar4 * 8) = uVar2;
          iVar3 = *param_1;
          iVar4 = *(int *)(iVar3 + iVar4 * 8 + 4);
        } while (iVar4 != -1);
      }
      fn_82E17300(param_1,uVar1);
      iVar4 = param_2[2];
      iVar6 = iVar6 + 1;
      if (iVar6 <= iVar4) {
        piVar5 = (int *)(iVar6 * 8 + *param_2);
        do {
          if (*piVar5 != -1) break;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 2;
        } while (iVar6 <= iVar4);
      }
    } while (iVar6 <= iVar4);
  }
  return;
}

