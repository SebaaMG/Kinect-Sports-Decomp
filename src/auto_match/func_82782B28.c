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
extern int fn_82781F48();
extern int fn_82789940();
extern int fn_82789AA0();
extern int fn_82789DC8();
extern int fn_82789E08();
extern int fn_8278A2F0();


void fn_82782B28(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  fn_82789940();
  *(undefined4 *)(param_2 + 0x8c) = param_8;
  *(int *)(param_2 + 0x80) = param_4;
  *(int *)(param_2 + 0x84) = param_5;
  if ((param_4 != 0) && (param_5 == 0)) {
    *(undefined4 *)(param_2 + 0x80) = 0;
  }
  *(undefined1 *)(param_2 + 0x88) = 0;
  uVar5 = 0;
  if (*(int *)(param_3 + 0x104) != 0) {
    do {
      fn_82789DC8(param_2,(ulonglong)
                                *(uint *)(((uint)(uVar5 >> 8) & 0xfffffc) +
                                         *(int *)(param_3 + 0x110)) + (uVar5 & 0x3ff) * 8);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_3 + 0x104));
  }
  if (*(int *)(param_2 + 0x80) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x84);
  }
  uVar5 = 0;
  if (*(int *)(param_3 + 0x154) != 0) {
    do {
      uVar4 = (ulonglong)
              *(uint *)(*(int *)(((uint)((uVar5 & 0xffffffff) >> 4) & 0xffffffc) +
                                *(int *)(param_3 + 0x160)) + ((uint)uVar5 & 0x3f) * 0x18 + 0x10) - 1
      ;
      if (((int)uVar4 < iVar3) && (*(char *)((int)uVar4 * 0x28 + *(int *)(param_2 + 0x80)) != '\0'))
      {
        uVar4 = uVar4 | 0x40000000;
        *(undefined1 *)(param_2 + 0x88) = 1;
      }
      fn_82781F48(param_3,uVar5);
      uVar6 = 0;
      uVar1 = *(uint *)(param_3 + 0x184);
      if (uVar1 != 0) {
        do {
          puVar2 = (undefined4 *)
                   (*(int *)(((uint)(uVar6 >> 8) & 0xfffffc) + *(int *)(param_3 + 400)) +
                   ((uint)uVar6 & 0x3ff) * 0xc);
          fn_82789E08(param_2,*puVar2,puVar2[1],puVar2[2],uVar4);
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (ulonglong)uVar1);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_3 + 0x154));
  }
  fn_8278A2F0(param_1,param_2);
  if (*(char *)(param_2 + 0x88) != '\0') {
    fn_82789AA0(param_2);
  }
  return;
}

