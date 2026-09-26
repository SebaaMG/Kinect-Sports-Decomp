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
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();
extern int fn_823D2898();


void fn_822B0820(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar5;
  ulonglong uVar4;
  undefined8 uVar6;
  ulonglong uVar7;
  
  bVar3 = false;
  uVar7 = 0;
  uVar1 = *(uint *)(*(int *)((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)) + 8);
  if (uVar1 != 0) {
    do {
      iVar5 = fn_822ABA88(*(undefined4 *)
                             ((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)),uVar7);
      iVar2 = *(int *)(*(int *)(iVar5 + 0x110) + 0x1c);
      if (iVar2 == 0x1a) {
        uVar6 = 1;
LAB_822b089c:
        fn_8236A928(*(undefined4 *)(param_1 + 0x10),iVar5,uVar6);
        bVar3 = true;
        uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0x990);
        if (uVar4 != 0xfffffffffffffffc) {
          fn_823D2898(uVar4,iVar5);
        }
      }
      else if (iVar2 == 0x21) {
        uVar6 = 7;
        goto LAB_822b089c;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (ulonglong)uVar1);
  }
  if (!bVar3) {
    fn_8236BA88(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

