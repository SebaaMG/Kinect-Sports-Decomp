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
extern int fn_82359C18();
extern int fn_82381BC0();
extern int fn_8288B760();
extern int fn_828B1340();
extern int fn_82F63108();


undefined8 fn_822B1D80(int param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar4;
  undefined8 uVar2;
  ulonglong uVar3;
  int aiStack_30 [12];
  
  cVar4 = fn_8288B760(*(undefined4 *)(param_1 + 0x10));
  if ((cVar4 == '\0') ||
     (uVar3 = fn_828B1340(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10)),
     (uVar3 & 0xff) != 0)) {
    fn_82359C18(param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x200);
    aiStack_30[0] = *piVar1;
    if ((int *)aiStack_30[0] != piVar1) {
      do {
        if ((param_3 != '\0') || (*(char *)(*(int *)(aiStack_30[0] + 0x10) + 0x26) == '\0')) {
          if (*(int **)(param_2 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108(uVar3,*(undefined4 *)(aiStack_30[0] + 0x10));
          }
          cVar4 = (**(code **)(**(int **)(param_2 + 0x10) + 4))();
          if (cVar4 == '\0') {
            uVar2 = 0;
            break;
          }
        }
        uVar3 = fn_82381BC0(aiStack_30);
      } while (aiStack_30[0] != *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x200));
    }
    fn_82359C18(param_2);
  }
  return uVar2;
}

