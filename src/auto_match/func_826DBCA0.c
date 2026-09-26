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
extern unsigned int *auStack_28;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826A8E58();
extern int fn_826D7C00();
extern int fn_826D9530();
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern U64 storeWordConditionalIndexed();


undefined8 fn_826DBCA0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  char in_RESERVE;
  byte bVar9;
  uint auStack_40 [2];
  uint *puStack_38;
  undefined4 uStack_34;
  uint *puStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [40];
  
  if (param_2 != 0) {
    fn_8268C510(auStack_40);
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20);
    iVar8 = 0;
    if (*(int *)(iVar1 + 0x74) < 2) {
      RtlEnterCriticalSection(iVar1 + 0xac);
      iVar8 = iVar1;
    }
    puStack_38 = auStack_40;
    fn_826D9530(&puStack_30,
                  (ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20) + 0xcc,
                  &puStack_38);
    puStack_38 = (uint *)0x0;
    uStack_34 = 0;
    cVar4 = fn_826A8E58(auStack_28,&puStack_38);
    bVar9 = (cVar4 == '\0') << 1;
    if (cVar4 == '\0') {
      uVar3 = fn_826D7C00((ulonglong)uStack_2c * 0x14 + (ulonglong)*puStack_30 + 0x14,
                            (ulonglong)*(uint *)(param_1 + 0x1c) + 0x18);
      if (iVar8 != 0) {
        RtlLeaveCriticalSection(iVar8 + 0xac);
      }
      lVar6 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
      do {
        puVar7 = (uint *)lVar6;
        uVar5 = (ulonglong)*puVar7;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
          *puVar7 = uVar2;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar5 != 1) {
        return uVar3;
      }
      fn_8267BE38();
      return uVar3;
    }
    if (iVar8 != 0) {
      RtlLeaveCriticalSection(iVar8 + 0xac);
    }
    lVar6 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar5 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38();
    }
  }
  return 0;
}

