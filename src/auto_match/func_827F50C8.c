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
extern int fn_827F3980();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern int fn_827F4868();
extern unsigned int lbl_82196280;
extern unsigned int lbl_82196288;


void fn_827F50C8(double param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar5;
  int iVar4;
  int *piVar6;
  double dVar7;
  
  *(float *)(param_2 + 0x30) = (float)(param_1 + (double)*(float *)(param_2 + 0x30));
  dVar7 = (double)fn_827F4868();
  if (dVar7 == (double)lbl_82196288) {
    bVar1 = *(byte *)(param_2 + 0xdc);
    if ((((bVar1 & 1) == 0) || ((bVar1 & 2) == 0)) && (((bVar1 & 4) == 0 || ((bVar1 & 8) == 0)))) {
      piVar6 = (int *)(param_2 + 0xe0);
LAB_827f5190:
      if (piVar6 != (int *)0x0) {
        sVar5 = fn_827F3C30(param_2);
        if ((sVar5 != 1) || (iVar4 = fn_827F3C48(param_2,0), iVar4 != *piVar6)) {
          uVar2 = *(undefined4 *)(param_2 + 0xe0);
          uVar3 = *(undefined4 *)(param_2 + 0xe4);
          fn_827F3980(param_2,1,piVar6);
          *(undefined4 *)(param_2 + 0xe0) = uVar2;
          *(undefined4 *)(param_2 + 0xe4) = uVar3;
        }
        goto LAB_827f521c;
      }
    }
  }
  else if ((((dVar7 == (double)lbl_82196280) &&
            ((bVar1 = *(byte *)(param_2 + 0xdc), (bVar1 & 1) == 0 || ((bVar1 & 2) != 0)))) &&
           (((bVar1 & 4) == 0 || ((bVar1 & 8) != 0)))) &&
          (((*(int *)(param_2 + 0x40) == 0 && (*(short *)(param_2 + 0x20) == 0)) ||
           (((bVar1 & 0x40) != 0 && (*(short *)(param_2 + 0x20) == 2)))))) {
    piVar6 = (int *)(param_2 + 0xe4);
    goto LAB_827f5190;
  }
  sVar5 = fn_827F3C30(param_2);
  if (sVar5 != 2) {
    uVar2 = *(undefined4 *)(param_2 + 0xe0);
    uVar3 = *(undefined4 *)(param_2 + 0xe4);
    fn_827F3980(param_2,2,param_2 + 0xe0);
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
  }
LAB_827f521c:
  *(byte *)(param_2 + 0xdc) =
       *(byte *)(param_2 + 0xdc) & 0xdf | (dVar7 == (double)*(float *)(param_2 + 0x24)) << 5;
  return;
}

