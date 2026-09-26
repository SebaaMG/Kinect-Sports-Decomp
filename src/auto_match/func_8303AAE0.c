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
extern unsigned int fStack_70;
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8303A888();
extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int lbl_8201546C;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_8303AAE0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  
  puVar3 = (undefined4 *)fn_82F6A548();
  uStack_6c = *puVar3;
  iVar1 = (int)param_2;
  uVar7 = (ulonglong)*(ushort *)((int)puVar3 + 0xe);
  dVar10 = (double)*(float *)(iVar1 + 0x10);
  dVar9 = (double)(float)((double)*(float *)(iVar1 + 0x14) - dVar10);
  puVar5 = (undefined4 *)param_3;
  if (uVar7 != 0) {
    dVar11 = (double)lbl_821AAD20;
    dVar12 = (double)lbl_8201546C;
    do {
      uVar8 = 0x80;
      if ((uVar7 & 0xffffffff) < 0x81) {
        uVar8 = uVar7;
      }
      if (*(uint *)(iVar1 + 0x18) < 8) {
        uVar6 = *(uint *)(iVar1 + 0x18) + 1;
        fStack_70 = (float)dVar11;
        uStack_68 = (ulonglong)uVar6;
        *(uint *)(iVar1 + 0x18) = uVar6;
        *(float *)(iVar1 + 0x10) =
             (float)((double)(float)((double)uStack_68 * dVar9) * dVar12 + dVar10);
        puVar4 = (undefined4 *)fn_8303A930(puVar3,*(undefined1 *)(iVar1 + 0x20),&fStack_70);
        if (((uint)puVar4 & 0xff) == 0) {
          puVar3 = (undefined4 *)fn_8303AA38((double)fStack_70,puVar4,param_2);
        }
        else {
          puVar3 = puVar4;
          if (*(char *)(iVar1 + 0x21) == '\0') {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
        }
        *(char *)(iVar1 + 0x21) = (char)puVar4;
      }
      if (*(char *)(iVar1 + 0x21) == '\0') {
        puVar3 = (undefined4 *)fn_8303A888(param_3,param_2,&uStack_6c,uVar8);
      }
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
  }
  fVar2 = lbl_8217BA98;
  puVar5[2] = ((float)puVar5[2] + lbl_8217BA98) - lbl_8217BA98;
  puVar5[3] = ((float)puVar5[3] + fVar2) - fVar2;
  fn_82F6A594();
  return;
}

