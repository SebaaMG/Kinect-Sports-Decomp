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
extern int fn_822315A0();
extern int fn_82430D80();
extern int fn_8243AF58();
extern int fn_824CCD80();
extern int fn_82522588();
extern int fn_825603C8();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CC160;


void fn_8242C0B8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  piVar6 = *(int **)(param_1 + 0x30);
  iVar5 = 0;
  if (piVar6 != *(int **)(param_1 + 0x34)) {
    dVar7 = (double)lbl_821CC160;
    do {
      bVar1 = iVar5 == 0;
      iVar5 = iVar5 + 1;
      if (bVar1) {
        iVar2 = *piVar6;
        if (*(int *)(iVar2 + 0x22c) != 1) {
          uVar3 = fn_824CCD80(*(undefined4 *)(iVar2 + 0x10));
          fn_825603C8(uVar3,iVar2 + 0x20,1);
          *(undefined4 *)(iVar2 + 0x22c) = 1;
        }
      }
      piVar4 = (int *)fn_82522588(auStack_40,piVar6);
      iVar2 = *piVar4;
      *(float *)(*(int *)(iVar2 + 0x244) + 0x10) = (float)dVar7;
      fn_82430D80(iVar2,0xd,1);
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != *(int **)(param_1 + 0x34));
  }
  fn_8243AF58((ulonglong)*(uint *)(param_1 + 0x174) + 0x1c);
  return;
}

