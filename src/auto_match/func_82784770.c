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
extern int fn_826EBD10();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82784770(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if ((piVar1 != (int *)0x0) && (1 < (uint)piVar1[1])) {
    puVar2 = (undefined4 *)
             (*(int *)(((uint)piVar1[2] >> 6 & 0x3fffffc) + *(int *)(*piVar1 + 0x14)) +
             (piVar1[2] & 0xffU) * 8);
    uStack_20 = *puVar2;
    uStack_1c = puVar2[1];
    fn_826EBD10(param_1 + 8,&uStack_20);
    *(int *)(*(int *)(param_1 + 0x28) + 4) = *(int *)(*(int *)(param_1 + 0x28) + 4) + 1;
  }
  return;
}

