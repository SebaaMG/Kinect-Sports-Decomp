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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_8308B7A0(int param_1,int param_2,short param_3,int param_4,int *param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  if ((*(uint *)(param_4 + 0xc) & 1) == 0) {
    iVar1 = fn_82CE5410();
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),param_5,8);
    }
    iVar1 = *param_5;
    iVar3 = param_5[1] * 8;
    param_5[1] = param_5[1] + 1;
    *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar3 + iVar1 + 4) = *(undefined4 *)(param_4 + 0xc);
  }
  else {
    param_1 = (*(uint *)(param_4 + 0xc) & 0xfffffffe) + param_1;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      psVar2 = *(short **)(param_1 + 4);
      do {
        if (*psVar2 == param_3) goto LAB_8308b864;
        iVar1 = iVar1 + 1;
        psVar2 = psVar2 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    iVar1 = -1;
LAB_8308b864:
    iVar3 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 != iVar1) {
      *(undefined2 *)(iVar1 * 2 + *(int *)(param_1 + 4)) =
           *(undefined2 *)(iVar3 * 2 + *(int *)(param_1 + 4));
    }
  }
  return;
}

