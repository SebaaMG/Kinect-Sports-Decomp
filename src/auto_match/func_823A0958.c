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
extern int fn_82F68B78();


void fn_823A0958(void)

{
  int *piVar2;
  char cVar4;
  int iVar3;
  ulonglong uVar1;
  ulonglong uVar5;
  int aiStack_30 [12];
  
  piVar2 = (int *)fn_82F68B78();
  if (piVar2[0x20] != 0) {
    cVar4 = fn_8288B760();
    if (cVar4 != '\0') {
      iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
      uVar5 = 1;
      aiStack_30[0] = **(int **)(piVar2[4] + 0x200);
      if ((int *)aiStack_30[0] != *(int **)(piVar2[4] + 0x200)) {
        do {
          uVar1 = (**(code **)(*(int *)(iVar3 + 0x48) + 0x38))
                            ((int *)(iVar3 + 0x48),*(undefined4 *)(aiStack_30[0] + 0x10));
          uVar5 = uVar1 & 0xff & uVar5;
          fn_82381BC0(aiStack_30);
        } while (aiStack_30[0] != *(int *)(piVar2[4] + 0x200));
      }
      if (uVar5 != 0) {
        fn_828AAF70(iVar3 + 0x9c,1);
      }
    }
  }
  return;
}

