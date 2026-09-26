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
extern int fn_8225B7C8();
extern int fn_82521888();
extern int fn_82522D98();
extern int fn_82522FF0();
extern int fn_828EA610();
extern int fn_82F64840();
extern unsigned int lbl_832767C8;
extern unsigned int lbl_83283E3C;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern U64 storeWordConditionalIndexed();


undefined8 fn_8225AF90(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar4;
  char cVar5;
  undefined8 uVar3;
  uint *puVar6;
  char in_RESERVE;
  double dVar7;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined1 auStack_240 [576];
  
  iVar4 = fn_82521888(lbl_832767C8,param_1);
  if (iVar4 == 0) {
    puVar6 = (uint *)((ulonglong)lbl_832767C8 + 0xa0);
    uVar1 = *puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,(ulonglong)lbl_832767C8 + 0xa0);
      *puVar6 = uVar2;
    }
    if (((((int)uVar1 < 1) && (*(int *)(param_1 + 0x110) != 0)) &&
        (cVar5 = fn_828EA610(param_1), cVar5 == '\0')) && (*(char *)(param_1 + 0xd8) == '\0')) {
      fn_82F64840(auStack_240,0x104,0xffffffff831d096c,0x103);
      uStack_250 = 0;
      uStack_24c = 0;
      uStack_248 = lbl_83283E3C;
      fn_8225B7C8(param_1,&uStack_250,&uStack_24c);
                    /* WARNING: Subroutine does not return */
      fn_82522D98(8);
    }
    uVar3 = 0;
  }
  else {
    dVar7 = (double)fn_82522FF0();
    *(float *)(param_1 + 0x108) = (float)dVar7;
    if (*(int *)(param_1 + 0x114) == 0) {
      *(float *)(param_1 + 0x104) = (float)dVar7;
    }
    *(undefined4 *)(param_1 + 0x114) = 1;
    uVar3 = 1;
  }
  return uVar3;
}

