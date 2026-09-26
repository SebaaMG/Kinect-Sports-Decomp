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
extern unsigned int *auStack_40;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8228ED20();
extern int fn_82290718();
extern int fn_82512A48();
extern int fn_8251FA58();
extern int fn_82550380();
extern int fn_8265CA20();
extern int fn_8266DB08();
extern int fn_8266EC60();
extern unsigned int lbl_821A9C90;
extern unsigned int lbl_832961C8;


void fn_8228EBD8(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [64];
  
  *param_1 = &lbl_821A9C90;
  fn_8228ED20();
  if (param_1[0x19] != 0) {
    fn_82512A48();
    param_1[0x19] = 0;
  }
  if (param_1[0x23] != 0) {
    lbl_832961C8 = lbl_832961C8 + -1;
    param_1[0x23] = 0;
  }
  iVar2 = param_1[0x24];
  if (iVar2 != 0) {
    uVar5 = fn_8266EC60();
    fn_8266DB08(uVar5,iVar2);
    param_1[0x24] = 0;
  }
  cVar1 = *(char *)((int)*(int **)(param_1[10] + 4) + 0x2d);
  piVar4 = *(int **)(param_1[10] + 4);
  while (cVar1 == '\0') {
    fn_82550380(param_1 + 9,piVar4[2]);
    piVar3 = (int *)*piVar4;
    fn_82230300(piVar4 + 3,1,0);
    fn_8265CA20(piVar4);
    piVar4 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x2d);
  }
  *(undefined4 *)(param_1[10] + 4) = param_1[10];
  *(undefined4 *)param_1[10] = param_1[10];
  *(undefined4 *)(param_1[10] + 8) = param_1[10];
  param_1[0xb] = 0;
  if (param_1[0xd] != 0) {
    fn_8251FA58();
  }
  if (param_1[0xe] != 0) {
    fn_8265CA20();
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_82290718(auStack_40,param_1 + 9,*(undefined4 *)param_1[10]);
  fn_8265CA20(param_1[10]);
  if (param_1[6] != 0) {
    fn_822315A0();
  }
  return;
}

