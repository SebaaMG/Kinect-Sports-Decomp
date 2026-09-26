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
extern int fn_8251E530();
extern int fn_825925D8();
extern int fn_825A1778();
extern int fn_825D1EC8();
extern int fn_8261C680();


void fn_8261C588(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  if (iVar1 != 0x17) {
    if (iVar1 == 0x33) {
      uVar2 = *(uint *)(param_1 + 0x4b8);
      *(uint *)(param_1 + 0x4b8) = uVar2 | 4;
      *(uint *)(param_1 + 0x4b8) = uVar2 | 5;
      fn_825925D8(param_1,param_2);
      fn_8261C680(param_1,param_2[2]);
    }
    else {
      if ((iVar1 == 0x44) && (param_2[2] == param_1)) {
        iVar1 = *(int *)(param_1 + 0x4c);
        *(undefined4 *)(iVar1 + 0x3e4) = 0;
        if ((ulonglong)*(uint *)(param_1 + 0x8c0) != 0) {
          fn_825A1778((ulonglong)*(uint *)(param_1 + 0x8c0) + 0x11c,iVar1);
        }
        uVar2 = *(uint *)(iVar1 + 0xcf4);
        for (uVar3 = *(uint *)(iVar1 + 0xcf0); uVar3 < uVar2; uVar3 = uVar3 + 0x100) {
          if (*(int *)(uVar3 + 0x84) == param_1) {
            fn_825D1EC8(uVar3);
            fn_8251E530(iVar1 + 0xcf0,uVar3);
            uVar3 = uVar3 - 0x100;
            uVar2 = uVar2 - 0x100;
          }
        }
      }
      fn_825925D8(param_1,param_2);
    }
  }
  return;
}

