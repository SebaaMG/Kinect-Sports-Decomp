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
extern unsigned int *auStack_20;
extern int fn_82FAE140();
extern unsigned int uStack_18;


ulonglong fn_82FAA060(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  uint uStack_18;
  int *piStack_14;
  
  uStack_18 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (uStack_18 != 0) {
    piStack_14 = *(int **)(uStack_18 + 4);
    if (piStack_14 != (int *)0x0) {
      iVar3 = piStack_14[0x10];
      while( true ) {
        if (iVar3 != 0) {
          uVar1 = *(uint *)(iVar3 + 0x5c);
          lVar2 = fn_82FAE140(*(undefined4 *)(iVar3 + 0x60));
          return lVar2 + (ulonglong)uVar1;
        }
        piStack_14 = (int *)(**(code **)(*piStack_14 + 0xc))
                                      (piStack_14,*(undefined4 *)(param_1 + 8),&uStack_18,auStack_20
                                      );
        if (piStack_14 == (int *)0x0) break;
        iVar3 = piStack_14[0x10];
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
      return (ulonglong)*(uint *)(iVar3 + 0xac);
    }
  }
  return 0;
}

