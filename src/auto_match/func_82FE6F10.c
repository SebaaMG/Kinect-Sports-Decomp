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
extern int fn_82A1E968();
extern int fn_82F68B78();
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_83264308;
extern unsigned int lbl_8326459C;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


undefined8 fn_82FE6F10(ulonglong param_1,uint *param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2 != (uint *)0x0) {
    iVar2 = fn_82F68B78(lbl_83264308);
    iVar3 = iVar2 + 0x10;
    RtlEnterCriticalSection(iVar3);
    for (puVar4 = *(uint **)(iVar2 + 4);
        (puVar4 != *(uint **)(iVar2 + 8) && ((ulonglong)*puVar4 != (param_1 & 0xffffffff)));
        puVar4 = puVar4 + 10) {
    }
    puVar4 = (uint *)(-(uint)(*(uint **)(iVar2 + 8) != puVar4) & (uint)(puVar4 + 2));
    if (puVar4 == (uint *)0x0) {
      *param_2 = 0;
      RtlLeaveCriticalSection(iVar3);
      uVar1 = 2;
    }
    else {
      fn_82A1E968(&lStack_40);
      lVar5 = (longlong)
              (((float)(lStack_40 - *(longlong *)(puVar4 + 4)) / lbl_8326459C) * (float)puVar4[1] +
              ((float)*puVar4 * lbl_8200DFF4) / (float)puVar4[3]);
      uStack_30 = (longlong)(((float)puVar4[2] * lbl_8200DFF4) / (float)puVar4[3]);
      uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)lVar5)) & ((U64)0xFFFFFFFF)) << 32));
      if ((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) <= (((U64)(uStack_38) >> 32) & 0xFFFFFFFF)) {
        uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF))) & ((U64)0xFFFFFFFF)) << 32));
      }
      *param_2 = (((U64)(uStack_38) >> 32) & 0xFFFFFFFF);
      uStack_38 = lVar5;
      RtlLeaveCriticalSection(iVar3);
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0x1f;
}

