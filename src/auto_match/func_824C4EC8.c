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
extern unsigned int *auStack_240;
extern unsigned int *auStack_440;
extern unsigned int *auStack_640;
extern unsigned int *auStack_840;
extern int fn_82230300();
extern int fn_82297DB0();
extern int fn_8229DCA8();
extern int fn_8229E410();
extern int fn_825129C8();
extern int fn_82528BF8();
extern int fn_82528EE0();
extern int fn_8265C9E0();
extern int iRam8327674c;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_83276730;


void fn_824C4EC8(int param_1,undefined8 param_2,undefined4 *param_3,char param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_840 [512];
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [512];
  undefined1 auStack_240 [576];
  
  puVar2 = param_3;
  if (0xf < (uint)param_3[5]) {
    puVar2 = (undefined4 *)*param_3;
  }
  fn_82528BF8(lbl_83276730,puVar2,auStack_440,0x100,0,1);
  puVar2 = param_6;
  if (7 < (uint)param_6[5]) {
    puVar2 = (undefined4 *)*param_6;
  }
  puVar3 = param_5;
  if (7 < (uint)param_5[5]) {
    puVar3 = (undefined4 *)*param_5;
  }
  fn_82528EE0(auStack_240,0x100,auStack_440,puVar3,puVar2);
  fn_82528BF8(lbl_83276730,0xffffffff821a9468,auStack_640,0x100,0,1);
  if (param_4 != '\0') {
    fn_82528BF8(lbl_83276730,0xffffffff821a9464,auStack_840,0x100,0,1);
  }
  iVar1 = fn_8265C9E0(0x434);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined ***)(iVar1 + 0x41c) = &lbl_821A8C90;
    fn_8229DCA8(iVar1,0xffffffff820e975c,auStack_240,auStack_640,
                      -(uint)(param_4 != '\0') & (uint)auStack_840,0xffffffff824c4408,param_1,1);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  fn_8229E410();
  if (iRam8327674c == 0) {
    iRam8327674c = fn_825129C8(0);
  }
  fn_82230300(param_2,1,0);
  fn_82230300(param_3,1,0);
  fn_82297DB0(param_5,1,0);
  fn_82297DB0(param_6,1,0);
  return;
}

