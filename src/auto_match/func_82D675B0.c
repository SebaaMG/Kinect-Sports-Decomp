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
#define ZEXT48(x) ((U64)((U32)(x)))
#define TBLr 0
extern unsigned int fStack_30;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D675B0(int *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  float fStack_30;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtSphereSphere";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  uVar2 = storeVectorElementWordIndexed(in_vs43,0,ZEXT48(&stack0x00000000) - 0x30);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x30) = uVar2;
  fVar4 = *(float *)(*param_1 + 0x10) + *(float *)(*param_2 + 0x10);
  if (fStack_30 < fVar4 * fVar4) {
    (**(code **)(*param_4 + 4))(param_4,param_1,param_2);
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return;
}

