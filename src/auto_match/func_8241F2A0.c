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


undefined8 fn_8241F2A0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(*param_1 + 0xa0);
  if ((((iVar2 == 0) || (*(int *)(iVar2 + 0x40) != 1)) &&
      (piVar1 = *(int **)(**(int **)(*param_1 + 8) + *param_2 * 4),
      iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0), *(int *)(iVar2 + 0x24) != 0)
      ) && (iVar2 = *(int *)(iVar2 + 0x74), iVar2 != 0)) {
    iVar3 = 0x458;
    lVar4 = 0x29;
    do {
      *(undefined4 *)((int)param_2 + iVar3 + -0x360) =
           *(undefined4 *)(iVar3 + *(int *)(iVar2 + 0x100));
      iVar3 = iVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return 1;
  }
  return 0;
}

