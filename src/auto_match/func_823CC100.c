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
extern unsigned int fStack00000028;
extern int fn_82539560();
extern int fn_8254EDB0();
extern int fn_8254F190();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82192330;
extern unsigned int lbl_8219275C;
extern unsigned int lbl_821954B0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DB308;


void fn_823CC100(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float in_register_00010018;
  float fStack00000028;
  
  fVar2 = lbl_821CC160;
  dVar9 = (double)lbl_821CC160;
  fStack00000028 = in_register_00010018;
  if ((*(char *)(param_2 + 0x1d) != '\0') &&
     (fVar1 = (float)param_2[0x1c], param_2[0x1c] = (int)(float)((double)fVar1 - param_1),
     (double)(float)((double)fVar1 - param_1) < dVar9)) {
    param_2[0x1c] = (int)fVar2;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    *(undefined1 *)(param_2 + 0x1d) = 0;
    *(undefined4 *)(*param_2 + 0x1c8) = 1;
    param_2[0x1a] = *(int *)(*param_2 + 0x1b8);
    fn_8254EDB0((double)(float)param_2[0x35],(double)(float)param_2[0x37],*param_2,
                      param_2[0x21]);
  }
  if (*(char *)(param_2 + 0x1b) != '\0') {
    dVar5 = (double)fStack00000028;
    puVar3 = &lbl_821954B0;
    pfVar4 = (float *)&lbl_8219275C;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar5 < dVar9) << 2) | (uint)(NAN(dVar5) || NAN(dVar9)) << 2)) <
        0.0) {
      dVar5 = -dVar5;
    }
    dVar5 = (double)fn_82539560(dVar5,dVar9,(double)lbl_831DB308,(double)lbl_82192330,
                                 (double)lbl_82005748);
    if (param_2[0x1e] != 0) {
      dVar5 = (double)pfVar4[-0x123];
    }
    dVar8 = (double)(float)param_2[0x1a];
    dVar5 = (double)(float)(dVar5 - dVar8);
    if (dVar9 <= dVar5) {
      dVar7 = (double)(float)(dVar5 - (double)(float)(param_1 * (double)pfVar4[0x566]));
      dVar6 = (double)(float)(param_1 * (double)pfVar4[0x566]);
      if (*(float *)((int)puVar3 +
                    ((uint)(byte)((dVar7 < dVar9) << 2) | (uint)(NAN(dVar7) || NAN(dVar9)) << 2) +
                    0x28) < 0.0) {
        dVar6 = dVar5;
      }
    }
    else {
      dVar7 = (double)(float)(dVar5 - (double)(float)(param_1 * (double)*pfVar4));
      dVar6 = dVar5;
      if (*(float *)((int)puVar3 +
                    ((uint)(byte)((dVar7 < dVar9) << 2) | (uint)(NAN(dVar7) || NAN(dVar9)) << 2) +
                    0x28) < 0.0) {
        dVar6 = (double)(float)(param_1 * (double)*pfVar4);
      }
    }
    if ((double)(float)(dVar8 + dVar6) != dVar8) {
      param_2[0x1a] = (int)(float)(dVar8 + dVar6);
      fn_8254F190(*param_2);
    }
  }
  return;
}

