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
extern int fn_82F8A9B0();
extern int fn_82F8BB40();
extern unsigned int lbl_82018A5C;
extern unsigned int lbl_827D3AA8;
extern unsigned int lbl_827D3AB0;


undefined8
fn_82F8BCA8(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,char *param_7
             ,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    uVar4 = 0xfffffffffffffffa;
  }
  else {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (*(int *)(param_1 + 0x20) == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined **)(param_1 + 0x20) = &lbl_827D3AA8;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        *(undefined **)(param_1 + 0x24) = &lbl_827D3AB0;
      }
      if (param_2 == -1) {
        param_2 = 6;
      }
      if ((int)param_4 < 0) {
        iVar6 = 0;
        param_4 = -param_4;
      }
      else if (0xf < (int)param_4) {
        iVar6 = 2;
        param_4 = param_4 - 0x10;
      }
      if (((((0 < param_5) && (param_5 < 10)) &&
           ((param_3 == 8 && ((7 < (int)param_4 && ((int)param_4 < 0x10)))))) && (-1 < param_2)) &&
         (((param_2 < 10 && (-1 < param_6)) && (param_6 < 5)))) {
        if (param_4 == 8) {
          param_4 = 9;
        }
        piVar5 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c0);
        if (piVar5 != (int *)0x0) {
          *(int **)(param_1 + 0x1c) = piVar5;
          iVar2 = 1 << (param_4 & 0x3f);
          piVar5[0xb] = iVar2;
          piVar5[0x14] = param_5 + 7U;
          iVar3 = 1 << (param_5 + 7U & 0x3f);
          piVar5[0x13] = iVar3;
          *piVar5 = param_1;
          piVar5[6] = iVar6;
          piVar5[0xc] = param_4;
          piVar5[7] = 0;
          piVar5[0xd] = iVar2 + -1;
          piVar5[0x15] = iVar3 + -1;
          piVar5[0x16] = (param_5 + 9U) / 3;
          iVar6 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar2,2);
          piVar5[0xe] = iVar6;
          iVar6 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar5[0xb],2);
          piVar5[0x10] = iVar6;
          iVar6 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar5[0x13],2);
          piVar5[0x11] = iVar6;
          iVar6 = 1 << (param_5 + 6U & 0x3f);
          piVar5[0x5a7] = iVar6;
          iVar6 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar6,4);
          uVar1 = piVar5[0x5a7];
          piVar5[2] = iVar6;
          piVar5[3] = uVar1 << 2;
          if (((piVar5[0xe] != 0) && (piVar5[0x10] != 0)) && ((piVar5[0x11] != 0 && (iVar6 != 0))))
          {
            piVar5[0x21] = param_2;
            piVar5[0x22] = param_6;
            piVar5[0x5a9] = (uVar1 & 0xfffffffe) + iVar6;
            piVar5[0x5a6] = uVar1 * 3 + iVar6;
            *(undefined1 *)(piVar5 + 9) = 8;
            uVar4 = fn_82F8BB40(param_1);
            return uVar4;
          }
          piVar5[1] = 0x29a;
          *(undefined **)(param_1 + 0x18) = lbl_82018A5C;
          fn_82F8A9B0(param_1);
        }
        return 0xfffffffffffffffc;
      }
    }
    uVar4 = 0xfffffffffffffffe;
  }
  return uVar4;
}

