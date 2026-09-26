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
extern int fn_8269D300();
extern int fn_8272C1E0();
extern int fn_8272C480();
extern int fn_8272F9D8();
extern int fn_827A4360();
extern int fn_82F6B030();
extern unsigned int lbl_82011630;


void fn_8272FC48(int *param_1,char param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  ushort uVar6;
  double dVar7;
  
  uVar2 = (**(code **)(*param_1 + 0xa8))();
  if (((uVar2 & 3) != 0) && (iVar1 = param_1[0x28], iVar1 != 0)) {
    *(byte *)(iVar1 + 0x13f) = *(byte *)(iVar1 + 0x13f) | 2;
    fn_8272C480(param_1 + 0x36);
    (**(code **)(*param_1 + 0x1ac))
              (param_1,((ulonglong)(uint)param_1[0x33] & 0xfffffffc) + 8,
               *(ushort *)(param_1 + 0x32) >> 0xc & 1,1);
  }
  param_1[0x23] = param_1[0x23] & 0xfffcffff;
  if ((*(ushort *)(param_1 + 0x32) >> 0xe & 1) != 0) {
    *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) & 0xbfff;
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    fn_8272F9D8(param_1,uVar3);
  }
  if (param_2 == '\0') {
    uVar6 = *(ushort *)(param_1 + 0x32) & 0xffbf;
  }
  else {
    fn_8272C1E0(param_1);
    uVar6 = *(ushort *)(param_1 + 0x32) | 0x40;
  }
  *(ushort *)(param_1 + 0x32) = uVar6;
  if (*(int *)(param_1[0x28] + 0x114) != 0) {
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    iVar1 = *(int *)(param_1[0x28] + 0x114);
    cVar5 = fn_8269D300(iVar4,param_1);
    if ((cVar5 != '\0') || ((*(ushort *)(iVar1 + 0x68) >> 5 & 1) != 0)) {
      dVar7 = (double)fn_82F6B030(*(undefined8 *)(iVar4 + 0x130));
      fn_827A4360(dVar7 * lbl_82011630,iVar1);
      if ((*(ushort *)(iVar1 + 0x68) & 1) == 0) {
        *(uint *)(iVar4 + 0xb00) = *(uint *)(iVar4 + 0xb00) | 0x400;
      }
    }
  }
  return;
}

