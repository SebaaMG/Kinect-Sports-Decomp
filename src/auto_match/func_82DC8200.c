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


ulonglong fn_82DC8200(int *param_1,undefined1 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (ulonglong)(uint)param_1[1] - 1;
  if (-1 < (longlong)uVar2) {
    do {
      if (*(char *)(*param_1 + (int)uVar2) == -1) {
        *(undefined1 *)(*param_1 + (int)uVar2) = param_2;
        return uVar2;
      }
      uVar2 = uVar2 - 1;
    } while (-1 < (longlong)uVar2);
  }
  iVar3 = fn_82CE5410();
  if (param_1[1] != (param_1[2] & 0x3fffffffU)) {
    *(undefined1 *)(*param_1 + param_1[1]) = param_2;
    uVar1 = param_1[1];
    param_1[1] = uVar1 + 1;
    return (ulonglong)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_1,1);
}

