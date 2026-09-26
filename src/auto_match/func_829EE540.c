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
extern int fn_829EE1D8();
extern int fn_829EE4F0();


void fn_829EE540(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = fn_829EE4F0(param_1,(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)) / 0x24,
                        *(undefined4 *)(param_2 + 0x14));
  if (iVar1 < 0) {
LAB_829ee5e8:
    *param_1 = iVar1;
  }
  else {
    uVar4 = 0;
    if ((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)) / 0x24 != 0) {
      iVar2 = 0;
      lVar3 = 0;
      do {
        iVar1 = fn_829EE1D8(param_1,uVar4,*(undefined4 *)(iVar2 + *(int *)(param_2 + 0x1c)),
                              (ulonglong)*(uint *)(param_2 + 8) + lVar3);
        if (iVar1 < 0) goto LAB_829ee5e8;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x24;
        iVar2 = iVar2 + 4;
      } while ((uVar4 & 0xffffffff) <
               (ulonglong)(uint)((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)) / 0x24));
    }
  }
  return;
}

