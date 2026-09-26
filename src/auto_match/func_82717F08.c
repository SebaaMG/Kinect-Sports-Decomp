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
extern unsigned int *auStack_50;
extern int fn_8268CC00();
extern int fn_8268CEC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_82717F08(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = lbl_821AAD20;
  *param_1 = lbl_821AAD20;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  fn_8268CC00(&uStack_40);
  param_4 = param_4 * 4;
  if (*(int *)(*(int *)(param_2 + 0xa4) + param_4) != 0) {
    uStack_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_34 = param_3[3];
    uStack_30 = param_3[4];
    uStack_2c = param_3[5];
    fn_8268CEC0(&uStack_40,(ulonglong)*(uint *)(*(int *)(param_2 + 0xa4) + param_4) + 0x44);
    piVar4 = *(int **)(*(int *)(param_2 + 0xa4) + param_4);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))(auStack_50,piVar4,&uStack_40);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  return param_1;
}

