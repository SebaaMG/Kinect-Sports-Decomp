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
extern int fn_8223C478();
extern int fn_8260D428();
extern int fn_828A1958();
extern int fn_828E9DB8();
extern int fn_828EA268();


void fn_828C27D8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  int aiStack_40 [16];
  
  lVar5 = 0;
  aiStack_40[0] = **(int **)(param_1 + 0xdc);
  piVar6 = (int *)aiStack_40[0];
  if ((int *)aiStack_40[0] != *(int **)(param_1 + 0xdc)) {
    do {
      piVar6 = (int *)aiStack_40[0];
      puVar4 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar4 = (undefined4 *)*param_2;
      }
      iVar3 = fn_8260D428(aiStack_40[0] + 0xc,0,*(undefined4 *)(aiStack_40[0] + 0x1c),puVar4,
                           param_2[4]);
      if (iVar3 == 0) break;
      lVar5 = lVar5 + 1;
      fn_828A1958(aiStack_40);
      piVar6 = (int *)aiStack_40[0];
    } while (aiStack_40[0] != *(int *)(param_1 + 0xdc));
  }
  piVar1 = *(int **)(*(int *)(*(int *)((int)piVar6 + 0x28) + 4) + 4);
  aiStack_40[0] = *piVar1;
  if ((int *)aiStack_40[0] != piVar1) {
    do {
      puVar4 = param_3;
      if (0xf < (uint)param_3[5]) {
        puVar4 = (undefined4 *)*param_3;
      }
      iVar3 = fn_8260D428(aiStack_40[0] + 0xc,0,*(undefined4 *)(aiStack_40[0] + 0x1c),puVar4,
                           param_3[4]);
    } while ((iVar3 != 0) &&
            (fn_828A1958(aiStack_40),
            aiStack_40[0] != *(int *)(*(int *)(*(int *)((int)piVar6 + 0x28) + 4) + 4)));
  }
  uVar2 = fn_828EA268((ulonglong)*(uint *)(param_1 + 0xe0) - 1);
  uVar7 = (ulonglong)*(uint *)(*(int *)(*(int *)((int)piVar6 + 0x28) + 4) + 8);
  fn_828EA268(uVar7 - 1);
  fn_8223C478(param_4,uVar2,0);
  fn_828E9DB8(param_4,lVar5,uVar2);
  fn_8223C478(param_4,uVar7,0);
  fn_828E9DB8(param_4,lVar5,uVar7);
  return;
}

