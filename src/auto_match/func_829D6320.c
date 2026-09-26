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
extern int fn_82A2AFE8();
extern unsigned int lbl_832179FC;


void fn_829D6320(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    iVar3 = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(iVar3);
    piVar2 = (int *)(*(int *)(param_1 + 0x18) * 0x18 + lbl_832179FC);
    if ((*piVar2 != 2) && (*piVar2 != 1)) {
      piVar2[5] = 0;
    }
    iVar1 = piVar2[5];
    RtlLeaveCriticalSection(iVar3);
    if (iVar1 != 0) {
      fn_82A2AFE8(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
      iVar3 = lbl_832179FC + 0x24980;
      RtlEnterCriticalSection(iVar3);
      *(undefined4 *)(*(int *)(param_1 + 0x18) * 0x18 + lbl_832179FC + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      RtlLeaveCriticalSection(iVar3);
    }
  }
  return;
}

