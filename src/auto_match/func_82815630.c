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
extern int fn_8257A9F0();
extern int fn_82816A58();
extern int fn_82816B30();
extern int fn_8281FDF0();


undefined4 * fn_82815630(undefined4 *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  cVar2 = fn_8281FDF0(param_2,0xffffffff8201e0e8);
  piVar5 = (int *)0x0;
  uVar3 = 0;
  if (*(int *)(*(int *)(param_2 + 0x1c) + 0x28) != 0) {
    iVar4 = 0;
    do {
      iVar7 = iVar4 + *(int *)(param_2 + 0x44);
      if (*(char *)(iVar7 + 0xc) == cVar2) {
        piVar1 = *(int **)(iVar7 + 4);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)*piVar1;
          iVar7 = 0;
          if (0 < *piVar5) {
            lVar6 = 0;
            do {
              fn_8257A9F0(param_1 + 4,lVar6 + (ulonglong)(uint)piVar5[1]);
              iVar7 = iVar7 + 1;
              lVar6 = lVar6 + 4;
            } while (iVar7 < *piVar5);
          }
          iVar7 = 0;
          if (0 < piVar5[2]) {
            lVar6 = 0;
            do {
              fn_82816A58(param_1,lVar6 + (ulonglong)(uint)piVar5[3]);
              iVar7 = iVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (iVar7 < piVar5[2]);
          }
        }
        iVar7 = 0;
        if (0 < piVar1[1]) {
          lVar6 = 0;
          do {
            fn_82816B30(param_1 + 8,(ulonglong)(uint)piVar1[2] + lVar6);
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 0x14;
          } while (iVar7 < piVar1[1]);
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xe;
    } while (uVar3 < *(uint *)(*(int *)(param_2 + 0x1c) + 0x28));
  }
  return param_1;
}

