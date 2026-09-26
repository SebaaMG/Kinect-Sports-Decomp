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
extern int fn_82381BC0();
extern int fn_8288B760();
extern int fn_828AAF70();


void fn_8236D9D0(int *param_1)

{
  char cVar3;
  int iVar2;
  ulonglong uVar1;
  ulonglong uVar4;
  int aiStack_30 [12];
  
  if (param_1[0x20] != 0) {
    cVar3 = fn_8288B760();
    if (cVar3 != '\0') {
      iVar2 = (**(code **)(*param_1 + 8))(param_1);
      uVar4 = 1;
      aiStack_30[0] = **(int **)(param_1[4] + 0x200);
      if ((int *)aiStack_30[0] != *(int **)(param_1[4] + 0x200)) {
        do {
          uVar1 = (**(code **)(*(int *)(iVar2 + 0x48) + 0x38))
                            ((int *)(iVar2 + 0x48),*(undefined4 *)(aiStack_30[0] + 0x10));
          uVar4 = uVar1 & 0xff & uVar4;
          fn_82381BC0(aiStack_30);
        } while (aiStack_30[0] != *(int *)(param_1[4] + 0x200));
      }
      if (uVar4 != 0) {
        fn_828AAF70(iVar2 + 0x9c,1);
      }
    }
  }
  return;
}

