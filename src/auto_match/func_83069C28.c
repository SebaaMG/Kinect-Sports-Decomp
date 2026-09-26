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
extern unsigned int *auStack_70;
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_8306AAF0();
extern int fn_8306AB80();


void fn_83069C28(int param_1,undefined4 param_2,int *param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int aiStack_90 [4];
  undefined4 *puStack_80;
  undefined1 auStack_70 [112];
  
  fn_83061508(auStack_70);
  aiStack_90[0] = 0;
  aiStack_90[1] = 0;
  aiStack_90[2] = 0;
  puStack_80 = (undefined4 *)0x0;
  fn_8306AAF0(aiStack_90,*(undefined4 *)(param_1 + 0x3c));
  while (iVar2 = aiStack_90[0], puVar4 = puStack_80, aiStack_90[0] != 0) {
    fn_8306AB80(aiStack_90);
    iVar1 = *(int *)(iVar2 + 0x28);
    *(undefined4 *)(iVar1 + 0x38) = param_2;
    *(undefined4 *)(iVar1 + 0x74) = 1;
    for (iVar2 = *(int *)(iVar2 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (((*(char *)(iVar2 + 0x14) == '\0') &&
          (*(int **)(*(int *)(iVar2 + 0x10) + 0xc) != aiStack_90)) &&
         (iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x28), *(int *)(iVar3 + 0x74) == 0)) {
        fn_8306AAF0(aiStack_90);
        *param_3 = *param_3 + 1;
        if (param_4 != (code *)0x0) {
          (*param_4)(iVar2,iVar1,iVar3);
        }
      }
    }
  }
  for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[2]) {
    puVar4[3] = 0;
    *puVar4 = 0;
  }
  fn_83061F30(auStack_70);
  return;
}

