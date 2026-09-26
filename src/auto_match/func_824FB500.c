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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern float fRam831d4a30;
extern float fRam831d4a34;
extern float fRam831d4a38;
extern float fRam831d4a3c;
extern int fn_82274A10();
extern int fn_8227E820();
extern int fn_8227F1A8();
extern int fn_8227F578();
extern int fn_8227F7B8();
extern int fn_824BF8A8();
extern int fn_8265C9E0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int uRam831d4a28;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


int * fn_824FB500(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char acStack_88 [64];
  char acStack_48 [72];
  
  param_1[0x28] = 0;
  piVar11 = param_1 + 10;
  piVar6 = param_1;
  do {
    if (piVar11 <= piVar6) break;
    cVar1 = *(char *)((param_2 - (int)param_1) + (int)piVar6);
    *(char *)piVar6 = cVar1;
    piVar6 = (int *)((int)piVar6 + 1);
  } while (cVar1 != '\0');
  if (piVar6 == piVar11) {
    *(char *)((int)piVar6 + -1) = '\0';
  }
  uVar3 = fn_82274A10(1,1,0,0);
  param_1[0x28] = (int)uVar3;
  fn_8227E820(uVar3,1,0);
  iVar10 = 0;
  iVar9 = (int)param_3 + (4 - (int)acStack_88);
  uStack_b0 = uRam831d4a28;
  do {
    iVar2 = *param_3;
    *piVar11 = iVar2;
    if ((piVar11 != (int *)0x0) && (iVar2 != 0)) {
      uStack_90 = CONCAT44(fRam831d4a30,fRam831d4a34);
      pcVar7 = acStack_88;
      uStack_98 = uStack_b0;
      do {
        if (acStack_48 <= pcVar7) break;
        cVar1 = pcVar7[iVar9];
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (pcVar7 == acStack_48) {
        pcVar7[-1] = '\0';
      }
      iVar2 = param_1[0x28];
      iStack_a0 = iVar10;
      iStack_9c = iVar10;
      uVar4 = fn_8265C9E0(0xf8);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_8227F1A8(uVar4,&iStack_a0,param_1);
      }
      iVar5 = fn_8227F7B8(uVar3,*(undefined4 *)(iVar2 + 0x30));
      if ((*(int *)(iVar2 + 4) == 0) && (*(int *)(iVar2 + 0x48) != 0)) {
        if ((*(uint *)(iVar5 + 0x6c) & 8) == 0) {
          uVar8 = *(uint *)(iVar5 + 0x6c) | 8;
LAB_824fb66c:
          *(uint *)(iVar5 + 0x6c) = uVar8;
          iVar5 = fn_8227F578();
        }
      }
      else if ((*(uint *)(iVar5 + 0x6c) & 8) != 0) {
        uVar8 = *(uint *)(iVar5 + 0x6c) & 0xfffffff7;
        goto LAB_824fb66c;
      }
      uStack_a8 = 0;
      iStack_a4 = iVar5;
      fn_824BF8A8(iVar2 + 0x1c,&uStack_a8);
      uStack_b0 = CONCAT44(fRam831d4a38 * fRam831d4a30 + (((U64)(uStack_b0) >> 0) & 0xFFFFFFFF),
                           fRam831d4a3c * fRam831d4a34 + (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF));
    }
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 1;
    param_3 = param_3 + 0xb;
    iVar9 = iVar9 + 0x2c;
    if (0x1d < iVar10) {
      return param_1;
    }
  } while( true );
}

