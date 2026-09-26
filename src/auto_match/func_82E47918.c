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
extern int fn_82E477A0();
extern int fn_82E47870();
extern int fn_82E50330();


longlong fn_82E47918(int param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  RtlEnterCriticalSection(param_1 + 4);
  lVar2 = fn_82E47870(param_1,param_2);
  if (lVar2 == 0) {
    if (((ulonglong)*(uint *)(param_1 + 0x28) == (ulonglong)*(uint *)(param_1 + 0x24)) &&
       (iVar3 = fn_82E477A0(param_1,(ulonglong)*(uint *)(param_1 + 0x24) + 4), iVar3 < 0)) {
      lVar2 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x28) * 0x20;
      iVar4 = iVar3 + *(int *)(param_1 + 0x20);
      *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x20)) = *param_2;
      *(undefined4 *)(iVar4 + 4) = param_2[1];
      *(undefined4 *)(iVar4 + 8) = param_2[2];
      *(undefined4 *)(iVar4 + 0xc) = param_2[3];
      uVar1 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar1 + 1;
      lVar2 = ((ulonglong)uVar1 & 0x7ffffff) * 0x20 + (ulonglong)*(uint *)(param_1 + 0x20) + 0x10;
    }
  }
  else {
    fn_82E50330(lVar2);
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return lVar2;
}

