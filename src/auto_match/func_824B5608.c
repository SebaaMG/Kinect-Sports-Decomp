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
extern unsigned int *auStack_40;
extern float fRam831c4678;
extern float fRam831c4684;
extern unsigned int fStack_3c;
extern int fn_824B44C8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831c467c;
extern unsigned int uRam831c4680;
extern unsigned int uRam831c4688;
extern unsigned int uRam831c468c;


double fn_824B5608(int param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_40 [4];
  float fStack_3c;
  
  fn_824B44C8(auStack_40,param_2,uRam831c4680,0);
  if (fStack_3c <= fRam831c4678) {
    *(undefined4 *)(param_1 + 0x50) = 0;
LAB_824b566c:
    uVar3 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x50) + 1;
    *(uint *)(param_1 + 0x50) = uVar2;
    if (uVar2 <= uRam831c467c) goto LAB_824b566c;
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  fn_824B44C8(auStack_40,param_2,uRam831c468c,2);
  if (fStack_3c <= fRam831c4684) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x54) + 1;
    *(uint *)(param_1 + 0x54) = uVar2;
    if (uRam831c4688 < uVar2) {
      iVar4 = 1;
      goto LAB_824b56c0;
    }
  }
  iVar4 = 0;
LAB_824b56c0:
  *(int *)(param_1 + 0x4c) = iVar4;
  fVar1 = lbl_821CC160;
  if ((*(int *)(param_1 + 0x48) != 0) && (iVar4 != 0)) {
    fVar1 = lbl_821CA460;
  }
  return (double)fVar1;
}

