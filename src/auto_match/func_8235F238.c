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
extern int fn_82547C80();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8235F238(double param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)(float)((double)*(float *)(param_2 + 0x2be0) - param_1);
  dVar7 = (double)lbl_821CC160;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar8 < dVar7) << 2) | (uint)(NAN(dVar8) || NAN(dVar7)) << 2)) < 0.0)
  {
    dVar8 = dVar7;
  }
  *(float *)(param_2 + 0x2be0) = (float)dVar8;
  if (dVar8 == dVar7) {
    iVar6 = 0;
    piVar5 = (int *)(param_2 + 0x2bc4);
    if (*(int *)(param_2 + 0x2bdc) == 0) {
      do {
        if (*(int *)((*(int *)(param_2 + 0x2b2c) * 0x1a + iVar6 + 0x587) * 4 + param_2) != 0) {
          fn_82547C80((ulonglong)*(uint *)(*piVar5 + 0x8c0) + 0xd0,1,0);
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < 4);
      iVar6 = *(int *)(param_2 + 0x2b2c);
      iVar3 = iVar6 * 0x68 + param_2;
      uVar1 = *(undefined4 *)(iVar3 + 0x1630);
    }
    else {
      do {
        if (*(int *)((*(int *)(param_2 + 0x2b2c) * 0x1a + iVar6 + 0x587) * 4 + param_2) != 0) {
          fn_82547C80((ulonglong)*(uint *)(*piVar5 + 0x8c0) + 0xd0,1,
                       *(uint *)(param_2 + 0x2bd8) & 0xff);
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < 4);
      iVar6 = *(int *)(param_2 + 0x2b2c);
      iVar3 = iVar6 * 0x68 + param_2;
      uVar1 = *(undefined4 *)(iVar3 + 0x162c);
    }
    *(undefined4 *)(param_2 + 0x2be0) = uVar1;
    bVar2 = *(int *)(param_2 + 0x2bdc) == 0;
    *(uint *)(param_2 + 0x2bdc) = (uint)bVar2;
    if ((!bVar2) && ((double)*(float *)(iVar3 + 0x1630) == dVar7)) {
      *(undefined4 *)(param_2 + 0x2bdc) = 1;
    }
    if (*(int *)(param_2 + 0x2bdc) != 0) {
      iVar3 = 1;
      do {
        iVar4 = *(int *)(param_2 + 0x2bd8) % 3 + iVar3;
        if (*(int *)((iVar6 * 0x1a + iVar4 + 0x583) * 4 + param_2) != 0) {
          *(int *)(param_2 + 0x2bd8) = iVar4;
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
  }
  return;
}

