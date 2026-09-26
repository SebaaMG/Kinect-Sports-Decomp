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
extern int fn_82399CB8();
extern int fn_824A5DE0();
extern int fn_824CCFC8();


undefined8 fn_823A2A40(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar2 = fn_82399CB8(*(undefined4 *)(param_1 + 8));
  uVar4 = 0;
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + iVar2 * 4);
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) != 0) {
    do {
      iVar2 = fn_822ABA88(iVar2,uVar4);
      uVar3 = (ulonglong)*(uint *)(iVar2 + 0x24);
      if ((((uVar3 != 0) && (*(int *)(*(uint *)(iVar2 + 0x24) + 0x124) != 0)) &&
          (iVar2 = fn_824A5DE0(), iVar2 != 0)) && (iVar2 = fn_824CCFC8(uVar3), iVar2 != 0)
         ) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 8));
  }
  return 0;
}

