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
extern int fn_82E65EE8();
extern int fn_82E76C40();
extern int fn_82E79970();


longlong fn_82E79C08(int param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar4;
  longlong lVar3;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  int *piStack_40;
  byte *pbStack_3c;
  int aiStack_38 [14];
  
  piStack_40 = (int *)0x0;
  aiStack_38[0] = 0;
  uVar6 = param_2;
  iVar4 = fn_82E76C40();
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0x150);
  if ((uVar6 & 0xffffffff) != 0) {
    lVar3 = (**(code **)(*(int *)param_2 + 0x9c))(param_2,aiStack_38);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
    if (aiStack_38[0] == 0) {
      lVar3 = fn_82E65EE8(iVar4,&piStack_40);
      if ((-1 < lVar3) && (lVar3 = (**(code **)(*piStack_40 + 0x18))(piStack_40,iVar4), -1 < lVar3))
      {
        pbStack_3c = (byte *)0x0;
        lVar3 = (**(code **)(*piStack_40 + 0xc))(piStack_40,&pbStack_3c,0,0);
        if (-1 < lVar3) {
          pbVar8 = pbStack_3c;
          if (*(int *)(param_1 + 0x14c) != 0) {
            *pbStack_3c = 0x82;
            pbStack_3c[1] = 0;
            pbStack_3c[2] = 0;
            pbVar8 = pbStack_3c + 3;
          }
          iVar7 = 0;
          *pbVar8 = (((*(byte *)(param_1 + 0x151) & 3) << 2 | *(byte *)(param_1 + 0x152) & 3) << 2 |
                    *(byte *)(param_1 + 0x153) & 3) << 1 | *(int *)(param_1 + 0x154) != 0;
          pbVar8[1] = ((*(char *)(param_1 + 0x15c) << 2 | *(byte *)(param_1 + 0x15d) & 3) << 2 |
                      *(byte *)(param_1 + 0x159) & 3) << 2 | *(byte *)(param_1 + 0x15a) & 3;
          cVar1 = *(char *)(param_1 + 0x151);
          uVar2 = *(uint *)(param_1 + 0x160);
          puVar9 = (uint *)(pbVar8 + 2);
          if (cVar1 == '\x01') {
            iVar7 = 1;
            *(char *)puVar9 = (char)uVar2;
          }
          else if (cVar1 == '\x02') {
            iVar7 = 2;
            *(ushort *)puVar9 =
                 (ushort)(((ulonglong)uVar2 & 0xffff) << 8) |
                 (ushort)(((ulonglong)uVar2 & 0xffff) >> 8);
          }
          else if (cVar1 == '\x03') {
            *puVar9 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            iVar7 = 4;
          }
          cVar1 = *(char *)(param_1 + 0x153);
          puVar9 = (uint *)(iVar7 + (int)puVar9);
          uVar2 = *(uint *)(param_1 + 0x164);
          iVar7 = 0;
          if (cVar1 == '\x01') {
            iVar7 = 1;
            *(char *)puVar9 = (char)uVar2;
          }
          else if (cVar1 == '\x02') {
            iVar7 = 2;
            *(ushort *)puVar9 =
                 (ushort)(((ulonglong)uVar2 & 0xffff) << 8) |
                 (ushort)(((ulonglong)uVar2 & 0xffff) >> 8);
          }
          else if (cVar1 == '\x03') {
            *puVar9 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            iVar7 = 4;
          }
          cVar1 = *(char *)(param_1 + 0x152);
          puVar9 = (uint *)(iVar7 + (int)puVar9);
          uVar2 = *(uint *)(param_1 + 0x168);
          iVar7 = 0;
          if (cVar1 == '\x01') {
            iVar7 = 1;
            *(char *)puVar9 = (char)uVar2;
          }
          else if (cVar1 == '\x02') {
            iVar7 = 2;
            *(ushort *)puVar9 =
                 (ushort)(((ulonglong)uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
          }
          else if (cVar1 == '\x03') {
            *puVar9 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            iVar7 = 4;
          }
          puVar9 = (uint *)((int)puVar9 + iVar7);
          *puVar9 = (uint)*(byte *)(param_1 + 0x143) << 0x18 |
                    (uint)*(byte *)(param_1 + 0x142) << 0x10 | (uint)*(byte *)(param_1 + 0x141) << 8
                    | (uint)*(byte *)(param_1 + 0x140);
          *(ushort *)(puVar9 + 1) =
               *(ushort *)(param_1 + 0x144) << 8 | *(ushort *)(param_1 + 0x144) >> 8;
          pbVar8 = (byte *)((int)puVar9 + 6);
          if (*(int *)(param_1 + 0x154) != 0) {
            bVar5 = fn_82E79970(param_1);
            *pbVar8 = *(char *)(param_1 + 0x170) << 6 | bVar5 & 0x3f;
            pbVar8 = (byte *)((int)puVar9 + 7);
          }
          if ((int)pbVar8 - (int)pbStack_3c != iVar4) {
            lVar3 = -0x7fff0001;
          }
          (**(code **)(*piStack_40 + 0x10))();
          if (-1 < (int)lVar3) {
            lVar3 = (**(code **)(*(int *)param_2 + 0xa8))(param_2,piStack_40);
          }
        }
      }
      if (piStack_40 == (int *)0x0) {
        return lVar3;
      }
      (**(code **)(*piStack_40 + 8))();
      return lVar3;
    }
  }
  return -0x7ff8ffa9;
}

