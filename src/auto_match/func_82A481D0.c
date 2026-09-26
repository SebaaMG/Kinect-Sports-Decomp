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
extern int fn_82A43340();
extern int fn_82A45900();
extern int fn_82A47900();


void fn_82A481D0(int param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1d4) == 0) {
    lVar2 = fn_82A47900();
    uVar4 = (ulonglong)*(byte *)(param_1 + 0x1d2) - lVar2;
    if (uVar4 != 0) {
      if ((uVar4 & 0xffffffff) != 0) {
        do {
          piVar1 = *(int **)(param_1 + 0x20c);
          if (piVar1 == (int *)0x0) {
            puVar3 = (undefined4 *)0x0;
            iVar5 = 0;
          }
          else {
            puVar3 = (undefined4 *)*piVar1;
            iVar5 = *piVar1;
          }
          fn_82A43340(param_1 + 0x8c,*(undefined4 *)(iVar5 + 0x20),*puVar3);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (*(int **)(param_1 + 0x20c) == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(param_1 + 0x20c);
      }
      if (*(int *)(iVar5 + 0x1c) == 0xff) {
        fn_82A45900(*(undefined4 *)(param_1 + 0x1d8),0xfe);
        *(undefined1 *)(param_1 + 0x1d2) = 0xfe;
      }
      else {
        *(char *)(param_1 + 0x1d2) = (char)lVar2;
      }
    }
  }
  return;
}

