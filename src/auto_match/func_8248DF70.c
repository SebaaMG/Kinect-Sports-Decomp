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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8248E428();
extern int fn_8248E5A8();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int uStack_40;


undefined8 fn_8248DF70(double param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  float fStack_38;
  
  uStack_40 = 0;
  iStack_3c = 0;
  uVar2 = (**(code **)(**(int **)(param_3 + 0x18) + 4))
                    (auStack_48,*(int **)(param_3 + 0x18),param_3,*(undefined4 *)(param_3 + 0x34),
                     *(undefined4 *)(param_3 + 0x38));
  fn_823F2E20(&uStack_40,uVar2);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fStack_38 = (float)param_1;
  piVar4 = (int *)(param_3 + 8);
  fn_8248E428(piVar4,&uStack_40);
  fVar1 = (float)(param_1 + (double)*(float *)(param_3 + 0x30));
  *(float *)(param_3 + 0x30) = fVar1;
  if (*(int *)(param_3 + 0x60) == 0) {
    while (*(float *)(param_3 + 0x40) < fVar1) {
      *(float *)(param_3 + 0x30) = *(float *)(param_3 + 0x30) - *(float *)(*piVar4 + 8);
      fn_8248E5A8(auStack_50,piVar4);
      fVar1 = *(float *)(param_3 + 0x30);
    }
  }
  else {
    iVar3 = *(int *)(param_3 + 0xc) - *piVar4;
    while (*(uint *)(param_3 + 100) < (uint)(iVar3 / 0xc)) {
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(*piVar4 + 8);
      fn_8248E5A8(auStack_50,piVar4);
      iVar3 = *(int *)(param_3 + 0xc) - *piVar4;
    }
  }
  fn_82365BD8(param_2,&uStack_40);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return param_2;
}

