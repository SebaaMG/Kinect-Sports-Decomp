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
extern int fn_8254EEB8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82380B18(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  fVar1 = param_2[2];
  fVar4 = *param_2 * lbl_82005748;
  *(float *)(param_1 + 0x208) = fVar4;
  dVar7 = (double)lbl_821CC160;
  if (*(int *)(*(int *)(param_1 + 0x1ec) + 4) != 0) {
    dVar6 = (double)(float)((double)(fVar1 * lbl_82192D74) - (double)*(float *)(param_1 + 0xa8));
    dVar5 = (double)*(float *)(param_1 + 0xa8);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar6 < dVar7) << 2) | (uint)(NAN(dVar6) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar5 = (double)(fVar1 * lbl_82192D74);
    }
    fn_8254EEB8((double)param_2[2],dVar5,(double)param_2[1],*(int *)(param_1 + 0x1ec),
                      (int)fVar4);
  }
  fVar1 = param_2[3];
  if (dVar7 < (double)fVar1) {
    iVar2 = *(int *)(param_1 + 0x1ec);
    *(float *)(param_1 + 0x200) = fVar1;
    uVar3 = *(undefined4 *)(param_1 + 0x210);
    if (*(int *)(iVar2 + 4) != 0) {
      *(float *)(iVar2 + 0x1d0) = fVar1;
      *(undefined4 *)(iVar2 + 0x1d8) = lbl_821917B0;
      *(undefined4 *)(iVar2 + 0x1cc) = uVar3;
      *(undefined4 *)(iVar2 + 0x1d4) = 1;
      uVar3 = lbl_821CA460;
      *(undefined4 *)(iVar2 + 0x1dc) = lbl_821CA460;
      *(undefined4 *)(iVar2 + 0x1e0) = uVar3;
    }
  }
  return;
}

