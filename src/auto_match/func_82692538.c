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
extern int fn_82691AF0();
extern int fn_82691BF8();
extern int fn_82692150();
extern int fn_8270C258();
extern unsigned int lbl_831E7E60;


void fn_82692538(int param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(ushort *)(param_2 + 0xc) < 8) {
    param_3[2] = param_2;
    iVar1 = (uint)*(ushort *)(param_2 + 0xc) * 8 + param_1;
    param_3[1] = *(int *)(iVar1 + 0x1b8);
    *param_3 = iVar1 + 0x1b4;
    **(int **)(iVar1 + 0x1b8) = (int)param_3;
    *(int **)(iVar1 + 0x1b8) = param_3;
    *(uint *)(param_1 + 0x210) =
         (*(ushort *)(param_2 + 0xc) + 1 << (*(uint *)(param_1 + 0xc) & 0x3f)) +
         *(int *)(param_1 + 0x210);
    lVar2 = (ulonglong)*(uint *)(param_2 + 0x10) - 1;
    *(int *)(param_2 + 0x10) = (int)lVar2;
    if (lVar2 == 0) {
      fn_82692150();
    }
  }
  else if (*(ushort *)(param_2 + 0xc) == 10) {
    fn_8270C258(param_1 + 0x14,param_2);
    lVar2 = (ulonglong)*(uint *)(param_2 + 0x10) - 1;
    *(int *)(param_2 + 0x10) = (int)lVar2;
    if (lVar2 == 0) {
      fn_82691BF8(param_1,param_2);
    }
  }
  else {
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) - *(int *)(param_2 + 0x18);
    uVar3 = (ulonglong)lbl_831E7E60;
    RtlEnterCriticalSection(uVar3 + 0x2c4);
    fn_82691AF0(param_1,param_2);
    RtlLeaveCriticalSection(uVar3 + 0x2c4);
  }
  return;
}

