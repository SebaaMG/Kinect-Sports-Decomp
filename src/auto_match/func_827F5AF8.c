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
extern int fn_827F3A60();
extern int fn_827F3C58();
extern int fn_827F4100();
extern int fn_827F4248();
extern int fn_827F56B0();
extern unsigned int lbl_8201DD78;
extern unsigned int lbl_82196288;


undefined4 * fn_827F5AF8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  fn_827F4248(param_1,param_1 + 0x12,param_2[3],2,param_1 + 0x38);
  *param_1 = &lbl_8201DD78;
  uVar2 = lbl_82196288;
  *(short *)(param_1 + 8) = (short)*param_2 + (short)(*param_2 / 6) * -6;
  *(short *)((int)param_1 + 0x22) = (short)(*param_2 / 6);
  param_1[9] = param_2[5];
  param_1[10] = (float)param_2[5] - (float)param_2[4];
  param_1[0xb] = param_2[6];
  param_1[0xc] = uVar2;
  param_1[0xd] = param_2[0xb];
  param_1[0xe] = param_2[7];
  param_1[0xf] = param_2[10];
  param_1[0x10] = param_2[8];
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 9);
  uVar3 = fn_827F3A60(param_2[2]);
  uVar4 = fn_827F3A60(param_2[1]);
  if (uVar3 < uVar4) {
    iVar1 = param_2[1];
  }
  else {
    iVar1 = param_2[2];
  }
  fn_827F4100(param_1 + 0x12,iVar1);
  *(undefined1 *)(param_1 + 0x37) = 0;
  fn_827F3C58(param_1,0,param_2[1]);
  fn_827F3C58(param_1,1,param_2[2]);
  if (param_1[0x10] != 0) {
    fn_827F56B0(param_1);
  }
  return param_1;
}

