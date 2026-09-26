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
extern int fn_824BF8A8();
extern unsigned int uStack_6c;


void fn_823A0D98(uint *param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  char *pcStack_70;
  undefined4 uStack_6c;
  
  if ((*param_1 & 0x1000) != 0) {
    uStack_6c = 7;
    pcStack_70 = "showvideo";
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((*param_1 & 4) != 0) {
    pcStack_70 = "getready";
    param_1[4] = 1;
    uStack_6c = 7;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((*param_1 & 1) != 0) {
    pcStack_70 = "serve";
    uStack_6c = 4;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if (((*param_1 & 0x20) != 0) && (param_1[4] != 0)) {
    param_1[4] = 0;
    uStack_6c = 9;
    pcStack_70 = "direction";
    fn_824BF8A8(param_3,&pcStack_70);
    pcStack_70 = "direction";
    uStack_6c = 7;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((param_1[3] == 0) && ((*param_1 & 0x20) != 0)) {
    param_1[3] = 1;
    uStack_6c = 9;
    pcStack_70 = "firstserve";
    fn_824BF8A8(param_3,&pcStack_70);
    pcStack_70 = "firstserve";
    uStack_6c = 7;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((*param_1 & 8) != 0) {
    pcStack_70 = "pickuppaddle";
    uStack_6c = 7;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((*param_1 & 0x10) != 0) {
    pcStack_70 = "pickuppaddle";
    uStack_6c = 8;
    fn_824BF8A8(param_3,&pcStack_70);
    pcStack_70 = "getready";
    uStack_6c = 6;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((*param_1 & 2) != 0) {
    pcStack_70 = "serve";
    uStack_6c = 5;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((*(int *)(param_2 + 0x1f8) == 0) ||
     (bVar1 = true, *(int *)(*(int *)(param_2 + 0x1f8) + 0x24) == 0)) {
    bVar1 = false;
  }
  if (((*param_1 & 0x20) != 0) && (bVar1)) {
    pcStack_70 = "serve";
    uStack_6c = 7;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if (((*param_1 & 0x40) != 0) && (bVar1)) {
    pcStack_70 = "serve";
    uStack_6c = 8;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if (*(int **)(param_2 + 0x2e0) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_2 + 0x2e0) + 0x3c))();
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
    param_1[1] = 0;
  }
  if ((((*param_1 & 0x80) != 0) && ((*param_1 & 0x800) != 0)) && ((iVar2 == 1 || (iVar2 == 2)))) {
    pcStack_70 = "return";
    uStack_6c = 8;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((*param_1 & 0x200) != 0) {
    pcStack_70 = "return";
    param_1[1] = 1;
    uStack_6c = 9;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  if ((param_1[1] != 0) && ((*param_1 & 0x400) != 0)) {
    pcStack_70 = "return";
    param_1[2] = 1;
    uStack_6c = 7;
    fn_824BF8A8(param_3,&pcStack_70);
  }
  *param_1 = 0;
  return;
}

