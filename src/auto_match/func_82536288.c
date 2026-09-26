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
extern unsigned int *auStack_50;
extern int fn_822A8D30();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82F63CA0();
extern unsigned int lbl_8327F874;


void fn_82536288(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_50 [80];
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = fn_828647F0(auStack_50,*(undefined4 *)(iVar1 + 4));
    iVar3 = fn_822A8D30(lbl_8327F874,uVar2);
    if (*(char *)(iVar3 + 0x5c) == '\0') {
      for (piVar4 = *(int **)(iVar3 + 0x24);
          (piVar4 != *(int **)(iVar3 + 0x28) && (*piVar4 != iVar1)); piVar4 = piVar4 + 1) {
      }
      if (piVar4 != *(int **)(iVar3 + 0x28)) {
        fn_82F63CA0(piVar4,piVar4 + 1,(*(int *)(iVar3 + 0x28) - (int)(piVar4 + 1) >> 2) << 2);
        *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + -4;
      }
    }
    fn_82864898(auStack_50);
    piVar4 = (int *)*param_1;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4,1);
    }
    *param_1 = 0;
  }
  return;
}

