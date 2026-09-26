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
extern int fn_83010770();
extern int fn_83033048();


void fn_83011828(int param_1,ulonglong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x50); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[2];
    iVar3 = *(int *)(iVar2 + 8);
    if (((((param_2 & 0xffffffff) == 0) ||
         (cVar4 = fn_83010770(param_1,param_2,*(undefined4 *)(iVar3 + 0x10)), cVar4 != '\0'))
        && ((param_3 == 0 || (*(int *)(iVar2 + 0x34) == param_3)))) &&
       ((*(uint *)(iVar3 + 0x14) & 0xffffff00) == 0x501100)) {
      fn_83033048(iVar3);
    }
  }
  return;
}

