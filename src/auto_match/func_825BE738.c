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
extern int fn_82517978();
extern int fn_8256BF18();
extern int fn_8256C5D0();
extern int fn_82599418();
extern int fn_827DA660();
extern int fn_827DBD80();
extern int fn_827DC520();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_825BE738(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x214);
  for (puVar3 = *(undefined4 **)(param_1 + 0x210); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82517978(&uStack_30,*puVar3,puVar3[1],0);
    uVar2 = fn_8256BF18();
    fn_8256C5D0(uVar2,&uStack_30);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_827DA660(*(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x5c),
                      *(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_827DA660(*(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x60),
                      *(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_827DBD80(*(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x54),
                      *(undefined4 *)(param_1 + 0x10),0,param_1 + 0x68,0);
  }
  fn_82599418();
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_827DC520(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

