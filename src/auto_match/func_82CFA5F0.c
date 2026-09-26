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
extern unsigned int *auStack_30;
extern int fn_82CFA528();


bool fn_82CFA5F0(int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_30 [48];
  
  pcVar1 = (char *)(**(code **)(**(int **)(param_1 + 8) + 0xc))(auStack_30);
  if (*pcVar1 == '\0') {
    bVar3 = true;
  }
  else {
    fn_82CFA528(param_1);
    iVar4 = 0;
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x18) - (ulonglong)*(uint *)(param_1 + 0x14);
    if (0 < lVar5) {
      do {
        iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                          (*(int **)(param_1 + 8),
                           (ulonglong)*(uint *)(param_1 + 0x10) +
                           (ulonglong)*(uint *)(param_1 + 0xc),lVar5);
        iVar4 = iVar2 + iVar4;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar2;
        if (iVar2 != (int)lVar5) {
          return iVar4 == 0;
        }
      } while (iVar4 < (int)lVar5);
    }
    bVar3 = false;
  }
  return bVar3;
}

