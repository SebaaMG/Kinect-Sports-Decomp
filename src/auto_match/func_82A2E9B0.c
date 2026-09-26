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
extern unsigned int *auStack_68;
extern int fn_82A2D578();
extern int fn_82A2E058();
extern int fn_82A2E6A8();
extern int fn_82F68CC0();
extern unsigned int iStack_70;
extern unsigned int uStack_6c;


undefined8 fn_82A2E9B0(int param_1,int param_2,undefined2 *param_3,uint *param_4,int param_5)

{
  short sVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [104];
  
  sVar1 = *(short *)(param_2 + 0x36);
  if (*(char *)(param_1 + 0x90) == '\0') {
    uVar6 = *(uint *)(param_1 + 0x54);
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)*(ushort *)(param_2 + 0x18) << 6;
    uVar6 = (*(ushort *)(param_2 + 0x1a) + 1) * 0x40;
  }
  if ((param_4 != (uint *)0x0) && (uVar9 < *param_4)) {
    uVar9 = *param_4;
  }
  iVar10 = 0;
  iVar11 = 0;
  iStack_70 = 0;
  iVar8 = 0;
  uVar7 = 0xffffffff;
  do {
    if (iVar11 == iVar8) {
      if (iVar10 != 0) {
        uVar5 = iVar10 - *(int *)(param_1 + 0x34);
        iVar10 = 0;
        iStack_70 = 0;
        iVar8 = (((int)uVar5 >> 0xc) + (uint)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar8 + 4) = *(char *)(iVar8 + 4) + -1;
      }
      if (uVar6 <= uVar9) {
        uVar3 = 0xffffffffc0000034;
        goto LAB_82a2eb28;
      }
      uVar3 = fn_82A2E6A8(param_1,param_1 + 0x38,uVar9,&uStack_6c,auStack_68,0);
      if ((int)uVar3 < 0) goto LAB_82a2eb28;
      uVar3 = fn_82A2E058(param_1,uStack_6c,&iStack_70);
      iVar10 = iStack_70;
      if ((int)uVar3 < 0) goto LAB_82a2eb28;
      iVar8 = iStack_70 + 0x1000;
      iVar11 = (uVar9 & 0xfff) + iStack_70;
    }
    bVar2 = *(byte *)(iVar11 + 0x28) & 0x3f;
    if ((*(byte *)(iVar11 + 0x28) & 0x3f) == 0) {
      if (uVar7 == 0xffffffff) {
        uVar7 = uVar9;
      }
    }
    else if (*(short *)(iVar11 + 0x32) == sVar1) {
      if (param_4 == (uint *)0x0) {
        iVar4 = RtlCompareStringN(*(undefined4 *)(param_3 + 2),*param_3,iVar11,bVar2,1);
        if (iVar4 == 0) goto LAB_82a2eb10;
      }
      else {
        if (param_4[2] == 0) {
LAB_82a2eb10:
          fn_82F68CC0(param_5,iVar11,0x40);
          *(uint *)(param_5 + 0x40) = uVar9;
          uVar3 = 0;
LAB_82a2eb28:
          if (iVar10 != 0) {
            uVar6 = iVar10 - *(int *)(param_1 + 0x34);
            iVar10 = (((int)uVar6 >> 0xc) + (uint)((int)uVar6 < 0 && (uVar6 & 0xfff) != 0)) * 8 +
                     *(int *)(param_1 + 0x30);
            *(char *)(iVar10 + 4) = *(char *)(iVar10 + 4) + -1;
          }
          *(uint *)(param_5 + 0x44) = uVar7;
          return uVar3;
        }
        iVar4 = fn_82A2D578(param_4 + 1,iVar11,bVar2,0);
        if (iVar4 != 0) goto LAB_82a2eb10;
      }
    }
    iVar11 = iVar11 + 0x40;
    uVar9 = uVar9 + 0x40;
  } while( true );
}

