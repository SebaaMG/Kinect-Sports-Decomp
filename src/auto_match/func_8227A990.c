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
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_8226B7E0();
extern int fn_8226C7C0();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_70;


void fn_8227A990(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong alStack_28 [5];
  
  uVar6 = *(undefined8 *)(param_2 + 0x228);
  uStack_48 = ((((U64)(uStack_48)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)uVar6 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)*(undefined8 *)(param_2 + 0x230) >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  dVar7 = (double)lbl_821CC160;
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)*(undefined8 *)(param_2 + 0x230))) & ((U64)0xFFFFFFFF)) << 32));
  uStack_48 = ((((U64)(uStack_48)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar6)) & ((U64)0xFFFFFFFF)) << 32));
  fStack_68 = lbl_821CC160;
  fStack_60 = lbl_821CC160;
  fStack_58 = lbl_821CC160;
  fStack_50 = lbl_821CC160;
  fStack_64 = lbl_821CC160;
  fStack_5c = lbl_821CC160;
  fStack_54 = lbl_821CC160;
  fStack_4c = lbl_821CC160;
  uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + (((U64)(uStack_48) >> 0) & 0xFFFFFFFF),(((U64)(uStack_70) >> 32) & 0xFFFFFFFF) + (((U64)(uStack_48) >> 32) & 0xFFFFFFFF));
  dVar9 = dVar7;
  dVar10 = dVar7;
  dVar11 = dVar7;
  uStack_48 = uVar6;
  uVar6 = fn_8226C7C0(*(undefined4 *)(param_1 + 0xf0),&uStack_48,&fStack_40,0);
  uVar6 = fn_8226C7C0(uVar6,&uStack_70,&uStack_48,0);
  lStack_30 = *(longlong *)(param_2 + 0x238);
  alStack_28[0] = *(longlong *)(param_2 + 0x240);
  uStack_70 = *(undefined8 *)(param_2 + 0x248);
  uStack_38 = *(undefined8 *)(param_2 + 0x250);
  cVar1 = *(char *)(param_2 + 600);
  if (cVar1 == '\0') {
    dVar12 = (double)fStack_3c;
    dVar13 = (double)(((U64)(uStack_48) >> 32) & 0xFFFFFFFF);
  }
  else {
    uVar6 = fn_8226C7C0(uVar6,&uStack_70,&fStack_68,0);
    uVar6 = fn_8226C7C0(uVar6,&uStack_38,&fStack_60,0);
    uVar6 = fn_8226C7C0(uVar6,&lStack_30,&fStack_58,0);
    uVar6 = fn_8226C7C0(uVar6,alStack_28,&fStack_50,0);
    dVar7 = (double)fStack_64;
    dVar12 = (double)fStack_3c;
    dVar9 = (double)fStack_5c;
    dVar8 = (double)lbl_82193AF0;
    if (((double)(float)(dVar7 - dVar8) <= dVar12) && (dVar12 <= (double)(float)(dVar7 + dVar8))) {
      dVar12 = dVar9;
    }
    dVar11 = (double)fStack_54;
    dVar10 = (double)fStack_4c;
    if (((double)(float)(dVar11 - dVar8) <= dVar12) && (dVar12 <= (double)(float)(dVar11 + dVar8)))
    {
      dVar12 = dVar10;
    }
    dVar13 = (double)(((U64)(uStack_48) >> 32) & 0xFFFFFFFF);
    if (((double)(float)(dVar9 - dVar8) <= dVar13) && (dVar13 <= (double)(float)(dVar9 + dVar8))) {
      dVar13 = dVar7;
    }
    if (((double)(float)(dVar10 - dVar8) <= dVar13) && (dVar13 <= (double)(float)(dVar10 + dVar8)))
    {
      dVar13 = dVar11;
    }
  }
  lStack_30 = (longlong)(int)dVar13;
  alStack_28[0] = (longlong)(int)(((U64)(uStack_48) >> 0) & 0xFFFFFFFF);
  fn_8226B7E0(uVar6,(int)fStack_40,(ulonglong)(uint)(int)(((U64)(uStack_48) >> 0) & 0xFFFFFFFF) - 1,(int)dVar12,
                    (ulonglong)(uint)(int)dVar13 - 1,0);
  if (cVar1 == '\0') {
    fn_8226B7E0(*(undefined4 *)(param_1 + 0xf0),0,0,0,0,0);
    lVar5 = 0;
    iVar4 = 0;
    lVar3 = 0;
    iVar2 = 0;
  }
  else {
    lStack_30 = (longlong)(int)fStack_60;
    alStack_28[0] = (longlong)(int)dVar9;
    fn_8226B7E0(*(undefined4 *)(param_1 + 0xf0),(int)fStack_68,
                      (ulonglong)(uint)(int)fStack_60 - 1,(int)dVar7,(ulonglong)(uint)(int)dVar9 - 1
                      ,0);
    iVar2 = (int)fStack_58;
    lStack_30 = (longlong)iVar2;
    iVar4 = (int)dVar11;
    alStack_28[0] = (longlong)(int)dVar10;
    lVar3 = (ulonglong)(uint)(int)fStack_50 - 1;
    lVar5 = (ulonglong)(uint)(int)dVar10 - 1;
  }
  fn_8226B7E0(*(undefined4 *)(param_1 + 0xf0),iVar2,lVar3,iVar4,lVar5,0);
  return;
}

