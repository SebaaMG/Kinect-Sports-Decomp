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
extern int fn_8305D5F0();
extern int fn_8305D5F8();
extern int fn_8305D618();
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305F320();
extern int fn_83065C58();
extern int fn_83065E60();
extern int fn_83066810();
extern int fn_83068418();
extern int fn_8306AB38();


void fn_83063228(int param_1,int param_2,longlong param_3)

{
  char cVar4;
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cStack_50;
  
  cVar4 = fn_83068418(param_2);
  if (cVar4 != '\0') {
    fn_8306AB38(param_2 + 0x58,param_3);
    return;
  }
  lVar7 = param_3 + 0x10;
  iVar5 = param_2 + 0x10;
  iVar3 = fn_83066810((double)*(float *)(param_1 + 0x30),iVar5,lVar7);
  if (cStack_50 == '\0') {
    if (iVar3 == 1) {
      iVar3 = *(int *)(param_2 + 0x30);
    }
    else {
      if (iVar3 != 2) {
        if (*(int *)(param_2 + 0x34) != 0) {
          if (*(int *)(param_2 + 0x30) == 0) {
            fn_8305F320((double)*(float *)(param_1 + 0x30),lVar7,iVar5,lVar7,0);
            lVar1 = param_3;
          }
          else {
            lVar1 = fn_83065E60();
            lVar6 = lVar1 + 0x10;
            fn_8305D5F0(lVar6);
            uVar2 = fn_8305D7C8(lVar7);
            fn_8305E0F8(lVar6,uVar2);
            uVar2 = fn_8305D618(lVar7);
            fn_8305D5F8(lVar6,uVar2);
            fn_8305F320((double)*(float *)(param_1 + 0x30),lVar7,iVar5,lVar6,lVar7);
            fn_83063228(param_1,*(undefined4 *)(param_2 + 0x30),param_3);
          }
          goto LAB_830633f4;
        }
        fn_8305F320((double)*(float *)(param_1 + 0x30),lVar7,iVar5,0,lVar7);
        goto LAB_83063294;
      }
      iVar3 = *(int *)(param_2 + 0x34);
    }
    if (iVar3 == 0) {
      fn_83065C58(param_3);
      return;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x34);
    if (iVar3 != 0) {
      if (*(int *)(param_2 + 0x30) == 0) goto LAB_830633f8;
      lVar1 = fn_83065E60();
      lVar6 = lVar1 + 0x10;
      fn_8305D5F0(lVar6);
      uVar2 = fn_8305D7C8(lVar7);
      fn_8305E0F8(lVar6,uVar2);
      uVar2 = fn_8305D618(lVar7);
      fn_8305D5F8(lVar6,uVar2);
      fn_83063228(param_1,*(undefined4 *)(param_2 + 0x30),param_3);
LAB_830633f4:
      iVar3 = *(int *)(param_2 + 0x34);
      param_3 = lVar1;
      goto LAB_830633f8;
    }
LAB_83063294:
    iVar3 = *(int *)(param_2 + 0x30);
  }
LAB_830633f8:
  fn_83063228(param_1,iVar3,param_3);
  return;
}

