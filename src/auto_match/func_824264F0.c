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
extern int fn_82672C20();
extern float lbl_821954D4;
extern float lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_824264F0(int param_1,int param_2,byte param_3,undefined4 param_4,undefined4 *param_5,
                  undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  
  *param_6 = 0;
  *param_5 = 0x1e;
  switch(param_4) {
  case 2:
  case 3:
  case 5:
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = -0x7ce1b77c;
    iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954D4);
    break;
  case 4:
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = -0x7ce1b770;
    iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954E8);
    break;
  case 6:
  case 7:
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = -0x7ce1b768;
    iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954E8);
    break;
  case 8:
  case 0xb:
  case 0xd:
    if ((*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x2ba8), *(int *)(iVar1 + 4) != 0)) {
      uStack_30 = 0;
      uStack_2c = 0;
      fn_82273CD8(&uStack_30,3);
      dStack_28 = (double)param_3;
      fn_82672C20(*(undefined4 *)(iVar1 + 4),0xffffffff821ac0a4,&uStack_30,1);
      fn_82273C88(&uStack_30);
    }
    uVar3 = 0x1a;
    goto LAB_82426948;
  case 9:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar2 = -0x7ce1b760;
      iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954D4);
    }
    else if (iVar1 == 2) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar2 = -0x7ce1b754;
      iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954E8);
    }
    else if (iVar1 == 3) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar2 = -0x7ce1b74c;
      iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954E8);
    }
    else {
      if (iVar1 == 0xc) {
        uVar3 = 0x16;
        goto LAB_824268c8;
      }
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar2 = -0x7ce1b744;
      iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954D4);
    }
    uVar3 = *(undefined4 *)(iVar2 + iVar1 * -4);
LAB_824268c8:
    *param_5 = uVar3;
    *param_6 = 1;
    return;
  case 10:
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = -0x7ce1b738;
    iVar1 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954D4);
    break;
  default:
    goto switchD_82426544_caseD_c;
  }
  uVar3 = *(undefined4 *)(iVar2 + iVar1 * -4);
LAB_82426948:
  *param_5 = uVar3;
switchD_82426544_caseD_c:
  return;
}

