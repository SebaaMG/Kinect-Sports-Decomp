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
extern int fn_822ABA88();
extern int fn_8239C118();
extern int fn_8239FF60();
extern int fn_82508078();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8239B7C8(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
  iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_4);
  if ((*(int *)(param_2 + 0x188) != 0) &&
     (fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b4e90,0),
     *(int *)(iVar2 + 0x24) != 0)) {
    fn_8239FF60(*(undefined4 *)(param_1 + 0x2dc),0x17);
  }
  if ((*(int *)(param_2 + 0x184) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    uVar4 = (longlong)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (uint)uVar4;
    uVar4 = -(ulonglong)((-uVar4 & ~uVar4 & 0xffffffff) >> 0x1f != 0);
    fn_8239C118(param_1,((uVar4 & 0xfffffffe) << 0x20 | uVar4 & 0xfffffff6) + 0x20);
    fn_8239FF60(*(undefined4 *)(param_1 + 0x2dc),0x19);
    if ((*(int *)(param_1 + 0x2d0) == 0) && (*(int *)(param_1 + 0x178) == 0)) {
      fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b4d18,0);
    }
  }
  uVar4 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
  if ((((ulonglong)*(uint *)(param_1 + 0x2d4) + (ulonglong)*(uint *)(param_1 + 0x278) & 0xffffffff)
       < (uVar4 & 0xffffffff)) && (*(int *)(param_1 + 0x178) == 0)) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b4f00,0);
  }
  if (*(uint *)(param_1 + 0x274) < uVar4) {
    if (*(float *)(param_2 + 0x178) <= *(float *)(param_1 + 0x280)) {
      if ((*(float *)(param_2 + 0x178) < *(float *)(param_1 + 0x27c)) &&
         (*(int *)(param_1 + 0x178) == 0)) {
        uVar3 = 0xffffffff821b4e1c;
        goto code_r0x8239b990;
      }
    }
    else if (*(int *)(param_1 + 0x178) == 0) {
      uVar3 = 0xffffffff821b4e08;
code_r0x8239b990:
      fn_82508078(*(undefined4 *)(param_1 + 0xa4),uVar3,0);
    }
  }
  if ((*(float *)(param_1 + 0x294) < ABS(*(float *)(iVar2 + 0x260))) &&
     (*(int *)(param_1 + 0x178) == 0)) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b4ee4,0);
  }
  if (*(float *)(param_2 + 0x268) <= lbl_821CC160) {
    if (lbl_821CC160 <= *(float *)(param_2 + 0x268)) goto code_r0x8239ba4c;
    uVar4 = (longlong)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (uint)uVar4;
    uVar4 = -(ulonglong)((-uVar4 & ~uVar4 & 0xffffffff) >> 0x1f != 0);
    uVar4 = uVar4 << 0x20 | uVar4 & 0xfffffffd;
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar4 = (ulonglong)(-1 < (int)(-lbl_83265A28 & ~lbl_83265A28)) ^ 1;
  }
  fn_8239C118(param_1,uVar4 + 0x1e);
code_r0x8239ba4c:
  if (*(int *)(iVar2 + 0x248) != 0) {
    if (*(int *)(iVar2 + 0x244) == 0) {
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
      uVar3 = 0xffffffff821b4e78;
    }
    else {
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
      uVar3 = 0xffffffff821b4e48;
    }
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),uVar3,0);
  }
  return;
}

