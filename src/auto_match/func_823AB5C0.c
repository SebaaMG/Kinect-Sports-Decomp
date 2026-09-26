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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8239FF60();
extern int fn_8256D470();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_821CC160;


undefined8 fn_823AB5C0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  int iStack_58;
  int iStack_54;
  
  iVar2 = (**(code **)(*param_1 + 0x84))(param_1,param_3);
  if (iVar2 == 0) {
LAB_823ab5fc:
    uVar1 = 1;
  }
  else {
    for (puVar4 = (undefined4 *)param_1[0x1b];
        (puVar4 != (undefined4 *)param_1[0x1c] && (*(int *)*puVar4 != param_3)); puVar4 = puVar4 + 2
        ) {
    }
    if (puVar4 != (undefined4 *)param_1[0x1c]) {
      param_1[0x26] = param_1[0x26] + 1;
      if (*(int *)(param_3 + 0x174) != param_1[0x2a] + 1) {
        param_1[0x27] = 0;
      }
      uVar3 = (ulonglong)(uint)param_1[0x27] + 1;
      param_1[0x27] = (int)uVar3;
      dVar6 = (double)lbl_821CC160;
      param_1[0x2a] = *(int *)(param_3 + 0x174);
      if (((double)(float)param_1[0x29] <= dVar6) || ((uVar3 & 0xffffffff) == 0)) {
LAB_823ab6ec:
        uVar1 = 0x1a;
      }
      else {
        if (uVar3 != (longlong)(int)((uVar3 & 0xffffffff) / (ulonglong)(uint)param_1[0x28]) *
                     (longlong)param_1[0x28]) goto LAB_823ab6ec;
        param_1[0x23] = (int)(float)((double)(float)param_1[0x29] + (double)(float)param_1[0x23]);
        dVar5 = (double)(**(code **)(*param_1 + 0xa0))(param_1);
        *(float *)(param_2 + 200) = (float)dVar5;
        *(float *)(param_2 + 0xc4) = (float)dVar5;
        *(undefined4 *)(param_2 + 0xbc) = 1;
        *(undefined4 *)(param_2 + 0xc0) = 0xffffffff;
        uVar1 = 0x1c;
        param_1[0x2b] = 1;
      }
      fn_8239FF60(*(undefined4 *)(param_2 + 0x2dc),uVar1);
      fn_82365BD8(&iStack_58,puVar4);
      fn_8256D470(auStack_60,param_1 + 0x1b,puVar4);
      if ((param_4 == *(int *)(iStack_58 + 4)) || (*(char *)(iStack_58 + 8) == '\0')) {
        if ((double)(float)param_1[0x23] <= dVar6) {
          param_1[1] = 2;
        }
        if (iStack_54 != 0) {
          fn_822315A0();
        }
        goto LAB_823ab5fc;
      }
      *(int *)(iStack_58 + 4) = param_4;
      *(undefined1 *)(iStack_58 + 8) = 0;
      fn_82376640(param_1 + 0x1f,&iStack_58);
      if (iStack_54 != 0) {
        fn_822315A0();
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

