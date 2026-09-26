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
extern int fn_82E50330();
extern int fn_82F68CC0();


undefined8 fn_82E2B200(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  RtlEnterCriticalSection(param_1 + 4);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar3 = 0;
    do {
      pbVar4 = (byte *)(iVar3 + *(int *)(param_1 + 0x20));
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != param_2 + 0x10);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        fn_82E50330(uVar6 * 0x20 + *(int *)(param_1 + 0x20) + 0x10);
        iVar3 = *(int *)(param_1 + 0x20) + uVar6 * 0x20;
        fn_82F68CC0(iVar3,iVar3 + 0x20,(*(int *)(param_1 + 0x28) - uVar6) - 1 & 0x7ffffff);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        break;
      }
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 0x20;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return 0;
}

