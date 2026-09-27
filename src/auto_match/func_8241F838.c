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
extern unsigned int fStack00000020;
extern int fn_82547C80();
extern int fn_82809950();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191208;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832976F4;


void fn_8241F838(int *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float in_register_00010010;
  float fStack00000020;
  
  iVar1 = *param_1;
  fStack00000020 = in_register_00010010;
  dVar6 = (double)fn_82809950((double)lbl_82191208);
  iVar2 = *param_1;
  dVar6 = (double)(float)(dVar6 * (double)*(float *)(iVar1 + 0x29c));
  uVar4 = *(uint *)(iVar2 + 0x670);
  iVar1 = *(int *)(iVar2 + 0x674);
  dVar8 = -(double)(float)((double)((float)(iVar1 - uVar4) * lbl_8218E8E8) * dVar6 -
                          (double)(float)param_1[0x74]);
  uVar5 = (int)((double)(float)((double)fStack00000020 - dVar8) / dVar6) + uVar4;
  if (lbl_832976F4 == 0) {
    if ((int)uVar5 < (int)uVar4) {
      return;
    }
    uVar3 = uVar5;
    if (iVar1 + -1 < (int)uVar5) {
      return;
    }
  }
  else {
    uVar3 = iVar1 - 1;
    if ((int)uVar4 <= (int)uVar5) {
      uVar4 = uVar5;
    }
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
  }
  if (param_1 == *(int **)(iVar2 + 0x2b20)) {
    fn_82547C80((ulonglong)**(uint **)(iVar2 + 0x2bf8) + 0xd0,uVar3 & 0xff,1);
  }
  dVar7 = (double)lbl_821CA460;
  *param_2 = (float)((double)(longlong)(int)uVar3 * dVar6 + dVar8);
  *param_3 = (float)((double)(float)((double)(longlong)(int)uVar3 + dVar7) * dVar6 + dVar8);
  return;
}

