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
extern unsigned int lbl_830530C0;


longlong fn_830540C0(int param_1,undefined4 param_2,ulonglong param_3,uint param_4,char param_5,
                      uint *param_6,undefined1 *param_7)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_4 + param_3;
  uVar4 = ((longlong)*(int *)(param_1 + 0x6c) * (longlong)*(int *)(param_1 + 0x20) & 0xffffffffU) +
          *(longlong *)(param_1 + 0x18);
  if ((uVar4 < uVar3) && (param_5 == '\0')) {
    *param_6 = (int)uVar4 - (int)param_3;
    *param_7 = 1;
    uVar3 = uVar4;
  }
  else {
    *param_6 = param_4;
    *param_7 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  RtlEnterCriticalSection(iVar1 + 0x10);
  puVar2 = *(ulonglong **)(iVar1 + 0x98);
  if (puVar2 != (ulonglong *)0x0) {
    if (*(int *)((int)puVar2 + 0xc) == 0) {
      *(undefined4 *)(iVar1 + 0x98) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)((int)puVar2 + 0xc);
    }
  }
  RtlLeaveCriticalSection(iVar1 + 0x10);
  *puVar2 = uVar3;
  *(int *)(puVar2 + 1) = param_1;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(uint *)(puVar2 + 3) = param_4;
  *(ulonglong **)(puVar2 + 5) = puVar2;
  puVar2[2] = param_3;
  *(undefined4 *)((int)puVar2 + 0x1c) = 0;
  *(undefined **)((int)puVar2 + 0x24) = &lbl_830530C0;
  *(undefined4 *)((int)puVar2 + 0x2c) = 0;
  *(undefined4 *)((int)puVar2 + 0xc) = 0;
  *(uint *)(puVar2 + 6) = *(uint *)(puVar2 + 6) & 0xfffffff;
  if (*(int *)(param_1 + 0xb4) == 0) {
    *(ulonglong **)(param_1 + 0xb0) = puVar2;
  }
  else {
    *(ulonglong **)(*(int *)(param_1 + 0xb4) + 0xc) = puVar2;
  }
  *(ulonglong **)(param_1 + 0xb4) = puVar2;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  return (longlong)(int)puVar2 + 0x10;
}

