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
extern int fn_82FA5358();
extern int fn_83055E98();


ulonglong fn_83051330(int param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
                       char param_5)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (((param_5 == '\0') || ((*(uint *)(param_1 + 0x74) & 0x8000000) != 0)) ||
     ((*(byte *)(param_1 + 0xa9) & 0x40) != 0)) {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x60) + 0x10;
    RtlEnterCriticalSection(lVar4);
    fn_82FA5358(*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x8c),param_3);
    fn_83055E98(*(undefined4 *)(param_1 + 0x60));
    RtlLeaveCriticalSection(lVar4);
    param_4 = 0;
  }
  else {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x60) + 0x10;
    RtlEnterCriticalSection(lVar4);
    iVar1 = *(int *)(param_1 + 0x60);
    puVar2 = *(ulonglong **)(iVar1 + 0x78);
    if (puVar2 != (ulonglong *)0x0) {
      if (*(int *)(puVar2 + 2) == 0) {
        *(undefined4 *)(iVar1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(puVar2 + 2);
      }
    }
    RtlLeaveCriticalSection(lVar4);
    uVar3 = *param_2;
    *(int *)(puVar2 + 1) = (int)param_3;
    *puVar2 = uVar3;
    uVar3 = (longlong)*(int *)(param_1 + 0x6c) * (longlong)*(int *)(param_1 + 0x20);
    if ((uVar3 & 0xffffffff) + *(ulonglong *)(param_1 + 0x18) < (param_4 & 0xffffffff) + *param_2) {
      param_4 = ((*(ulonglong *)(param_1 + 0x18) & 0xffffffff) - (*param_2 & 0xffffffff)) + uVar3;
    }
    *(int *)((int)puVar2 + 0xc) = (int)param_4;
    *(undefined4 *)(puVar2 + 2) = 0;
    if (*(int *)(param_1 + 0xa0) == 0) {
      *(ulonglong **)(param_1 + 0x9c) = puVar2;
      *(ulonglong **)(param_1 + 0xa0) = puVar2;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
    else {
      *(ulonglong **)(*(int *)(param_1 + 0xa0) + 0x10) = puVar2;
      *(ulonglong **)(param_1 + 0xa0) = puVar2;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
  }
  return param_4;
}

