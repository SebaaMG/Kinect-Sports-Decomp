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
extern int fn_829D3750();
extern int fn_829D3FE8();
extern int fn_829D4038();
extern int fn_829D55E0();
extern int fn_829D58D8();
extern int fn_82A1F2F8();
extern int fn_82F691F0();
extern unsigned int lbl_832179FC;


undefined8 fn_829D5BF8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar7;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar8;
  longlong lVar9;
  int aiStack_70 [28];
  
  uVar8 = 0;
  iVar6 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar6);
  iVar1 = lbl_832179FC;
  aiStack_70[0] = 0;
  cVar7 = fn_829D3FE8(param_2,lbl_832179FC,aiStack_70);
  if (cVar7 == '\0') {
    uVar8 = 0xffffffff83010008;
  }
  else {
    piVar4 = (int *)(iVar1 + 0x8a0);
    lVar9 = 2;
    do {
      if (*piVar4 != 0) {
        if (-1 < piVar4[1]) {
          uVar3 = fn_829D4038(iVar1,piVar4,1);
          if ((int)uVar3 < 0) {
            uVar8 = uVar3;
          }
        }
      }
      lVar9 = lVar9 + -1;
      piVar4 = piVar4 + 0x16;
    } while (lVar9 != 0);
    if (-1 < (int)uVar8) {
      if (*(char *)(iVar1 + 0x24976) != '\0') {
        uVar8 = 0xffffffff800700aa;
      }
      if (-1 < (int)uVar8) {
        piVar4 = (int *)fn_829D3750(iVar1,param_2);
        iVar2 = aiStack_70[0];
        if (piVar4 == (int *)0x0) {
          uVar8 = 0xffffffff800700aa;
        }
        if (-1 < (int)uVar8) {
          if (param_1 == 2) {
            iVar5 = fn_829D58D8(iVar1,piVar4,aiStack_70[0],param_3,param_4);
            piVar4[4] = iVar5;
            if (iVar5 == -2) {
              uVar8 = 0xffffffff83010006;
            }
          }
          if (-1 < (int)uVar8) {
            *piVar4 = param_1;
            piVar4[3] = (int)param_3;
            piVar4[1] = (int)param_4;
            piVar4[7] = (int)param_2;
            iVar6 = fn_82A1F2F8();
            piVar4[8] = iVar6;
            piVar4[2] = 1;
            iVar6 = fn_829D55E0(iVar1,iVar2);
            piVar4[9] = iVar6;
            piVar4[0xe] = 0;
            piVar4[0xd] = 0;
            piVar4[0x10] = *(uint *)(lbl_832179FC + 0x8f4d4) >> 4 & 2;
            piVar4[0x11] = 0;
            piVar4[0x12] = 0;
            piVar4[0x13] = iVar2;
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(iVar6 * 0x11fb0 + iVar1 + 0x12938,0,0x84);
          }
        }
        if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(piVar4,0,0x58);
        }
      }
    }
  }
  RtlLeaveCriticalSection(iVar6);
  return uVar8;
}

