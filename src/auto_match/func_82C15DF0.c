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
extern int fn_82C038C8();


undefined8 fn_82C15DF0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *apbStack_30 [12];
  
  apbStack_30[0] = (byte *)0x0;
  if (param_1 == (longlong *)0x0) {
    return 2;
  }
  iVar6 = fn_82C038C8(param_1,*param_1,1,apbStack_30);
  if (iVar6 == 1) {
    *(undefined4 *)(param_1 + 0x35) = 0;
    *(undefined4 *)((int)param_1 + 0x1ac) = 0;
    bVar1 = *apbStack_30[0];
    uVar8 = (ulonglong)bVar1;
    *(undefined1 *)((int)param_1 + 0x1b4) = 0;
    *(uint *)(param_1 + 0x36) = (uint)(bVar1 >> 7);
    if (bVar1 >> 7 != 0) {
      if ((bVar1 & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x35) = 1;
        return 0;
      }
      if ((bVar1 & 0x60) != 0) {
        return 1;
      }
      *(char *)((int)param_1 + 0x1b4) = (char)(uVar8 & 0xf);
      if ((uVar8 & 0xf) != 2) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x1ac) = 3;
      iVar6 = fn_82C038C8(param_1,*param_1 + 3,1,apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      uVar8 = (ulonglong)*apbStack_30[0];
    }
    iVar6 = *(int *)((int)param_1 + 0x1ac);
    *(byte *)((int)param_1 + 0x1bd) = (byte)(uVar8 >> 1) & 3;
    *(uint *)(param_1 + 0x38) = (uint)uVar8 & 1;
    uVar7 = iVar6 + 1;
    *(byte *)((int)param_1 + 0x1b5) = (byte)(uVar8 >> 5) & 3;
    *(byte *)((int)param_1 + 0x1bc) = (byte)(uVar8 >> 3) & 3;
    *(uint *)((int)param_1 + 0x1ac) = uVar7;
    *(int *)(param_1 + 0x37) = iVar6;
    iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,1,apbStack_30);
    if (iVar6 != 1) {
      return 3;
    }
    bVar1 = *apbStack_30[0];
    *(undefined1 *)((int)param_1 + 0x1c4) = 4;
    *(undefined1 *)((int)param_1 + 0x1c5) = 3;
    if (bVar1 != 0x5d) {
      if ((bVar1 & 0xc0) != 0x40) {
        return 1;
      }
      if ((bVar1 & 0x30) != 0x10) {
        return 1;
      }
      bVar3 = bVar1 >> 2 & 3;
      *(byte *)((int)param_1 + 0x1c5) = bVar3;
      if (bVar3 == 0) {
        return 1;
      }
      if (bVar3 < 3) {
        *(byte *)((int)param_1 + 0x1c4) = bVar3;
      }
      if ((bVar1 & 3) != 1) {
        return 1;
      }
    }
    cVar2 = *(char *)((int)param_1 + 0x1b5);
    uVar7 = *(int *)((int)param_1 + 0x1ac) + 1;
    *(uint *)((int)param_1 + 0x1ac) = uVar7;
    *(uint *)(param_1 + 0x39) = uVar7;
    if (cVar2 == '\x01') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,1,apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      bVar1 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
      *(uint *)((int)param_1 + 0x1cc) = (uint)bVar1;
    }
    else if (cVar2 == '\x02') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,2,apbStack_30);
      if (iVar6 != 2) {
        return 3;
      }
      bVar1 = apbStack_30[0][1];
      bVar3 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 2;
      *(uint *)((int)param_1 + 0x1cc) = (uint)bVar1 * 0x100 + (uint)bVar3;
    }
    else if (cVar2 == '\x03') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,4,apbStack_30);
      if (iVar6 != 4) {
        return 3;
      }
      bVar1 = apbStack_30[0][3];
      bVar3 = apbStack_30[0][2];
      bVar4 = apbStack_30[0][1];
      bVar5 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 4;
      *(uint *)((int)param_1 + 0x1cc) =
           (((uint)bVar1 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4) * 0x100 + (uint)bVar5;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1cc) = 0;
    }
    uVar7 = *(uint *)((int)param_1 + 0x1ac);
    cVar2 = *(char *)((int)param_1 + 0x1bd);
    *(uint *)(param_1 + 0x3a) = uVar7;
    if (cVar2 == '\x01') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,1,apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      bVar1 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
      *(uint *)((int)param_1 + 0x1d4) = (uint)bVar1;
    }
    else if (cVar2 == '\x02') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,2,apbStack_30);
      if (iVar6 != 2) {
        return 3;
      }
      bVar1 = apbStack_30[0][1];
      bVar3 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 2;
      *(uint *)((int)param_1 + 0x1d4) = (uint)bVar1 * 0x100 + (uint)bVar3;
    }
    else if (cVar2 == '\x03') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,4,apbStack_30);
      if (iVar6 != 4) {
        return 3;
      }
      bVar1 = apbStack_30[0][3];
      bVar3 = apbStack_30[0][2];
      bVar4 = apbStack_30[0][1];
      bVar5 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 4;
      *(uint *)((int)param_1 + 0x1d4) =
           (((uint)bVar1 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4) * 0x100 + (uint)bVar5;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1d4) = 0;
    }
    uVar7 = *(uint *)((int)param_1 + 0x1ac);
    cVar2 = *(char *)((int)param_1 + 0x1bc);
    *(uint *)(param_1 + 0x3b) = uVar7;
    if (cVar2 == '\x01') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,1,apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      bVar1 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
      *(uint *)((int)param_1 + 0x1dc) = (uint)bVar1;
    }
    else if (cVar2 == '\x02') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,2,apbStack_30);
      if (iVar6 != 2) {
        return 3;
      }
      bVar1 = apbStack_30[0][1];
      bVar3 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 2;
      *(uint *)((int)param_1 + 0x1dc) = (uint)bVar1 * 0x100 + (uint)bVar3;
    }
    else if (cVar2 == '\x03') {
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,4,apbStack_30);
      if (iVar6 != 4) {
        return 3;
      }
      bVar1 = apbStack_30[0][3];
      bVar3 = apbStack_30[0][2];
      bVar4 = apbStack_30[0][1];
      bVar5 = *apbStack_30[0];
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 4;
      *(uint *)((int)param_1 + 0x1dc) =
           (((uint)bVar1 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4) * 0x100 + (uint)bVar5;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1dc) = 0;
    }
    iVar6 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1,6,apbStack_30
                        );
    if (iVar6 == 6) {
      bVar1 = apbStack_30[0][3];
      bVar3 = apbStack_30[0][2];
      bVar4 = apbStack_30[0][1];
      bVar5 = *apbStack_30[0];
      iVar6 = *(int *)((int)param_1 + 0x1ac);
      *(int *)((int)param_1 + 0x1ac) = iVar6 + 4;
      uVar7 = iVar6 + 6;
      *(uint *)(param_1 + 0x3c) =
           (((uint)bVar1 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4) * 0x100 + (uint)bVar5;
      bVar1 = apbStack_30[0][5];
      bVar3 = apbStack_30[0][4];
      *(uint *)((int)param_1 + 0x1ac) = uVar7;
      *(undefined4 *)(param_1 + 0x3d) = 0;
      *(undefined1 *)((int)param_1 + 0x1e6) = 0;
      *(undefined1 *)((int)param_1 + 0x1e7) = 0;
      *(undefined4 *)((int)param_1 + 0x1ec) = 1;
      *(ushort *)((int)param_1 + 0x1e4) = (ushort)bVar1 * 0x100 + (ushort)bVar3;
      if (*(int *)(param_1 + 0x38) == 0) {
        return 0;
      }
      iVar6 = fn_82C038C8(param_1,(ulonglong)uVar7 + *param_1,1,apbStack_30);
      if (iVar6 == 1) {
        bVar1 = *apbStack_30[0];
        *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)((int)param_1 + 0x1ac);
        bVar3 = bVar1 >> 6;
        *(byte *)((int)param_1 + 0x1e6) = bVar3;
        if ((bVar3 == 2) || (bVar3 == 1)) {
          *(byte *)((int)param_1 + 0x1e7) = bVar3;
          *(uint *)((int)param_1 + 0x1ec) = bVar1 & 0x3f;
          if ((bVar1 & 0x3f) != 0) {
            *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 3;
}

