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
extern int fn_82522ED8();
extern int fn_82F63CA0();


undefined8 fn_82522430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar5;
  undefined8 uVar4;
  
  RtlEnterCriticalSection(param_1 + 4);
  piVar5 = *(int **)(param_1 + 0x20);
  do {
    if (piVar5 == *(int **)(param_1 + 0x24)) {
      uVar4 = 0;
LAB_825224d4:
      RtlLeaveCriticalSection(param_1 + 4);
      return uVar4;
    }
    iVar1 = *piVar5;
    if (iVar1 == param_2) {
      iVar2 = *(int *)(iVar1 + 4);
      if (iVar2 != 0) {
        lVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) - 1;
        *(int *)(iVar2 + 0xc) = (int)lVar3;
        if (lVar3 < 1) {
          fn_82522ED8();
        }
      }
      fn_82522ED8(iVar1);
      fn_82F63CA0(piVar5,piVar5 + 1,(*(int *)(param_1 + 0x24) - (int)(piVar5 + 1) >> 2) << 2);
      uVar4 = 1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -4;
      goto LAB_825224d4;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

