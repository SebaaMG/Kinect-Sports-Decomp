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
extern int fn_82231540();
extern int fn_825089A0();
extern int fn_828B6DD0();
extern int fn_828CFB00();
extern int fn_828D0188();
extern unsigned int uStack_50;


void fn_828D0788(int param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar4;
  longlong lVar3;
  int *piVar5;
  undefined1 uStack_50;
  
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 != *(int **)(param_1 + 0x18)) {
    do {
      bVar2 = false;
      if ((piVar5[1] != 0) && (*(int *)(piVar5[1] + 4) == 1)) {
        iVar1 = *piVar5;
        bVar2 = true;
        if (*(char *)(iVar1 + 8) != '\0') {
          piVar4 = (int *)fn_825089A0();
          lVar3 = (**(code **)(*piVar4 + 0xc))();
          if ((ulonglong)(lVar3 - *(longlong *)(iVar1 + 0x90)) < 600000) {
            bVar2 = false;
          }
        }
      }
      if (bVar2) {
        fn_828B6DD0(piVar5 + 2,*(undefined4 *)(param_1 + 0x18),piVar5,uStack_50);
        fn_82231540((ulonglong)*(uint *)(param_1 + 0x18) - 8,
                          (ulonglong)*(uint *)(param_1 + 0x18),param_1 + 0x20,uStack_50);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -8;
      }
      else {
        if (*(int *)(*piVar5 + 0x7c) < 2) {
          fn_828CFB00();
        }
        fn_828D0188(*piVar5);
        piVar5 = piVar5 + 2;
      }
    } while (piVar5 != *(int **)(param_1 + 0x18));
  }
  return;
}

