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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_82A2BB60();
extern int fn_82A2BCF0();
extern int fn_83142DFC();
extern unsigned int iStack_7c;
extern unsigned int uStack_4c;
extern unsigned int uStack_80;


longlong fn_82A2BDA0(longlong param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined1 uVar19;
  ulonglong uVar18;
  undefined4 uStack_80;
  int iStack_7c;
  uint auStack_78 [2];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [20];
  uint uStack_4c;
  
  if ((param_2 == 0x58) && (iVar9 = (int)param_1, 4 < *(byte *)(iVar9 + 0x50))) {
    uVar15 = *(undefined4 *)(iVar9 + 0x18);
    lVar10 = NtQueryVolumeInformationFile(uVar15,auStack_70,auStack_60,0x18,3);
    if (-1 < (int)lVar10) {
      if (uStack_4c < 0x1001) {
        lVar10 = NtQueryInformationFile(uVar15,auStack_70,auStack_78,4,0x11);
        if (-1 < (int)lVar10) {
          lVar10 = NtCreateEvent(&uStack_80,0,1,0);
          if (-1 < (int)lVar10) {
            bVar1 = *(byte *)(iVar9 + 0x50);
            lVar10 = fn_83142DFC(0xffffffff8315d30c,
                                     (ulonglong)*(uint *)(iVar9 + 0x44) + (ulonglong)bVar1 * 8 +
                                     0xd8,param_1,0x3d,
                                     (-(ulonglong)(*(char *)(iVar9 + 0x51) != '\0') & 0xfffff000) +
                                     0x2000,&iStack_7c);
            if (lVar10 < 0) {
              NtClose(uStack_80);
            }
            else {
              *(int *)(iStack_7c + 0xc) = iStack_7c;
              if (*(uint *)(iStack_7c + 0x24) < auStack_78[0]) {
                *(uint *)(iStack_7c + 0x24) = auStack_78[0];
              }
              param_1 = param_1 + 0x1c;
              iVar7 = *(int *)(iStack_7c + 0x18);
              uVar14 = 1;
              *(uint *)(iStack_7c + 0x20) = uStack_4c & 0xffff;
              *(undefined8 *)(iVar7 + 0x20) = *(undefined8 *)(iVar9 + 8);
              *(undefined4 *)(iVar7 + 0x28) = uVar15;
              *(undefined4 *)(iVar7 + 0x2c) = uStack_80;
              *(undefined1 *)(iVar7 + 0xcf) = *(undefined1 *)(iVar9 + 0x53);
              uVar8 = *(uint *)(iVar9 + 0x38);
              bVar2 = *(byte *)(iVar9 + 0x1e);
              uVar12 = (ulonglong)bVar2 & 1;
              *(uint *)(iVar7 + 0x9c) = uVar8;
              *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar9 + 0x3c);
              if (uVar8 < 0x70e5) {
                if (uVar8 < 0xab) {
                  *(undefined1 *)(iVar7 + 0xca) = 0;
                }
                else {
                  *(undefined1 *)(iVar7 + 0xca) = 1;
                }
              }
              else {
                *(undefined1 *)(iVar7 + 0xca) = 2;
              }
              if ((bVar2 & 1) == 0) {
                uVar19 = 0xac;
                *(undefined1 *)(iVar7 + 0xce) = 1;
                uVar15 = 0x723a;
              }
              else {
                *(undefined1 *)(iVar7 + 0xce) = 0;
                uVar19 = 0xab;
                uVar15 = 0x718f;
              }
              *(undefined4 *)(iVar7 + 0x94) = uVar15;
              *(undefined1 *)(iVar7 + 0x91) = uVar19;
              if ((bVar2 & 1) == 0) {
                uVar18 = *(ulonglong *)(iVar9 + 0x10) >> 0xc;
                if (0xffffffff < uVar18) {
                  uVar18 = 0xffffffff;
                }
                iVar13 = (int)uVar18;
                uVar14 = 1;
                iVar11 = fn_82A2BCF0(uVar18 & 0xffffffff);
                *(int *)(iVar7 + 0x98) = iVar11;
                *(undefined1 *)(iVar7 + 0xcd) = *(undefined1 *)(iVar9 + 0x52);
                *(int *)(iVar7 + 0xac) = iVar13 - iVar11;
              }
              *(undefined4 *)(iVar7 + 0x8c) = 0x14;
              *(undefined4 *)(iVar7 + 0x48) = uVar14;
              *(int *)(iVar7 + 0x38) = iVar7 + 0x38;
              *(undefined1 *)(iVar7 + 0x6d) = 6;
              *(int *)(iVar7 + 0x3c) = iVar7 + 0x38;
              *(int *)(iVar7 + 0x78) = iVar7 + 0x78;
              *(int *)(iVar7 + 0x7c) = iVar7 + 0x78;
              *(undefined2 *)(iVar7 + 0x6e) = 0xffff;
              iVar11 = (int)param_1;
              bVar2 = *(byte *)(iVar11 + 3);
              bVar3 = *(byte *)(iVar11 + 6);
              bVar4 = *(byte *)(iVar11 + 5);
              bVar5 = *(byte *)(iVar11 + 7);
              bVar6 = *(byte *)(iVar11 + 4);
              *(undefined4 *)(iVar7 + 0x5c) = 0xffffffff;
              iVar16 = (uint)bVar6 * 0x100 + (uint)bVar2;
              *(undefined4 *)(iVar7 + 0x60) = 0xffffffff;
              *(undefined2 *)(iVar7 + 0x52) = 0xfffe;
              iVar13 = iVar16 * 0x1000;
              *(int *)(iVar7 + 0x4c) = iVar13;
              *(uint *)(iVar7 + 0x58) = ((uint)bVar5 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4;
              *(int *)(iVar7 + 0x54) = iVar13;
              *(int *)(iVar7 + 0xa8) = iVar16;
              if ((*(byte *)(iVar11 + 2) & 4) != 0) {
                *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + -0x1000;
              }
              param_1 = param_1 + 4;
              puVar17 = (undefined4 *)(iVar7 + 0xac);
              lVar10 = 5;
              do {
                param_1 = param_1 + 4;
                puVar17 = puVar17 + 1;
                *puVar17 = *(undefined4 *)param_1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
              *(uint *)(iVar7 + 0xc4) =
                   (*(byte *)(iVar11 + 2) & 2) << 0x1d | *(uint *)(iVar7 + 0xc4) & 0xbfffffff;
              if ((uVar12 & 0xffffffff) != 0) {
                *(byte *)(iVar7 + 0x90) = *(byte *)(iVar11 + 2) >> 3 & 1;
              }
              RtlInitializeCriticalSection(iVar7);
              *(int *)(iVar7 + 0x80) = iVar7 + 0x80;
              *(int *)(iVar7 + 0x84) = iVar7 + 0x80;
              *(byte *)(iVar7 + 200) = bVar1;
              *(int *)(iVar7 + 0x30) = iVar7 + 0xd8;
              *(undefined4 *)(iVar7 + 0x34) = *(undefined4 *)(iVar9 + 0x40);
              fn_82A2BB60(iVar7);
              ObReferenceObject(iStack_7c);
              *(int *)(iVar9 + 0x48) = iStack_7c;
              lVar10 = 0;
              *(uint *)(iVar9 + 0x4c) = iVar7 + (uint)bVar1 * 8 + 0xd8;
              *(uint *)(iStack_7c + 0x14) = *(uint *)(iStack_7c + 0x14) & 0xffffffef;
            }
          }
        }
      }
      else {
        lVar10 = -0x3ffffff0;
      }
    }
  }
  else {
    lVar10 = -0x3ffffff3;
  }
  return lVar10;
}

