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
extern int fn_82A1DDC0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82A4C548(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  double dVar4;
  float afStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float *pfStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3[1] != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x28);
    afStack_60[0] = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x28) = *param_3;
    fVar2 = lbl_82002AE0;
    uVar1 = *param_5;
    dVar4 = (double)lbl_82002AE0;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    if ((double)afStack_60[0] == dVar4) {
      if (*(int *)(param_1 + 0x3c) == 7) {
        fn_82A1DDC0(uVar1,*puVar3,*(int *)(param_1 + 0x40) << 2);
      }
      else {
        uStack_38 = *(undefined4 *)(param_1 + 0x48);
        uStack_50 = *puVar3;
        pfStack_48 = afStack_60;
        afStack_60[0] = fVar2;
        uStack_44 = 0;
        uStack_30 = 0;
        uStack_2c = 1;
        uStack_4c = uVar1;
        iStack_40 = *(int *)(param_1 + 0x3c);
        iStack_3c = *(int *)(param_1 + 0x40);
        uStack_34 = uStack_38;
        (**(code **)(param_1 + 0x54))(&uStack_50);
      }
      if ((ulonglong)*(uint *)(param_1 + 0x44) != 0) {
        fn_82F68CC0(*(undefined4 *)(param_1 + 0x30),
                     ((ulonglong)*(uint *)(param_1 + 0x44) - (ulonglong)*(uint *)(param_1 + 0x48) &
                     0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x2c),
                     *(uint *)(param_1 + 0x48) << 2);
        fn_82F68CC0(((ulonglong)*(uint *)(param_1 + 0x48) & 0x3fffffff) * 4 +
                     (ulonglong)*(uint *)(param_1 + 0x30),
                     ((ulonglong)*(uint *)(param_1 + 0x44) - (ulonglong)*(uint *)(param_1 + 0x48) &
                     0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x2c));
      }
    }
    else {
      (**(code **)(param_1 + 0x50))(puVar3);
      if (((double)*(float *)(param_1 + 0x5c) == dVar4) &&
         ((double)*(float *)(param_1 + 0x60) == dVar4)) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x34) = lbl_821AAD20;
      }
    }
    trapWord(6,(ulonglong)*(uint *)(param_1 + 0x48),0);
    param_5[2] = *(uint *)(param_1 + 0x44) / *(uint *)(param_1 + 0x48);
    param_5[1] = param_3[1];
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(param_1 + 0x30),0,(ulonglong)*(uint *)(param_1 + 0x48) * 0xc);
}

