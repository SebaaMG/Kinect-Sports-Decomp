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
extern int fn_82FECFF0();
extern int fn_82FEF800();
extern int fn_83023DA8();
extern int fn_830245B0();
extern int fn_83025190();
extern int fn_830251F0();
extern int fn_83025288();
extern unsigned int lbl_832643D4;
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;
extern unsigned int uRam8326442c;


int fn_82FED848(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 auStack_40 [16];
  
  fn_82FEF800(auStack_40,param_1);
  iVar2 = fn_83025190(auStack_40);
  piVar7 = lbl_832643F4;
  if (lbl_832643F4 != lbl_832643F8) {
    do {
      iVar1 = *piVar7;
      iVar3 = fn_83025190(iVar1 + 0x80);
      if ((iVar3 == iVar2) && (*(int *)(iVar1 + 0x84) != 2)) {
        return iVar1;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != lbl_832643F8);
  }
  if ((*(byte *)(param_1 + 0xda) & 2) == 0) {
    uVar6 = 0x400;
    uVar5 = uRam8326442c;
  }
  else {
    uVar6 = 1;
    uVar5 = 4;
  }
  iVar2 = fn_82FECFF0(auStack_40[0],uVar5,uVar6);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 400) = (*(byte *)(param_1 + 0xda) & 0xfe) << 6 | *(byte *)(iVar2 + 400) & 0x7f
    ;
    if ((*(byte *)(param_1 + 0xda) & 2) == 0) {
      fn_83023DA8(lbl_832643D4,iVar2 + 0x10);
    }
    cVar4 = fn_83025288(auStack_40);
    if ((cVar4 == '\0') && (cVar4 = fn_830251F0(auStack_40), cVar4 == '\0')) {
      fn_830245B0(iVar2 + 0x10,0);
    }
  }
  return iVar2;
}

