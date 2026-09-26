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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82C30370();
extern int fn_82C3FB30();
extern int fn_82C420F8();
extern int fn_82C42548();
extern unsigned int lbl_82002AE0;


undefined8 fn_82C39A48(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  short sVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  iVar2 = *param_1;
  uVar6 = 0;
  if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar2 + 0x244)) {
    dVar8 = (double)lbl_82002AE0;
    do {
      iVar7 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar2 + 0x248)) * 0x6f0 +
              *(int *)(iVar2 + 0x140);
      cVar1 = **(char **)(*(int *)(iVar7 + 0x1a8) + 0x10);
      if (*(int *)(iVar7 + 0x28) == 0) {
        if (cVar1 != '\x01') goto LAB_82c39bbc;
        sVar5 = *(short *)(iVar7 + 0x76);
        *(float *)(iVar7 + 0x9c) = (float)dVar8;
        if (0 < sVar5) {
          pfVar4 = (float *)(*(int *)(iVar7 + 0x34) + -4);
          do {
            sVar5 = sVar5 + -1;
            pfVar4 = pfVar4 + 1;
            *pfVar4 = (float)dVar8;
          } while (0 < sVar5);
        }
      }
      else if (cVar1 == '\x01') {
        iVar3 = *(int *)(iVar7 + 0x94);
        if (*(short *)(param_1 + 0x26) < 10) {
          do {
            sVar5 = *(short *)(param_1 + 0x26);
            if (((sVar5 == 0) || (sVar5 == 8)) || (uVar6 = 4, sVar5 == 9)) {
              uVar6 = 3;
            }
            uVar6 = fn_82C30370(param_1 + 0x38,uVar6,auStack_80);
            if ((int)uVar6 < 0) {
              return uVar6;
            }
            *(char *)(*(short *)(param_1 + 0x26) + iVar3) = (char)(((U64)(auStack_80) >> 0) & 0xFFFFFFFF);
            sVar5 = *(short *)(param_1 + 0x26);
            *(short *)(param_1 + 0x26) = sVar5 + 1;
          } while ((short)(sVar5 + 1) < 10);
        }
        fn_82C420F8(iVar2,iVar3,auStack_70,10);
        uVar6 = fn_82C42548(iVar2,auStack_70,iVar7);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
      }
      else {
LAB_82c39bbc:
        if (0 < *(short *)(iVar7 + 0x72)) {
          fn_82C3FB30(iVar2,iVar7);
        }
      }
      *(undefined2 *)(param_1 + 0x26) = 0;
      sVar5 = *(short *)((int)param_1 + 0x96) + 1;
      *(short *)((int)param_1 + 0x96) = sVar5;
    } while (sVar5 < *(short *)(iVar2 + 0x244));
  }
  return uVar6;
}

