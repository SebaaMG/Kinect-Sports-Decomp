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


longlong fn_82D7CDB8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if ((ulonglong)uVar1 < 0x200) {
    uVar2 = *(uint *)(param_1[2] * 4 + param_1[1] + -4);
    *param_1 = uVar1 + 0x80;
    lVar3 = (ulonglong)uVar2 + (ulonglong)uVar1;
  }
  else {
    iVar4 = fn_82CE5410();
    lVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x200);
    iVar4 = fn_82CE5410();
    if (param_1[2] == (param_1[3] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_1 + 1,4);
    }
    *(int *)(param_1[2] * 4 + param_1[1]) = (int)lVar3;
    param_1[2] = param_1[2] + 1;
    *param_1 = 0x80;
  }
  return lVar3;
}

