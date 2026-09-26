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
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82637840();
extern int fn_82639DB0();
extern int fn_8263A1B8();
extern int fn_8263E9F0();
extern int fn_82645110();
extern int fn_82647258();
extern int fn_82647C20();
extern int fn_82648160();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CEA40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82648988(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  fn_82F68CC0(&fStack_40,param_1 + 0x3218,0x1c);
  uStack_50 = *(undefined4 *)(param_1 + 0x3234);
  uStack_4c = *(undefined4 *)(param_1 + 0x3238);
  uStack_48 = *(undefined4 *)(param_1 + 0x323c);
  uStack_44 = *(undefined4 *)(param_1 + 0x3240);
  fn_8263A1B8(param_1,0,*(undefined4 *)(param_1 + 0x3ac4));
  fn_82647C20(param_1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x3ac0);
  dVar4 = (double)lbl_821CA460;
  puVar2 = (undefined4 *)((uint)(&lbl_821CEA40 + in_r0) & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  fn_8263E9F0(dVar4,param_1,0,0,0,0,uVar1,0,0);
  if (((*(byte *)(param_1 + 0x2ac0) & 0x80) != 0) || ((*(byte *)(param_1 + 0x2ac0) & 0x40) != 0)) {
    fn_82647258(param_1);
  }
  fn_82645110(param_1);
  fn_82637840((double)fStack_40,(double)fStack_3c,(double)fStack_38,(double)fStack_34,
                    (double)fStack_30,(double)fStack_2c,param_1);
  fn_82639DB0(param_1,&uStack_50);
  fn_82648160(param_1,*(undefined4 *)(param_1 + 0x3ac0),param_1 + 0x361c);
  return;
}

