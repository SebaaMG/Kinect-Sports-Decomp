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
extern int fn_826944C8();
extern int fn_826947E8();


void fn_82694BF0(uint *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar5;
  longlong lVar4;
  
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  puVar2 = (undefined4 *)*param_1;
  uVar3 = fn_826947E8(*(undefined4 *)((uint)puVar2 & 0xfffffc00),*puVar2,puVar2[4],param_2,
                        pcVar5 + (-1 - (int)param_2));
  *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
  lVar4 = (ulonglong)*(uint *)(*param_1 + 8) - 1;
  *(int *)(*param_1 + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8();
  }
  *param_1 = uVar3;
  return;
}

