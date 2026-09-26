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
extern int fn_82A2C4A8();
extern int fn_82A2F770();
extern int fn_82A30700();
extern int fn_83142E8C();


void fn_82A30D88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x50) + 0x18);
  iVar2 = *(int *)(iVar1 + 8);
  RtlEnterCriticalSection();
  fn_83142E8C(iVar1,iVar2 + 0x38);
  if ((*(int *)(param_1 + 0x88) == 0) && (*(int *)(iVar2 + 0x10) == 1)) {
    if ((*(byte *)(iVar2 + 0x35) & 8) == 0) {
      if ((*(byte *)(iVar2 + 0x35) & 0x10) != 0) {
        fn_82A30700(param_1,iVar2,0);
      }
    }
    else {
      iVar4 = fn_82A30700(param_1,iVar2,1);
      if (-1 < iVar4) {
        if (((*(byte *)(iVar2 + 0x35) & 2) == 0) && (*(int *)(iVar2 + 0x14) != 0)) {
          fn_82A2F770(param_1,*(undefined4 *)(iVar2 + 0x20),0,0);
        }
        iVar4 = *(int *)(iVar2 + 0x48);
        piVar3 = *(int **)(iVar2 + 0x4c);
        *piVar3 = iVar4;
        *(int **)(iVar4 + 4) = piVar3;
        fn_82A2C4A8(*(undefined4 *)(iVar2 + 8));
        *(undefined4 *)(iVar2 + 8) = 0;
      }
    }
  }
  *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 0x10;
  RtlLeaveCriticalSection(param_1);
  *(undefined4 *)(param_2 + 0x10) = 0;
  IoCompleteRequest(param_2,1);
  return;
}

