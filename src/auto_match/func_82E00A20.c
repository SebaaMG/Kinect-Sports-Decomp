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


void fn_82E00A20(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4);
      iVar2 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),param_2,4);
      }
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 0x60;
      *(undefined4 *)(param_2[1] * 4 + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
    } while (uVar3 != 0);
  }
  return;
}

