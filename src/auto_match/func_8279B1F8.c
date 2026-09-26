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
extern int fn_8267BE38();
extern int fn_826C6368();


undefined4 * fn_8279B1F8(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  *param_1 = *param_2;
  piVar1 = (int *)param_2[1];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (uint *)param_1[1];
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      fn_826C6368(puVar2);
      fn_8267BE38(puVar2);
    }
  }
  param_1[1] = param_2[1];
  return param_1;
}

