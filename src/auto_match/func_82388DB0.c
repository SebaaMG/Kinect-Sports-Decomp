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
extern int fn_82359698();
extern int fn_82374BB8();
extern int fn_823807F0();
extern int fn_82389A60();
extern int fn_8238A4F0();
extern int fn_8238A5C0();
extern int fn_824BD9D8();
extern int fn_824C97F0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831d2710;


void fn_82388DB0(double param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  dVar11 = (double)lbl_821CC160;
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 8) + 0xd4) + 0x14) + 0x14);
  if (*(int *)(param_2 + 0x48) != 0) {
    dVar8 = (double)(float)((double)*(float *)(param_2 + 0x48) - param_1);
    dVar10 = -dVar8;
    dVar9 = dVar11;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar10 < dVar11) << 2) | (uint)(NAN(dVar10) || NAN(dVar11)) << 2))
        < 0.0) {
      dVar9 = dVar8;
    }
    *(float *)(param_2 + 0x48) = (float)dVar9;
  }
  if ((double)*(float *)(param_2 + 0x48) <= dVar11) {
    iVar6 = fn_8238A4F0(param_2);
    bVar1 = *(int *)(param_2 + 0x44) == 0;
    if (iVar6 == 0) {
      if (!bVar1) {
        fn_823807F0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x664),0xb);
        *(undefined4 *)(param_2 + 0x44) = 0;
        *(undefined4 *)(param_2 + 0x48) = uRam831d2710;
        fn_8238A5C0(param_2,0xffffffff821b0c44);
      }
    }
    else if (bVar1) {
      fn_823807F0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x664),0xc);
      *(undefined4 *)(param_2 + 0x44) = 1;
      *(undefined4 *)(param_2 + 0x48) = uRam831d2710;
      fn_8238A5C0(param_2,0xffffffff821b442c);
      puVar4 = *(undefined4 **)(*(int *)(param_2 + 8) + 0xa8);
      piVar5 = (int *)puVar4[1];
      for (piVar7 = (int *)*puVar4; piVar7 != piVar5; piVar7 = piVar7 + 2) {
        fn_824C97F0(*(undefined4 *)(*piVar7 + 0x28),0xffffffff821b4420);
      }
    }
  }
  fVar2 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  *(float *)(param_2 + 0xc) = fVar2;
  if (((((double)fVar2 <= dVar11) && (iVar3 == 0)) &&
      ((*(int *)(param_2 + 0x24) == 0 ||
       ((*(int *)(param_2 + 0x28) == 0 || (iVar6 = fn_82389A60(param_2), iVar6 != 0)))))) &&
     (*(int *)(*(int *)(*(int *)(param_2 + 8) + 0x90) + 0x508) == 0)) {
    fn_82359698(*(int *)(param_2 + 8),0xc);
  }
  if ((*(int *)(param_2 + 0x18) == 0) &&
     (fVar2 = (float)((double)*(float *)(param_2 + 0x10) - param_1),
     *(float *)(param_2 + 0x10) = fVar2, (double)fVar2 <= dVar11)) {
    *(undefined4 *)(param_2 + 0x18) = 1;
    fn_82374BB8(*(undefined4 *)(param_2 + 8));
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_2 + 0x20) = 1;
  }
  if ((((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x20) != 0)) && (iVar3 == 0)) &&
     (*(int *)(param_2 + 0x1c) != 0)) {
    fn_824BD9D8(*(undefined4 *)(*(int *)(param_2 + 8) + 0x90));
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  fn_82389A60(param_2);
  return;
}

