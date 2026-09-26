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
extern int fn_8284F488();
extern int fn_8284F498();
extern int fn_8284F560();


void fn_825B1180(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar2 = fn_8284F488();
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        fn_8284F560(param_1,uVar4,0,0,0,0,0,0);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (uVar2 & 0xffffffff));
    }
    uVar2 = fn_8284F498(param_1);
    if ((uVar2 & 0xffffffff) != 0) {
      iVar3 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 + 4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 + 8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 + 0xc) = 0;
        iVar1 = *(int *)(param_1 + 0xc) + iVar3;
        iVar3 = iVar3 + 0x14;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}

