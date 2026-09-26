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
extern unsigned int *auStack_90;
extern int fn_82A6D090();


undefined8 fn_82A700D0(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  uint auStack_90 [2];
  longlong lStack_88;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xcc) == 1) {
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar5 = *(int *)(param_3 + 0x38);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x148);
    }
    sVar1 = *(short *)(**(short **)(param_1 + 0x248) * 0x6f0 + *(int *)(param_1 + 0x140) + 0x76);
    if (*(short *)(param_1 + 0xca) < sVar1) {
      do {
        uVar3 = fn_82A6D090(param_2 + 0xe0,*(undefined2 *)(param_1 + 0x6e),auStack_90);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar7 = 1 << (*(ushort *)(param_1 + 0x6e) - 1 & 0x3f);
        if ((uVar7 & auStack_90[0]) != 0) {
          auStack_90[0] = auStack_90[0] | ~(uVar7 - 1);
        }
        lStack_88 = (longlong)(int)(auStack_90[0] << 1);
        *(float *)(*(short *)(param_1 + 0xca) * 4 + iVar5) = (float)lStack_88;
        sVar4 = *(short *)(param_1 + 0xca) + 1;
        *(short *)(param_1 + 0xca) = sVar4;
      } while (sVar4 < sVar1);
    }
  }
  else {
    sVar1 = *(short *)(**(short **)(param_1 + 0x248) * 0x6f0 + *(int *)(param_1 + 0x140) + 0x76);
    if (*(char *)(param_2 + 0x91) < '\x01') {
      do {
        if (*(int *)(param_1 + 0x1cc) == 0) {
          iVar5 = *(int *)(param_3 + 0x38);
        }
        else {
          iVar5 = *(int *)(param_1 + 0x148);
        }
        puVar8 = (uint *)((int)*(char *)(param_2 + 0x91) * (int)sVar1 * 4 + iVar5);
        iVar5 = *(int *)(param_2 + 0x48);
        if (iVar5 == 6) {
          if (((*(int *)(param_1 + 0x78) == 1) && (*(int *)(param_1 + 0xa4) == 1)) &&
             (*(short *)(param_2 + 0x94) < *(short *)(param_1 + 0xa8))) {
            do {
              sVar4 = *(short *)(param_1 + 0xac) + *(short *)(param_1 + 0xaa);
              uVar3 = fn_82A6D090(param_2 + 0xe0,sVar4,auStack_90);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              uVar7 = 0x20 - (int)sVar4;
              *(int *)(*(short *)(param_2 + 0x94) * 4 + param_3 + 0x5b0) =
                   (int)(auStack_90[0] << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
              sVar4 = *(short *)(param_2 + 0x94) + 1;
              *(short *)(param_2 + 0x94) = sVar4;
            } while (sVar4 < *(short *)(param_1 + 0xa8));
          }
          *(undefined4 *)(param_2 + 0x48) = 7;
LAB_82a70310:
          uVar3 = fn_82A6D090(param_2 + 0xe0,5,auStack_90);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          if ((int)(uint)*(ushort *)(param_1 + 0x6e) < (int)auStack_90[0]) {
            return 0xffffffff80040002;
          }
          *(undefined4 *)(param_2 + 0x48) = 10;
          *(undefined4 *)(param_2 + 0x50) = 0;
          *(short *)(param_2 + 0xc4) = (short)auStack_90[0];
          *(undefined2 *)(param_1 + 0xca) = 0;
LAB_82a70348:
          if ((*(int *)(param_1 + 0xc0) == 1) && (*(short *)(param_1 + 0xca) == 0)) {
            if (*(int *)(param_2 + 0x50) == 0) {
              uVar3 = fn_82A6D090(param_2 + 0xe0,1,auStack_90);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              *(undefined4 *)(param_2 + 0x50) = 1;
              *(uint *)(param_2 + 0x54) = auStack_90[0];
LAB_82a70398:
              uVar3 = fn_82A6D090(param_2 + 0xe0,*(undefined2 *)(param_1 + 0x6e),auStack_90);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              uVar7 = 1 << (*(ushort *)(param_1 + 0x6e) & 0x3f);
              auStack_90[0] =
                   *(int *)(param_2 + 0x54) << (*(ushort *)(param_1 + 0x6e) & 0x3f) | auStack_90[0];
              if ((uVar7 & auStack_90[0]) != 0) {
                auStack_90[0] = auStack_90[0] | ~(uVar7 - 1);
              }
              *puVar8 = auStack_90[0];
            }
            else if (*(int *)(param_2 + 0x50) == 1) goto LAB_82a70398;
            *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xca) + 1;
          }
          if ((int)*(short *)(param_1 + 0xca) < (int)sVar1) {
            do {
              if (*(int *)(param_2 + 0x4c) == 0) {
                while( true ) {
                  uVar3 = fn_82A6D090(param_2 + 0xe0,1,auStack_90);
                  if ((int)uVar3 < 0) {
                    return uVar3;
                  }
                  if (auStack_90[0] != 1) break;
                  *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + 1;
                }
                *(undefined4 *)(param_2 + 0x4c) = 3;
LAB_82a70458:
                auStack_90[0] = 0;
                uVar3 = fn_82A6D090(param_2 + 0xe0,*(undefined2 *)(param_2 + 0xc4),auStack_90);
                if ((int)uVar3 < 0) {
                  return uVar3;
                }
                *(uint *)(param_2 + 0xd0) = auStack_90[0];
              }
              else if (*(int *)(param_2 + 0x4c) == 3) goto LAB_82a70458;
              puVar8[*(short *)(param_1 + 0xca)] =
                   (*(int *)(param_2 + 200) << (*(ushort *)(param_2 + 0xc4) & 0x3f)) +
                   *(int *)(param_2 + 0xd0);
              *(undefined4 *)(param_2 + 0x4c) = 0;
              *(undefined4 *)(param_2 + 200) = 0;
              *(undefined4 *)(param_2 + 0xd0) = 0;
              sVar4 = *(short *)(param_1 + 0xca) + 1;
              *(short *)(param_1 + 0xca) = sVar4;
            } while (sVar4 < sVar1);
          }
        }
        else {
          if (iVar5 == 7) goto LAB_82a70310;
          if (iVar5 == 10) goto LAB_82a70348;
        }
        bVar2 = *(int *)(param_1 + 0xc0) == 1;
        uVar7 = (uint)bVar2;
        if ((short)(ushort)bVar2 < sVar1) {
          iVar5 = (int)sVar1 - uVar7;
          puVar8 = puVar8 + uVar7;
          do {
            uVar7 = *puVar8;
            if ((uVar7 & 1) == 0) {
              *puVar8 = (int)uVar7 >> 1;
            }
            else {
              *puVar8 = -((int)(uVar7 + 1) >> 1);
            }
            puVar8 = puVar8 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(undefined4 *)(param_2 + 0x48) = 6;
        *(undefined2 *)(param_2 + 0x94) = 0;
        *(undefined2 *)(param_1 + 0xca) = 0;
        *(undefined4 *)(param_2 + 200) = 0;
        *(undefined4 *)(param_2 + 0x4c) = 0;
        *(undefined4 *)(param_2 + 0xd0) = 0;
        cVar6 = *(char *)(param_2 + 0x91) + '\x01';
        *(char *)(param_2 + 0x91) = cVar6;
      } while (cVar6 < '\x01');
    }
  }
  return uVar3;
}

