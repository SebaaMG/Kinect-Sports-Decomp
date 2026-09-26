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
extern unsigned int *auStack_40;
extern int fn_828A2058();
extern int fn_828A4FF8();
extern int fn_828A6B80();
extern int fn_828E2F58();
extern int fn_828E5F60();
extern unsigned int iStack_38;
extern unsigned int iStack_3c;


undefined4 * fn_828A7268(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  int aiStack_34 [13];
  
  fn_828A2058(param_1,auStack_40);
  fn_828A4FF8(param_1,*(undefined4 *)*param_1,*(undefined4 *)*param_2,(undefined4 *)*param_2,
                auStack_40[0]);
  fn_828E2F58(param_1 + 3,auStack_40,auStack_40);
  fn_828A6B80(param_1 + 3,param_2 + 3);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  iStack_38 = *(int *)param_1[4];
  puVar4 = *(undefined4 **)*param_1;
  aiStack_34[0] = *(int *)param_2[4];
  if ((int *)aiStack_34[0] != (int *)param_2[4]) {
    do {
      *(undefined4 **)(iStack_38 + 0x18) = puVar4;
      iVar1 = param_2[4];
      if (aiStack_34[0] == iVar1) {
        puVar2 = (undefined4 *)*param_2;
      }
      else {
        puVar2 = *(undefined4 **)(aiStack_34[0] + 0x18);
      }
      iStack_3c = aiStack_34[0];
      fn_828E5F60(&iStack_3c);
      if (iStack_3c == iVar1) {
        puVar3 = (undefined4 *)*param_2;
      }
      else {
        puVar3 = *(undefined4 **)(iStack_3c + 0x18);
      }
      for (; puVar2 != puVar3; puVar2 = (undefined4 *)*puVar2) {
        puVar4 = (undefined4 *)*puVar4;
      }
      fn_828E5F60(aiStack_34);
      fn_828E5F60(&iStack_38);
    } while (aiStack_34[0] != iVar1);
  }
  return param_1;
}

