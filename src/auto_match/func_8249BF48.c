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
extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8225F670();
extern int fn_829C5988();
extern int fn_82E1CAD0();
extern int fn_82E1CC18();
extern int fn_82E1CCA8();
extern int fn_82F4DB78();
extern int fn_82F4E760();
extern int fn_82F4EBC0();
extern int fn_82F4EFF8();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern V16 loadVectorLeftIndexed128();


void fn_8249BF48(int param_1)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  int iVar6;
  char cVar9;
  int iVar7;
  longlong lVar5;
  char *pcVar8;
  uint uVar10;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_vr68;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  uVar4 = ZEXT48(&stack0x00000000);
  iVar7 = 0;
  uVar10 = 0;
  do {
    iVar6 = fn_82F4EBC0(uVar10 & 0xff);
    if ((iVar6 != 0) && (cVar9 = fn_82F4EFF8(), cVar9 != '\0')) {
      iVar7 = iVar7 + 1;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 2);
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar7 = fn_829C5988(uVar4 - 0x48,uVar4 - 0x4c);
    if ((iVar7 < 0) || (bVar3 = true, (uStack_4c & 1) == 0)) {
      bVar3 = false;
    }
    lVar5 = fn_82F4DB78();
    if ((lVar5 == 0 && !bVar3) && (*(int *)(*(int *)(param_1 + 0x110) + 0x34) != 0)) {
      pcVar8 = (char *)fn_8225F670();
      if ((*pcVar8 != '\0') && (cVar9 = fn_82E1CAD0(0x6d), cVar9 != '\0')) {
        fn_82E1CC18(0xffffffff821a6adc,uStack_48);
        fn_82E1CCA8();
      }
      *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x34) = 0;
    }
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x34) = 1;
  fVar1 = *(float *)(param_1 + 0x28);
  *(int *)(param_1 + 0x2c) = iVar7;
  loadVectorLeftIndexed128(in_r0,uVar4 - 0x50);
  pfVar2 = (float *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
  *pfVar2 = in_register_00010440 * in_register_00010000;
  pfVar2[1] = in_register_00010444 * in_ACC;
  pfVar2[2] = in_register_00010448 * in_register_00010008;
  pfVar2[3] = in_vr68 * in_vr0;
  fn_82F4E760((double)fVar1,ABS((double)fStack_38));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = lbl_821CC160;
  return;
}

