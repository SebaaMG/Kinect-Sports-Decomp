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
extern float lbl_8218E8E8;
extern unsigned int lbl_8219572C;
extern unsigned int lbl_82195730;
extern unsigned int lbl_831D11BC;
extern unsigned int lbl_831D11C0;
extern unsigned int lbl_831D11C4;
extern unsigned int lbl_831D11C8;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_28;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_8227F578(int param_1)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)*(undefined8 *)(param_1 + 0x1c))) & ((U64)0xFFFFFFFF)) << 32));
  uStack_40 = ((((U64)(uStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  fVar5 = (*(float *)(param_1 + 0x24) + (((U64)(uStack_40) >> 0) & 0xFFFFFFFF) + (((U64)(uStack_40) >> 0) & 0xFFFFFFFF)) * lbl_8218E8E8;
  uStack_38 = CONCAT44(fVar5,(((U64)(uStack_40) >> 32) & 0xFFFFFFFF));
  uVar8 = uStack_38;
  uStack_40 = CONCAT44(fVar5,*(float *)(param_1 + 0x28) + (((U64)(uStack_40) >> 32) & 0xFFFFFFFF));
  uVar7 = uStack_40;
  fVar5 = lbl_831D11C8;
  fVar6 = lbl_831D11C4;
  if ((*(uint *)(param_1 + 0x6c) & 8) != 0) {
    fVar5 = lbl_831D11C0;
    fVar6 = lbl_831D11BC;
  }
  fVar5 = fVar5 * (float)(longlong)lbl_8326B434 * lbl_82195730;
  fVar1 = *(float *)(param_1 + 0x84);
  fVar6 = fVar6 * (float)(longlong)lbl_8326B430 * lbl_8219572C;
  fVar2 = *(float *)(param_1 + 0x88);
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  uStack_38 = CONCAT44(*(float *)(param_1 + 0x74) - fVar6,*(float *)(param_1 + 0x78) - fVar5);
  uStack_28 = CONCAT44(*(float *)(param_1 + 0x7c) + fVar6,*(float *)(param_1 + 0x80) - fVar5);
  uStack_40 = CONCAT44(*(float *)(param_1 + 0x8c) - fVar6,*(float *)(param_1 + 0x90) + fVar5);
  puVar3[1] = uStack_28;
  puVar3[2] = CONCAT44(fVar1 + fVar6,fVar2 + fVar5);
  puVar3[3] = uStack_40;
  *puVar3 = uStack_38;
  iVar4 = *(int *)(param_1 + 0x70);
  *(undefined8 *)(iVar4 + 0x28) = uVar7;
  *(undefined8 *)(iVar4 + 0x20) = uVar8;
  if (*(float *)(iVar4 + 0x28) < *(float *)(iVar4 + 0x20)) {
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x28);
  }
  if (*(float *)(iVar4 + 0x2c) < *(float *)(iVar4 + 0x24)) {
    *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x2c);
    return;
  }
  return;
}

