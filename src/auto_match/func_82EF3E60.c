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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_30;
extern int fn_82936290();
extern int fn_82F68CC0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined8 fn_82EF3E60(int *param_1,int param_2,uint param_3,uint *param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char *pcVar4;
  uint uVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong auStack_30 [6];
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
LAB_82ef41a4:
    uVar2 = 0xffffffff80070057;
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,auStack_30,0);
    if (0xffffffff < auStack_30[0]) {
      return 0xffffffffc00d3a9a;
    }
    *param_4 = (uint)auStack_30[0];
    if (param_3 < (uint)auStack_30[0]) {
      return 0xffffffffc00d36b1;
    }
    uStack_38 = *(undefined8 *)(param_1 + 6);
    uStack_40 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                         (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                         (uint)*(byte *)((int)param_1 + 0x11) << 8 | (uint)*(byte *)(param_1 + 4),
                         CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8,
                                  *(ushort *)((int)param_1 + 0x16) << 8 |
                                  *(ushort *)((int)param_1 + 0x16) >> 8));
    fn_82F68CC0(param_2,&uStack_40,0x10);
    uVar3 = *(ulonglong *)(param_1 + 8);
    uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar3)) & ((U64)0xFFFFFFFF)) << 32));
    uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar3 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    *(ulonglong *)(param_2 + 0x10) =
         ((uVar3 & 0xff) << 0x18 |
         (uVar3 & 0xff00) << 8 |
         (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20
         | ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
           ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
           (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
    *(uint *)(param_2 + 0x18) =
         (uint)*(byte *)((int)param_1 + 0x57) << 0x18 | (uint)*(byte *)((int)param_1 + 0x56) << 0x10
         | (uint)*(byte *)((int)param_1 + 0x55) << 8 | (uint)*(byte *)(param_1 + 0x15);
    puVar8 = (uint *)(param_2 + 0x1c);
    uStack_40 = uVar3;
    if (param_1[0x15] != 0) {
      fn_82F68CC0(puVar8,param_1[0x14]);
      puVar8 = (uint *)(param_1[0x15] + (int)puVar8);
    }
    pcVar7 = (char *)param_1[0x12];
    pcVar4 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      puVar6 = puVar8 + 1;
      *puVar8 = 0;
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar7;
      *puVar8 = uVar5 * 0x1000000 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
      pcVar7 = (char *)param_1[0x12];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (0x7fffffff < (uint)((int)pcVar7 - param_1[0x12])) goto LAB_82ef41a4;
      uVar2 = fn_82936290(puVar8 + 1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      pcVar7 = (char *)param_1[0x12];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar6 = (uint *)(((int)pcVar7 - param_1[0x12]) + (int)(puVar8 + 1));
    }
    pcVar7 = (char *)param_1[0x13];
    pcVar4 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      puVar8 = puVar6 + 1;
      *puVar6 = 0;
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar7;
      *puVar6 = uVar5 * 0x1000000 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
      pcVar7 = (char *)param_1[0x13];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (0x7fffffff < (uint)((int)pcVar7 - param_1[0x13])) goto LAB_82ef41a4;
      uVar2 = fn_82936290(puVar6 + 1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      pcVar7 = (char *)param_1[0x13];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar8 = (uint *)(((int)pcVar7 - param_1[0x13]) + (int)(puVar6 + 1));
    }
    pcVar7 = (char *)param_1[0x16];
    pcVar4 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      *puVar8 = 0;
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar7;
      *puVar8 = uVar5 * 0x1000000 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00 | uVar5 >> 0x18;
      pcVar7 = (char *)param_1[0x16];
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (0x7fffffff < (uint)((int)pcVar7 - param_1[0x16])) goto LAB_82ef41a4;
      uVar2 = fn_82936290(puVar8 + 1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

