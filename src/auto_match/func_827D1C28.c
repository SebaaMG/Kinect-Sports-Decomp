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
extern int fn_827D1B48();
extern unsigned int lbl_827D3AA8;
extern unsigned int lbl_827D3AB0;


undefined8 fn_827D1C28(int param_1,uint param_2,char *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    uVar1 = 0xfffffffffffffffa;
  }
  else if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined **)(param_1 + 0x20) = &lbl_827D3AA8;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined **)(param_1 + 0x24) = &lbl_827D3AB0;
    }
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x2530);
    if (iVar2 == 0) {
      uVar1 = 0xfffffffffffffffc;
    }
    else {
      *(int *)(param_1 + 0x1c) = iVar2;
      if ((int)param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      else {
        *(int *)(iVar2 + 8) = ((int)param_2 >> 4) + 1;
        if ((int)param_2 < 0x30) {
          param_2 = param_2 & 0xf;
        }
      }
      if (((int)param_2 < 8) || (0xf < (int)param_2)) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
        uVar1 = 0xfffffffffffffffe;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        *(uint *)(iVar2 + 0x24) = param_2;
        *(undefined4 *)(iVar2 + 0x34) = 0;
        uVar1 = fn_827D1B48(param_1);
      }
    }
  }
  return uVar1;
}

