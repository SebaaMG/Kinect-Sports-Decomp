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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82374078();
extern int fn_8238CAC8();
extern int fn_8238CC68();
extern unsigned int lbl_831DCD58;


void fn_823881E8(int param_1,int *param_2,int param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,int param_7)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lStack_20;
  
  if (param_5 < 0x18) {
    if (*(int *)(&lbl_831DCD58 + param_5 * 4) == 0) {
      *(undefined4 *)(param_3 + 0x2e4) = 0;
      *(undefined4 *)(param_3 + 0x2e8) = 0;
      *(undefined4 *)(param_3 + 0x2e0) = 0x18;
      *(undefined4 *)(*param_2 + 0x174) = 1;
      goto LAB_823882c4;
    }
  }
  if (*(int *)(*param_2 + 0x2184) == param_7) {
    uVar3 = fn_82365BD8(&lStack_20,param_2);
    fn_8238CAC8(param_1,uVar3);
    piVar2 = *(int **)**(undefined4 **)(*(int *)(param_1 + 8) + 8);
    uVar1 = (uint)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20);
    lStack_20 = (longlong)(int)uVar1;
    if (0x54 < uVar1) {
      fn_82374078(*(int *)(param_1 + 8),0,0x34);
    }
  }
  else {
    uVar3 = fn_82365BD8(&lStack_20,param_2);
    fn_8238CC68(param_1,uVar3);
  }
LAB_823882c4:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

