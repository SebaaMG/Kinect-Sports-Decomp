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
extern int fn_82F64CE0();


longlong fn_82E25C48(int *param_1,uint *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  code *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar9 = (uint *)((int)param_2 + param_3);
  lVar5 = (**(code **)(*param_1 + 0x70))();
  if (-1 < lVar5) {
    if ((7 < param_3) && (*param_2 == 0x494d4641)) {
      uVar2 = param_2[1];
      if (uVar2 * 0x20 + 8 <= param_3) {
        puVar11 = param_2 + uVar2 * 8 + 2;
        lVar5 = (**(code **)(*param_1 + 0x50))(param_1);
        if ((-1 < lVar5) && (uVar10 = 0, puVar4 = param_2, uVar2 != 0)) {
          do {
            puVar12 = puVar4 + 8;
            sVar1 = *(short *)(puVar4 + 6);
            if (sVar1 == 5) {
              lVar5 = (**(code **)(*param_1 + 0x5c))(*(undefined8 *)puVar12,param_1,puVar4 + 2);
            }
            else {
              if (sVar1 == 0x13) {
                puVar7 = (uint *)*puVar12;
                pcVar8 = *(code **)(*param_1 + 0x54);
              }
              else {
                if (sVar1 == 0x15) {
                  lVar5 = (**(code **)(*param_1 + 0x58))(param_1,puVar4 + 2,*(undefined8 *)puVar12);
                  goto LAB_82e25e40;
                }
                if (sVar1 == 0x1f) {
                  uVar3 = *puVar12;
                  puVar7 = (uint *)(puVar4[9] + (int)param_2);
                  if (((((uVar3 < 2) || ((uVar3 & 1) != 0)) || (puVar7 < puVar11)) ||
                      ((puVar9 < (uint *)(uVar3 + (int)puVar7) ||
                       (*(short *)(((uVar3 >> 1) - 1) * 2 + (int)puVar7) != 0)))) ||
                     (iVar6 = fn_82F64CE0(puVar7), iVar6 != (uVar3 >> 1) - 1)) goto LAB_82e25e5c;
                  pcVar8 = *(code **)(*param_1 + 100);
                }
                else {
                  if (sVar1 != 0x48) {
                    if (((sVar1 == 0x1011) && (puVar11 <= (uint *)(puVar4[9] + (int)param_2))) &&
                       ((uint *)(*puVar12 + (int)(puVar4[9] + (int)param_2)) <= puVar9)) {
                      lVar5 = (**(code **)(*param_1 + 0x68))(param_1,puVar4 + 2);
                      goto LAB_82e25e40;
                    }
                    goto LAB_82e25e5c;
                  }
                  puVar7 = (uint *)(puVar4[9] + (int)param_2);
                  if ((puVar7 < puVar11) || (puVar9 < puVar7 + 4)) goto LAB_82e25e5c;
                  pcVar8 = *(code **)(*param_1 + 0x60);
                }
              }
              lVar5 = (*pcVar8)(param_1,puVar4 + 2,puVar7);
            }
LAB_82e25e40:;} while ((-1 < lVar5) && (uVar10 = uVar10 + 1, puVar4 = puVar12, uVar10 < uVar2));
        }
        goto LAB_82e25e64;
      }
    }
LAB_82e25e5c:
    lVar5 = -0x7ff8ffa9;
  }
LAB_82e25e64:
  (**(code **)(*param_1 + 0x74))(param_1);
  return lVar5;
}

