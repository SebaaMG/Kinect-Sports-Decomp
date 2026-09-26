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
extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_82379660();
extern int fn_8255DA40();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1B64;
extern unsigned int lbl_831D1B68;
extern unsigned int lbl_831D1B6C;
extern unsigned int lbl_831D1B70;
extern unsigned int lbl_831D1B74;


double fn_82379818(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  puVar1 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  fVar3 = lbl_8218EC10;
  puVar1 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  *param_2 = 0;
  *param_3 = 0;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  *param_4 = 0;
  if (fVar3 <= ABS(fStack_38)) {
    dVar5 = (double)((lbl_831D1B74 - fStack_38) / fStack_38);
    if ((double)lbl_821CC160 < dVar5) {
      iVar4 = fn_82379660(dVar5,auStack_40,param_1);
      dVar7 = (double)*(float *)(iVar4 + 4);
      if (*param_1 == 0) {
        dVar6 = (double)lbl_821CA460;
      }
      else {
        dVar6 = (double)fn_8255DA40(*param_1);
      }
      if ((dVar7 < (double)(float)((double)lbl_831D1B6C + dVar6)) ||
         ((double)(float)((double)lbl_831D1B70 + dVar6) <= dVar7)) {
        if ((dVar7 < (double)(float)((double)lbl_831D1B64 - dVar6)) ||
           ((double)(float)((double)lbl_831D1B68 + dVar6) <= dVar7)) {
          if (dVar7 < (double)(float)((double)lbl_831D1B64 - dVar6)) {
            *param_4 = 1;
          }
        }
        else {
          *param_3 = 1;
        }
      }
      else {
        *param_2 = 1;
      }
    }
  }
  else {
    dVar5 = (double)lbl_82192734;
  }
  return dVar5;
}

