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


void fn_82D4A320(int param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x18) == (*(uint *)(param_1 + 0x1c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),(int *)(param_1 + 0x14),1);
  }
  *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)) = (char)param_3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (0 < (int)param_3) {
    do {
      uVar1 = *param_2;
      iVar2 = fn_82CE5410();
      if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),(int *)(param_1 + 8),2);
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      *(short *)(*(int *)(param_1 + 0xc) * 2 + *(int *)(param_1 + 8)) = (short)uVar1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    } while (param_3 != 0);
  }
  return;
}

