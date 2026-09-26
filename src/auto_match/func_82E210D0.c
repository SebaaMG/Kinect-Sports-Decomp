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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F68CC0();


void fn_82E210D0(char *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = (ulonglong)uVar1;
  uVar3 = (ulonglong)*(uint *)(param_1 + 8);
  uVar5 = uVar3;
  if (uVar3 <= (uVar4 + param_2 & 0xffffffff)) {
    do {
      uVar5 = *(uint *)(param_1 + 0xc) + uVar5;
    } while ((uVar5 & 0xffffffff) <= ((ulonglong)uVar1 + param_2 & 0xffffffff));
  }
  if (uVar3 < (uVar5 & 0xffffffff)) {
    uVar3 = uVar5;
    if (*param_1 != '\0') {
      uVar4 = ((ulonglong)uVar1 & 0x7fffffff) << 1;
      uVar3 = (uVar5 & 0x7fffffff) << 1;
    }
    uVar2 = fn_8265C9E0(uVar3);
    fn_82F68CC0(uVar2,*(undefined4 *)(param_1 + 0x10),uVar4);
    fn_8265CA20(*(undefined4 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = (int)uVar2;
    *(int *)(param_1 + 8) = (int)uVar5;
  }
  return;
}

