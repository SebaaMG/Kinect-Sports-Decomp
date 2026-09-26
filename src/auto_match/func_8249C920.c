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
#define NAN(x) ((x) != (x))
extern int fn_82265140();
extern int fn_8229E090();
extern int fn_8249B5F0();
extern int fn_82F4E1F8();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956DC;
extern unsigned int lbl_821956E0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D76EC;


void fn_8249C920(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 != 2) {
    *(undefined4 *)(param_2 + 0x118) = 1;
    if (param_1 == 0) {
      fn_8249B5F0(param_2,1,0,0);
      fn_82F4E1F8();
      fn_82265140(1);
      fVar7 = lbl_821CC160;
      fVar4 = lbl_821956E0;
      fVar3 = ABS(*(float *)(param_2 + 0xf8));
      if ((lbl_821CC160 < fVar3) && (iVar1 = *(int *)(param_2 + 0xec), fVar3 <= lbl_821956DC)) {
        fVar6 = lbl_821956E0 - fVar3;
        *(float *)(iVar1 + 0xc) = fVar6;
        fVar5 = lbl_831D76EC;
        fVar2 = fVar6 + lbl_821917B4;
        *(float *)(iVar1 + 4) = -fVar3 - fVar4;
        fVar4 = fVar2 - fVar5;
        fVar3 = fVar5;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar6 - fVar5 < fVar7) << 2) |
                      (uint)(NAN(fVar6 - fVar5) || NAN(fVar7)) << 2)) < 0.0) {
          fVar3 = fVar6;
        }
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar4 < fVar7) << 2) | (uint)(NAN(fVar4) || NAN(fVar7)) << 2))
            < 0.0) {
          fVar5 = fVar2;
        }
        *(float *)(iVar1 + 0x1c) = fVar3;
        *(float *)(iVar1 + 0x2c) = fVar5;
      }
    }
    fn_8229E090(*(undefined4 *)(param_2 + 0xb4),0,1);
  }
  *(undefined4 *)(param_2 + 0xb4) = 0;
  (**(code **)(**(int **)(param_2 + 0x4c) + 8))
            (*(int **)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0xb0));
  return;
}

