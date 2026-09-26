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
extern unsigned int *auStack_70;
extern int fn_8251F8E0();
extern int fn_8251FBA8();
extern int fn_825200A8();
extern int fn_825200F0();
extern int fn_82554D38();
extern int fn_82554E20();
extern int fn_82554F20();
extern int fn_8265BF48();
extern int fn_827D6968();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83265A24;
extern unsigned int uRam832822a0;


void fn_825F4DE0(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [96];
  
  *(undefined4 *)(param_1 + 0x900) = 0;
  uVar2 = fn_82554D38();
  *(undefined4 *)(param_1 + 0x8dc) = uVar2;
  auStack_70[0] = fn_8265BF48(0xffffffff821ca3fc,0);
  if (((-(ulonglong)uRam832822a0 & ~(ulonglong)uRam832822a0 & 0xffffffff) >> 0x1f == 0) ||
     (iVar3 = fn_825200A8(auStack_70,param_2), iVar1 = lbl_83265988, iVar3 == 0)) {
    fn_82554E20(*(undefined4 *)(param_1 + 0x8dc),param_2);
  }
  else {
    uVar5 = 0;
    fn_825200F0(auStack_60);
    if ((((*(char *)(iVar1 + 0xd8) == '\0') && (*(int *)(iVar1 + 0x124) != -1)) &&
        (*(int *)(iVar1 + 0x120) != -1)) &&
       (cVar4 = fn_827D6968(lbl_83265A24,auStack_60), cVar4 != '\0')) {
      uVar2 = fn_8251F8E0(param_2,lbl_83265988);
      *(undefined4 *)(param_1 + 0x928) = uVar2;
      uVar5 = fn_8251FBA8();
    }
    if (*(int *)(param_1 + 0x928) != 0) {
      fn_82554F20(*(undefined4 *)(param_1 + 0x8dc),*(int *)(param_1 + 0x928),uVar5,param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x91c) = param_3;
  *(undefined4 *)(param_1 + 0x918) = 0;
  *(undefined4 *)(param_1 + 0x8fc) = 1;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x8f8) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x8f4) = uVar2;
  *(undefined4 *)(param_1 + 0x920) = uVar2;
  *(undefined4 *)(param_1 + 0x924) = uVar2;
  return;
}

