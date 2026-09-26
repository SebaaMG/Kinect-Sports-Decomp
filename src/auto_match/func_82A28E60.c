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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82A26C08();
extern int fn_82A27010();
extern int fn_82A27C30();
extern int fn_82A29104();
extern unsigned int uStack_48;
extern unsigned int uStack_8;


uint fn_82A28E60(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_50 [8];
  uint uStack_48;
  undefined1 auStack_40 [56];
  undefined4 uStack_8;
  
  uStack_48 = 1;
  if (((*(uint *)(param_1 + 0x14) & 0x40000) != 0) &&
     (uVar3 = KeGetCurrentProcessType(), *(byte *)(param_1 + 0x17b) != uVar3)) {
    KeBugCheckEx(0xf4,param_1,uStack_8,0x1150,param_3);
  }
  if (param_3 == 0) {
    return 1;
  }
  bVar2 = ((*(uint *)(param_1 + 0x18) | param_2) & 1) == 0;
  if (bVar2) {
    RtlEnterCriticalSection(*(undefined4 *)(param_1 + 0x580));
  }
  if ((*(byte *)(param_3 + -0xb) & 8) != 0) {
    iVar5 = *(int *)(param_3 + -0x30);
    piVar6 = *(int **)(param_3 + -0x2c);
    *piVar6 = iVar5;
    *(int **)(iVar5 + 4) = piVar6;
    if (bVar2) {
      RtlLeaveCriticalSection(*(undefined4 *)(param_1 + 0x580));
    }
    iVar5 = NtFreeVirtualMemory(auStack_40,auStack_50,0x8000,*(undefined4 *)(param_1 + 0x590));
    uStack_48 = -(iVar5 >> 0x1f) - 1U & 1;
    goto LAB_82a290c4;
  }
  uVar3 = (uint)*(ushort *)(param_3 + -0x10);
  puVar4 = (ushort *)fn_82A26C08(param_1,(ushort *)(param_3 + -0x10),auStack_50,0);
  if (uVar3 < 0x80) {
    *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) & 0x10;
    piVar6 = (int *)((uVar3 + 0x30) * 8 + param_1);
    if ((int *)*piVar6 == piVar6) {
      iVar5 = ((*puVar4 >> 5) + 0x58) * 4;
      *(uint *)(iVar5 + param_1) = 1 << (*puVar4 & 0x1f) | *(uint *)(iVar5 + param_1);
    }
    puVar1 = (undefined4 *)piVar6[1];
    *(int **)(puVar4 + 4) = piVar6;
    *(undefined4 **)(puVar4 + 6) = puVar1;
    *puVar1 = puVar4 + 4;
    piVar6[1] = (int)(puVar4 + 4);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  else {
    if ((*(uint *)(param_1 + 0x28) <= uVar3) &&
       (*(uint *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x30) + uVar3)) {
      fn_82A27C30(param_1);
      goto LAB_82a290c4;
    }
    if (0xf000 < uVar3) {
      fn_82A27010(param_1);
      goto LAB_82a290c4;
    }
    *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) & 0x10;
    for (piVar6 = *(int **)(param_1 + 0x180);
        ((int *)(param_1 + 0x180) != piVar6 && (*(ushort *)(piVar6 + -2) < uVar3));
        piVar6 = (int *)*piVar6) {
    }
    puVar1 = (undefined4 *)piVar6[1];
    *(int **)(puVar4 + 4) = piVar6;
    *(undefined4 **)(puVar4 + 6) = puVar1;
    *puVar1 = puVar4 + 4;
    piVar6[1] = (int)(puVar4 + 4);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  *(uint *)(param_1 + 0x30) = iVar5 + uVar3;
LAB_82a290c4:
  fn_82A29104();
  return uStack_48;
}

