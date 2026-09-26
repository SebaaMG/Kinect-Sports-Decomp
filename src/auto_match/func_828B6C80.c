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
extern unsigned int *auStack_30;
extern int fn_822315A0();


undefined4 * fn_828B6C80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_30 [12];
  
  while (param_1 != param_2) {
    puVar5 = param_2 + -2;
    puVar4 = param_3 + -2;
    uVar2 = 0;
    uVar3 = 0;
    if (auStack_30 != puVar5) {
      uVar3 = param_2[-1];
      param_2[-1] = 0;
      uVar2 = *puVar5;
      *puVar5 = 0;
    }
    iVar1 = param_3[-1];
    param_3[-1] = uVar3;
    *puVar4 = uVar2;
    param_2 = puVar5;
    param_3 = puVar4;
    if (iVar1 != 0) {
      fn_822315A0();
    }
  }
  return param_3;
}

