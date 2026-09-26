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
extern int fn_8267BE38();
extern int fn_827AF558();
extern int fn_827AFDE0();
extern int fn_827AFFE0();
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int iStack_70;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_827B00E8(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined1 uStack_3c;
  
  iVar9 = 0;
  uStack_68 = 0;
  uVar4 = 0;
  iStack_70 = 0;
  uVar10 = param_2[1] + *param_2;
  uStack_6c = 0;
  uVar8 = 0;
  iVar2 = iStack_70;
  iVar3 = iStack_70;
  if (param_1[1] != 0) {
    do {
      uVar5 = *param_2;
      puVar7 = (uint *)(iVar9 + *param_1);
      uVar1 = *puVar7;
      uVar6 = puVar7[1] + uVar1;
      if ((uVar1 < uVar5) && (uVar5 < uVar6)) {
        if (uVar10 < uVar6) {
          uStack_58 = puVar7[2];
          iStack_5c = uVar6 - uVar10;
          uStack_4c = puVar7[5];
          puVar7[1] = uVar5 - uVar1;
          puVar7[4] = uVar5 - uVar1;
          uStack_40 = puVar7[8];
          uStack_3c = *(undefined1 *)(puVar7 + 9);
          uStack_48 = puVar7[6];
          uStack_44 = puVar7[7];
          uStack_60 = uVar10;
          uStack_54 = uVar10;
          iStack_50 = iStack_5c;
          fn_827AF558(&iStack_70,&uStack_60);
        }
        else {
          uVar5 = (puVar7[1] - uVar6) + uVar5;
          puVar7[1] = uVar5;
          puVar7[4] = uVar5;
        }
LAB_827b0228:
        *(undefined1 *)((int)param_1 + 0x19) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
      }
      else if ((uVar5 <= uVar1) && (uVar1 < uVar10)) {
        if (uVar10 < uVar6) {
          uVar6 = *puVar7 + (uVar10 - uVar1);
          uVar5 = puVar7[1] - (uVar10 - uVar1);
          *puVar7 = uVar6;
          puVar7[3] = uVar6;
          puVar7[1] = uVar5;
          puVar7[4] = uVar5;
        }
        else {
          fn_827AFFE0(param_1,uVar8);
          uVar8 = uVar8 - 1;
          iVar9 = iVar9 + -0x28;
        }
        goto LAB_827b0228;
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 0x28;
    } while ((uVar8 & 0xffffffff) < (ulonglong)(uint)param_1[1]);
    uVar4 = (ulonglong)uStack_6c;
    iVar2 = iStack_70;
    iVar3 = iStack_70;
  }
  for (; iVar9 = iStack_70, iStack_70 = iVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
    fn_827AFDE0(param_1,iVar2);
    iVar2 = iVar2 + 0x28;
    iVar3 = iStack_70;
    iStack_70 = iVar9;
  }
  fn_8267BE38(iVar9);
  return;
}

