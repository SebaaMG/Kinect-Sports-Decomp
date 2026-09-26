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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822775F8();
extern int fn_8227D498();
extern int fn_8227D6A8();
extern int fn_82672C20();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_822773C8(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  
  bVar6 = false;
  uVar3 = fn_8227D498();
  lVar4 = fn_8227D6A8(uVar3,param_2,*param_1,1);
  bVar5 = lVar4 != 0;
  if (bVar5) {
    fVar1 = (float)(longlong)lbl_8326B430 * lbl_821917D4;
    fVar2 = (float)(longlong)lbl_8326B434 * lbl_821917D4;
    if ((((*param_2 + (float)param_1[0xb] < -fVar1) ||
         ((float)(longlong)lbl_8326B430 + fVar1 <= *param_2 + (float)param_1[0xb])) ||
        ((float)param_1[0xc] + param_2[1] < -fVar2)) ||
       ((float)(longlong)lbl_8326B434 + fVar2 <= (float)param_1[0xc] + param_2[1])) {
      bVar5 = false;
    }
  }
  if (!bVar5) {
    lVar4 = fn_8227D6A8(uVar3,param_2,*param_1,0);
    bVar6 = lVar4 != 0;
    if (bVar6) {
      fVar1 = (float)(longlong)lbl_8326B430 * lbl_821917D4;
      fVar2 = (float)(longlong)lbl_8326B434 * lbl_821917D4;
      if (((*param_2 + (float)param_1[0xb] < -fVar1) ||
          ((float)(longlong)lbl_8326B430 + fVar1 <= *param_2 + (float)param_1[0xb])) ||
         (((float)param_1[0xc] + param_2[1] < -fVar2 ||
          ((float)(longlong)lbl_8326B434 + fVar2 <= (float)param_1[0xc] + param_2[1])))) {
        bVar6 = false;
      }
    }
  }
  if ((lbl_83265A58 == 1) || (lbl_83265A5C != 0)) {
    bVar5 = false;
    bVar6 = false;
  }
  uStack_60 = 0;
  uStack_5c = 0;
  fn_82273CD8(&uStack_60,2);
  uStack_58 = !bVar6;
  fn_82672C20(param_1[1],0xffffffff821a8140,&uStack_60,1);
  if (!bVar6) {
    uVar3 = 0;
    if (!bVar5) goto LAB_822775bc;
  }
  uVar3 = 1;
LAB_822775bc:
  fn_822775F8(param_1,uVar3,param_2);
  if ((bVar6) || (uVar3 = 0, bVar5)) {
    uVar3 = 1;
  }
  fn_82273C88(&uStack_60);
  return uVar3;
}

