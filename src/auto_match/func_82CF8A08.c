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
extern int fn_82D01468();


undefined1 * fn_82CF8A08(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char acStack_40 [64];
  
  iVar2 = param_2 + 4;
  RtlEnterCriticalSection(iVar2);
  iVar1 = *(int *)(param_2 + 0x208);
  iVar4 = 0;
  *param_1 = 1;
  if (iVar1 < 1) {
LAB_82cf8a8c:
    RtlLeaveCriticalSection(iVar2);
  }
  else {
    puVar3 = (undefined4 *)(param_2 + 0x17c);
    do {
      fn_82D01468(acStack_40,*puVar3);
      if (acStack_40[0] == '\0') {
        *param_1 = 0;
        goto LAB_82cf8a8c;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_2 + 0x208));
    RtlLeaveCriticalSection(iVar2);
  }
  return param_1;
}

