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
extern int fn_82ACA7C0();


void fn_82ACB458(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    do {
      piVar3 = (int *)((uVar1 & 0xfffffffe) - 0x28);
      if (piVar3 == (int *)0x0) {
        return;
      }
      fn_82ACA7C0(param_1,piVar3);
      if (param_3 != '\0') {
        for (iVar2 = *piVar3; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
          if (*(int *)(*(int *)(iVar2 + 0xc) + 0x1c) == param_2) {
            fn_82ACA7C0(param_1);
          }
        }
      }
      uVar1 = piVar3[9];
    } while ((uVar1 & 1) == 0);
  }
  return;
}

