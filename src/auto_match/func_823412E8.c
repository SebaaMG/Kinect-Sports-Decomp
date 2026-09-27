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
extern int fn_82338F48();
extern int fn_823414A0();
extern int fn_82F50D88();
extern float lbl_8218E8FC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823412E8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  double dVar3;
  double dVar4;
  undefined1 in_vr0 [16];
  undefined1 in_vr1 [16];
  undefined1 in_vr11 [16];
  undefined1 auVar5 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = 2;
  dVar4 = (double)lbl_821CC160;
  *(float *)(*(int *)(param_1 + 0xc) + 0x14) = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 1;
  dVar3 = (double)lbl_821CA460;
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar1 != 0) {
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128(0xffffffff821ca45c,4);
    vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3); memcpy(auVar5, &_vt0, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar5,3,2);
    fn_82F50D88(dVar3,dVar3,dVar3,*(undefined4 *)(iVar1 + 0x20));
    fn_823414A0(param_1);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  uVar2 = lbl_82193B00;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(iVar1 + 0x1c) =
       (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar3) * lbl_8218E8FC +
       lbl_821916FC;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
  *(float *)(*(int *)(param_1 + 0xc) + 0x24) = (float)dVar4;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28) = 0;
  *(float *)(*(int *)(param_1 + 0xc) + 0x20) = (float)dVar4;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c) = 0;
  *(float *)(*(int *)(param_1 + 0xc) + 0x4c) = (float)dVar4;
  *(float *)(*(int *)(param_1 + 0xc) + 0x38) = (float)dVar4;
  iVar1 = *(int *)(param_1 + 0xc);
  *(float *)(iVar1 + 0x58) = (float)dVar4;
  *(float *)(iVar1 + 0x5c) = (float)dVar4;
  *(undefined4 *)(iVar1 + 0x54) = 1;
  *(float *)(iVar1 + 0x60) = (float)dVar4;
  *(undefined4 *)(iVar1 + 100) = uVar2;
  *(undefined4 *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0x1c) = 0;
  fn_82338F48(**(undefined4 **)(param_1 + 0xc),1);
  return;
}

