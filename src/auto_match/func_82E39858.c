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
extern int fn_82C3C340();
extern int fn_82E38B30();
extern int fn_82E38C18();
extern int fn_82E38D58();
extern int fn_82E38DE8();
extern int fn_82E38E78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005CCC;


undefined8
fn_82E39858(ulonglong param_1,int param_2,uint *param_3,int *param_4,undefined4 *param_5,
             short *param_6)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  longlong lVar3;
  short sVar5;
  uint uVar6;
  
  if (((*param_4 != 0) && (param_4[1] != 0)) && (param_4[5] == 100)) {
    return 0;
  }
  uVar2 = fn_82E38B30(*param_3,param_3[1],param_5,param_1,param_4);
  param_6[10] = (short)uVar2;
  param_6[0xb] = 0;
  uVar4 = *param_5;
  *(undefined4 *)(param_6 + 0xc) = uVar4;
  uVar4 = fn_82C3C340(*param_3,uVar4,param_1,uVar2);
  *(undefined4 *)(param_6 + 0xe) = uVar4;
  *(uint *)(param_6 + 0x16) = (uint)*(byte *)(param_5 + 1);
  if ((*param_4 == 0) && (param_4[9] != 0)) {
    param_6[0x14] = 0;
    param_6[0x15] = 1;
    param_6[0x10] = 0;
    param_6[0x11] = 1;
    param_6[0x12] = 0;
    param_6[0x13] = 1;
  }
  else {
    *(uint *)(param_6 + 0x14) = (uint)*(ushort *)((int)param_5 + 5);
    *(uint *)(param_6 + 0x10) = (uint)*(byte *)((int)param_5 + 7);
    if (param_4[2] != 0) {
      uVar4 = fn_82E38DE8(*param_3,param_3[1],param_5,*param_4,param_1,param_6[10]);
      *(undefined4 *)(param_6 + 0x10) = uVar4;
    }
    if (((*param_4 != 0) && (param_4[1] == 0)) && ((param_4[4] != 0 || (param_4[3] != 0)))) {
      uVar6 = *(uint *)(param_6 + 0x10);
      if (4 < uVar6) {
        uVar6 = 4;
      }
      *(uint *)(param_6 + 0x10) = uVar6;
    }
    if ((param_1 & 0xffffffff) < 3) {
      param_6[0x12] = 0;
      param_6[0x13] = 0xf;
    }
    else {
      fVar1 = lbl_82005CCC;
      if ((float)(longlong)(int)(lbl_82005344 / ((float)*(uint *)(param_6 + 0xe) / (float)*param_3))
          - lbl_82002AE0 <= lbl_82005CCC) {
        fVar1 = (float)(longlong)
                       (int)(lbl_82005344 / ((float)*(uint *)(param_6 + 0xe) / (float)*param_3)) -
                lbl_82002AE0;
      }
      *(int *)(param_6 + 0x12) = (int)(longlong)fVar1;
    }
  }
  if ((param_1 & 0xffffffff) == 1) {
    sVar5 = 0x160;
  }
  else if ((param_1 & 0xffffffff) == 2) {
    sVar5 = 0x161;
  }
  else {
    if ((param_1 & 0xffffffff) != 3) {
      return 0;
    }
    if ((param_6[10] & 1U) == 0) {
      *param_6 = (-(ushort)(param_4[7] != 0) & 2) + 0x162;
      goto LAB_82e39ab8;
    }
    sVar5 = 0x163;
  }
  *param_6 = sVar5;
LAB_82e39ab8:
  if (param_2 != 0) {
    *param_6 = *param_6 + 4;
  }
  *(uint *)(param_6 + 2) = *param_3;
  param_6[1] = (short)param_3[1];
  *(uint *)(param_6 + 8) = param_3[2];
  param_6[7] = (ushort)*(byte *)(param_5 + 5);
  lVar3 = fn_82E38D58(*param_3,param_3[1],*(undefined4 *)(param_6 + 0xc),
                        *(undefined4 *)(param_6 + 0x10),param_1,param_6[10]);
  *(int *)(param_6 + 4) = (int)((lVar3 + 7U & 0xffffffff) >> 3);
  sVar5 = fn_82E38C18(*param_3,param_3[1],*(undefined4 *)(param_6 + 0xc),
                        *(undefined4 *)(param_6 + 0x10),param_1,param_6[10]);
  param_6[6] = sVar5;
  if (param_4[7] != 0) {
    sVar5 = (short)*(int *)(param_6 + 0xe) << 2;
    if (*(int *)(param_6 + 0xe) == 0x1000) {
      sVar5 = 0x2000;
    }
    param_6[6] = sVar5;
  }
  *(uint *)(param_6 + 0x18) = *(uint *)((int)param_5 + 0x15) >> 2 & 1;
  if (((*param_4 != 0) && (param_4[1] == 0)) && (param_4[5] == 0)) {
    param_4[5] = param_5[4];
  }
  uVar6 = *(uint *)(param_6 + 0x10);
  *(int *)(param_6 + 0x1a) = param_2;
  trapWord(6,(ulonglong)uVar6,0);
  *(uint *)(param_6 + 0x14) = (*(uint *)(param_6 + 0x14) / uVar6) * uVar6;
  uVar2 = fn_82E38E78(param_1,param_3,param_4,param_5,param_6);
  return uVar2;
}

