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
extern int fn_826972E0();
extern int fn_826C1BA0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_3c;


undefined8 fn_82748530(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  ulonglong uVar13;
  uint uStack_3c;
  
  uVar4 = lbl_821AAD20;
  pcVar6 = "redMultiplier";
  pcVar8 = *(char **)*param_3;
  pcVar7 = pcVar8;
  do {
    cVar1 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar1 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    dVar12 = (double)fn_826972E0(param_4,param_2);
    *(float *)(param_1 + 0x20) = (float)dVar12;
  }
  else {
    pcVar6 = "greenMultiplier";
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      dVar12 = (double)fn_826972E0(param_4,param_2);
      *(float *)(param_1 + 0x28) = (float)dVar12;
    }
    else {
      pcVar6 = "blueMultiplier";
      pcVar7 = pcVar8;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        dVar12 = (double)fn_826972E0(param_4,param_2);
        *(float *)(param_1 + 0x30) = (float)dVar12;
      }
      else {
        pcVar6 = "alphaMultiplier";
        pcVar7 = pcVar8;
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          dVar12 = (double)fn_826972E0(param_4,param_2);
          *(float *)(param_1 + 0x38) = (float)dVar12;
        }
        else {
          pcVar6 = "redOffset";
          pcVar7 = pcVar8;
          do {
            cVar1 = *pcVar7;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            dVar12 = (double)fn_826972E0(param_4,param_2);
            *(float *)(param_1 + 0x24) = (float)dVar12;
          }
          else {
            pcVar6 = "greenOffset";
            pcVar7 = pcVar8;
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              dVar12 = (double)fn_826972E0(param_4,param_2);
              *(float *)(param_1 + 0x2c) = (float)dVar12;
            }
            else {
              pcVar6 = "blueOffset";
              pcVar7 = pcVar8;
              do {
                cVar1 = *pcVar7;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                dVar12 = (double)fn_826972E0(param_4,param_2);
                *(float *)(param_1 + 0x34) = (float)dVar12;
              }
              else {
                pcVar6 = "alphaOffset";
                pcVar7 = pcVar8;
                do {
                  cVar1 = *pcVar7;
                  cVar2 = *pcVar6;
                  if (cVar1 == '\0') break;
                  pcVar7 = pcVar7 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 != cVar2) {
                  pcVar7 = "rgb";
                  do {
                    cVar1 = *pcVar8;
                    cVar2 = *pcVar7;
                    if (cVar1 == '\0') break;
                    pcVar8 = pcVar8 + 1;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 == cVar2) {
                    uVar11 = 0;
                    uVar10 = 0;
                    uVar9 = 0;
                    *(undefined4 *)(param_1 + 0x20) = lbl_821AAD20;
                    *(undefined4 *)(param_1 + 0x28) = uVar4;
                    *(undefined4 *)(param_1 + 0x30) = uVar4;
                    uVar13 = fn_826972E0(param_4);
                    if (((uVar13 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
                       (bVar3 = true, (uVar13 & 0xfffffffffffff) == 0)) {
                      bVar3 = false;
                    }
                    if (!bVar3) {
                      dVar12 = (double)fn_826972E0(param_4,param_2);
                      uStack_3c = (uint)(longlong)dVar12;
                      uVar11 = uStack_3c >> 0x10 & 0xff;
                      uVar10 = uStack_3c >> 8 & 0xff;
                      uVar9 = (longlong)dVar12 & 0xff;
                    }
                    *(float *)(param_1 + 0x34) = (float)uVar9;
                    *(float *)(param_1 + 0x24) = (float)uVar11;
                    *(float *)(param_1 + 0x2c) = (float)uVar10;
                    return 1;
                  }
                  uVar5 = fn_826C1BA0(param_1,param_2,param_3,param_4);
                  return uVar5;
                }
                dVar12 = (double)fn_826972E0(param_4,param_2);
                *(float *)(param_1 + 0x3c) = (float)dVar12;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

