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
extern int fn_82522ED8();
extern int fn_82553980();


void fn_825A1778(int *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1[1] != 0) {
    iVar4 = 0;
    if (0 < param_1[1]) {
      iVar6 = 0;
      do {
        fn_82553980(*(undefined4 *)(param_2 + 0x1a8),*(undefined4 *)(iVar6 + param_1[2]));
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < param_1[1]);
    }
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    fn_82522ED8();
    param_1[2] = 0;
  }
  piVar5 = (int *)(*param_1 + 0x98);
  if ((piVar5 != (int *)0x0) &&
     (uVar1 = *(uint *)(*param_1 + 0x9c), uVar2 = (ulonglong)uVar1, 0 < (int)uVar1)) {
    iVar4 = 0;
    do {
      puVar3 = (uint *)(iVar4 + *piVar5);
      if (puVar3[7] == 0) {
        fn_825A1778((ulonglong)*puVar3 + 0x11c,param_2);
      }
      uVar2 = uVar2 - 1;
      iVar4 = iVar4 + 0x1a0;
    } while (uVar2 != 0);
  }
  return;
}

