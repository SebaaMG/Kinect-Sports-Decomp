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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern unsigned int *auStack_60;
extern int fn_82647C20();
extern int fn_82648160();
extern int fn_8264EAC0();
extern int fn_82A1E508();
extern U64 storeWordConditionalIndexed();


undefined8 fn_8264ED80(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  undefined8 auStack_60 [12];
  
  fn_82A1E508(0xfffffffffffffffe,param_1[1]);
  while( true ) {
    uVar1 = *param_1;
    uVar2 = param_1[0x16];
    auStack_60[0] = 0xfffffffffffb6c20;
    uVar7 = -(uint)(*(uint *)(uVar1 + 0x178) == param_1[1]) & (uint)auStack_60;
    if (uVar2 == param_1[0x15]) {
      lVar8 = (ulonglong)uVar1 + 0x2c;
      do {
        puVar9 = (uint *)lVar8;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar8);
          *puVar9 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      iVar6 = KeWaitForSingleObject(param_1 + 0xf,3,1,0,uVar7,uVar2,auStack_60,in_MSR);
      do {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)*puVar9 - 1,0,lVar8);
          *puVar9 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      while (iVar6 == 0x102) {
        iVar6 = KeGetCurrentProcessType();
        piVar3 = __imp__VdGlobalDevice;
        if (iVar6 == 2) {
          piVar3 = __imp__VdGlobalXamDevice;
        }
        iVar6 = *piVar3;
        RtlEnterCriticalSection(iVar6 + 0x3b34);
        bVar5 = (*(byte *)(iVar6 + 0x2abe) & 2) == 0;
        in_cr0 = bVar5 << 1;
        if (!bVar5) {
          fn_82647C20(iVar6,0);
          fn_82648160(iVar6,iVar6 + 0x3ad0,0);
        }
        RtlLeaveCriticalSection(iVar6 + 0x3b34);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar8);
            *puVar9 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        iVar6 = KeWaitForSingleObject(param_1 + 0xf,3,1,0,uVar7);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar9 - 1,0,lVar8);
            *puVar9 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    KeResetEvent(param_1 + 0xf);
    if (*(int *)(uVar1 + 4) == 0) break;
    fn_8264EAC0(param_1);
  }
  return 0;
}

