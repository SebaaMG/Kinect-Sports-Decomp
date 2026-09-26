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
extern int fn_82A1E810();


void fn_8267CB08(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  RtlEnterCriticalSection();
  puVar1 = *(undefined4 **)(iVar3 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[1];
    if (iVar2 == 0) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
    }
    else {
      *(int *)(iVar3 + 0x20) = iVar2;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    fn_82A1E810(*puVar1);
  }
  RtlLeaveCriticalSection(iVar3);
  return;
}

