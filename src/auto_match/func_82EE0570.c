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
#define CONCAT42(h,l) ((U64)((((U32)(h)) << 16) | ((U16)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
extern int fn_82E57888();
extern int fn_82F68CC0();
extern unsigned int stack0x00000014;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined8 fn_82EE0570(ulonglong *param_1,int param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong *puStack00000014;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uVar6 = 0;
  if (((param_2 == 0) || (param_1 == (ulonglong *)0x0)) || (param_3 == (int *)0x0)) {
    return 0xffffffff80070057;
  }
  *param_3 = 0;
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = *(uint *)(param_2 + 0x10);
  puVar4 = *(ulonglong **)(param_2 + 0x14);
  puStack00000014 = param_1;
  if ((int)uVar2 < 7) {
    if (uVar2 == 6) {
      uStack_38 = puVar4[1];
      uStack_40 = CONCAT62(CONCAT42((uint)*(byte *)((int)puVar4 + 3) << 0x18 |
                                    (uint)*(byte *)((int)puVar4 + 2) << 0x10 |
                                    (uint)*(byte *)((int)puVar4 + 1) << 8 | (uint)*(byte *)puVar4,
                                    *(ushort *)((int)puVar4 + 4) << 8 |
                                    *(ushort *)((int)puVar4 + 4) >> 8),
                           (ushort)*puVar4 << 8 | (ushort)*puVar4 >> 8);
      fn_82F68CC0(param_1,&uStack_40,0x10);
      puStack00000014 = param_1 + 2;
      goto LAB_82ee0718;
    }
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 < 3) goto LAB_82ee06b8;
        if (uVar2 != 3) {
          bVar1 = uVar2 == 5;
          if (4 < uVar2) goto LAB_82ee069c;
LAB_82ee05e4:
          uVar5 = *puVar4;
          uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar5 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
          uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar5)) & ((U64)0xFFFFFFFF)) << 32));
          *param_1 = ((uVar5 & 0xff) << 0x18 |
                     (uVar5 & 0xff00) << 8 |
                     (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 |
                     (ulonglong)((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
                     ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                     ((ulonglong)(((U64)(uStack_40) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                     (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                     (ulonglong)((((U64)(uStack_40) >> 0) & 0xFFFFFFFF) >> 0x18);
          puStack00000014 = param_1 + 1;
          goto LAB_82ee0718;
        }
LAB_82ee06c8:
        *(uint *)param_1 =
             (uint)*(byte *)((int)puVar4 + 3) << 0x18 | (uint)*(byte *)((int)puVar4 + 2) << 0x10 |
             (uint)*(byte *)((int)puVar4 + 1) << 8 | (uint)*(byte *)puVar4;
        puStack00000014 = (ulonglong *)((int)param_1 + 4);
        goto LAB_82ee0718;
      }
LAB_82ee06d8:
      fn_82F68CC0(param_1,puVar4,uVar3);
      puStack00000014 = (ulonglong *)(uVar3 + (int)param_1);
      goto LAB_82ee0718;
    }
LAB_82ee06f0:
    if ((uVar3 & 1) == 0) {
      fn_82E57888(&stack0x00000014,puVar4,uVar3);
      goto LAB_82ee0718;
    }
  }
  else {
    if (uVar2 == 0x8000) goto LAB_82ee06f0;
    if (uVar2 == 0x8001) goto LAB_82ee06d8;
    if (uVar2 != 0x8002) {
      if (uVar2 == 0x8003) goto LAB_82ee06c8;
      if (uVar2 == 0x8004) goto LAB_82ee05e4;
      bVar1 = uVar2 == 0x8005;
LAB_82ee069c:
      if (!bVar1) goto LAB_82ee06f8;
LAB_82ee06a0:
      *(ushort *)param_1 = *(ushort *)puVar4 << 8 | *(ushort *)puVar4 >> 8;
      puStack00000014 = (ulonglong *)((int)param_1 + 2);
      goto LAB_82ee0718;
    }
LAB_82ee06b8:
    if (uVar3 == 2) goto LAB_82ee06a0;
    if (uVar3 == 4) goto LAB_82ee06c8;
  }
LAB_82ee06f8:
  uVar6 = 0xffffffffc00d3a9a;
LAB_82ee0718:
  *param_3 = (int)puStack00000014 - (int)param_1;
  return uVar6;
}

