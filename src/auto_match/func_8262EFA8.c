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
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_827D96A0();


undefined8 fn_8262EFA8(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar3;
  uint uVar4;
  undefined8 uVar2;
  int *piVar5;
  int iVar6;
  
  uVar3 = fn_827D96A0((ulonglong)*(uint *)(param_1 + 0xc) + 0x68);
  piVar1 = *(int **)(param_1 + 0x3c);
  for (piVar5 = *(int **)(param_1 + 0x38); piVar5 != piVar1; piVar5 = piVar5 + 1) {
    iVar6 = *piVar5;
    uVar4 = fn_827D96A0(iVar6);
    if ((uVar4 & 0xffff) == uVar3) goto LAB_8262f000;
  }
  iVar6 = 0;
LAB_8262f000:
  if (iVar6 == 0) {
    fn_827D5078(*param_3,0);
    fn_827D5090(*param_3,0);
    fn_827D50A8(*param_3,0);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 2;
  }
  else {
    fn_827D5078(*param_3,*(undefined4 *)(iVar6 + 0x18));
    fn_827D5090(*param_3,*(undefined4 *)(iVar6 + 0x1c));
    fn_827D50A8(*param_3,0);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

