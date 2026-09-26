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
extern int fn_828EA5F8();
extern int fn_828EA840();


undefined8 fn_8241F350(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(*param_1 + 0xa0);
  if ((((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) &&
      (piVar1 = *(int **)(**(int **)(*param_1 + 8) + *param_2 * 4),
      iVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0), *(int *)(iVar3 + 0x24) != 0)
      ) && ((iVar3 = *(int *)(iVar3 + 0x74), iVar3 != 0 &&
            (cVar4 = fn_828EA5F8(iVar3), cVar4 != '\0')))) {
    iVar5 = 0x458;
    lVar6 = 0x29;
    do {
      iVar2 = *(int *)((int)param_2 + iVar5 + -0x360);
      if (*(int *)(*(int *)(iVar3 + 0x100) + iVar5) != iVar2) {
        *(int *)(*(int *)(iVar3 + 0x100) + iVar5) = iVar2;
      }
      iVar5 = iVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    cVar4 = fn_828EA840(iVar3);
    if (cVar4 != '\0') {
      (**(code **)(*(int *)param_1[1] + 0x68))((int *)param_1[1],iVar3);
    }
    return 1;
  }
  return 0;
}

