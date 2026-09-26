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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_30;
extern int fn_82230360();
extern int fn_824C9D48();
extern int fn_824C9FB8();
extern int fn_824CC5A0();
extern int fn_82F63108();
extern unsigned int iStack_34;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_824C9678(double param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float afStack_40 [2];
  float *pfStack_38;
  int iStack_34;
  undefined1 auStack_30 [24];
  
  puVar2 = (undefined4 *)(param_2 + 8);
  if (0xf < *(uint *)(param_2 + 0x1c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  iVar1 = fn_824C9FB8(param_2,puVar2);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x80) != 0) {
      if (*(int *)(iVar1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(iVar1 + 0x80) + 4))(param_1);
    }
    pfStack_38 = afStack_40;
    afStack_40[0] = (float)param_1;
    iStack_34 = param_2;
    fn_824CC5A0(&pfStack_38,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c),
                    CONCAT44(pfStack_38,param_2));
  }
  pfStack_38 = afStack_40;
  afStack_40[0] = (float)param_1;
  iStack_34 = param_2;
  fn_824CC5A0(auStack_30,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68),
                  CONCAT44(pfStack_38,param_2));
  if (*(int *)(param_2 + 0x40) != 0) {
    dVar4 = (double)(float)((double)*(float *)(param_2 + 0x40) - param_1);
    dVar7 = (double)lbl_821CC160;
    dVar6 = -dVar4;
    dVar5 = dVar7;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar6 < dVar7) << 2) | (uint)(NAN(dVar6) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar5 = dVar4;
    }
    *(float *)(param_2 + 0x40) = (float)dVar5;
    if (dVar5 == dVar7) {
      puVar3 = (undefined4 *)(param_2 + 0x24);
      puVar2 = puVar3;
      if (0xf < *(uint *)(param_2 + 0x38)) {
        puVar2 = (undefined4 *)*puVar3;
      }
      fn_824C9D48(param_2,puVar2);
      *(float *)(param_2 + 0x40) = (float)dVar7;
      fn_82230360(puVar3,0xffffffff82196582,0);
    }
  }
  return;
}

