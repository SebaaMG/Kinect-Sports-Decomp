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
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_824B8A48();
extern int fn_824B9228();
extern int fn_824B9B90();
extern int fn_824B9C60();
extern int fn_824BA378();
extern int fn_824BAF40();
extern int fn_824BB8C8();
extern int fn_824BC388();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();


void fn_824B86A0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  while( true ) {
    uVar2 = fn_8225C590();
    iVar3 = fn_8225D9B8(uVar2,lVar7);
    if ((((iVar3 != 0) && (cVar4 = fn_828EA610(iVar3), cVar4 == '\0')) &&
        (cVar4 = fn_828EA5F8(iVar3), cVar4 != '\0')) &&
       (cVar4 = fn_82512508(iVar3), cVar4 != '\0')) break;
LAB_824b8864:
    lVar7 = lVar7 + 1;
    if (3 < (int)lVar7) {
      RtlEnterCriticalSection(param_1);
      *(undefined4 *)(param_1 + 0x34) = 0;
      RtlLeaveCriticalSection(param_1);
      return;
    }
  }
  iVar1 = *(int *)(iVar3 + 0x100);
  if (*(int *)(iVar1 + 0x564) != 0) {
    uVar2 = 0;
LAB_824b8894:
    fn_824B8A48(param_1,iVar3,uVar2);
    return;
  }
  if (*(int *)(iVar1 + 0x570) != 0) {
    uVar2 = 1;
    goto LAB_824b8894;
  }
  if (*(int *)(iVar1 + 0x568) != 0) {
    uVar2 = 2;
    goto LAB_824b8894;
  }
  if (*(int *)(iVar1 + 0x56c) != 0) {
    uVar2 = 3;
    goto LAB_824b8894;
  }
  if (*(int *)(iVar1 + 0x42c) != 0) {
    uVar2 = 0;
LAB_824b88c0:
    uVar5 = 0;
LAB_824b88c4:
    fn_824B9228(param_1,iVar3,uVar2,uVar5);
    return;
  }
  if (*(int *)(iVar1 + 0x43c) != 0) {
    uVar2 = 1;
    goto LAB_824b88c0;
  }
  if (*(int *)(iVar1 + 0x430) != 0) {
    uVar2 = 2;
    goto LAB_824b88c0;
  }
  if (*(int *)(iVar1 + 0x438) != 0) {
    uVar2 = 3;
    goto LAB_824b88c0;
  }
  if (*(int *)(iVar1 + 0x434) != 0) {
    uVar5 = 1;
    uVar2 = 4;
    goto LAB_824b88c4;
  }
  if (*(int *)(iVar1 + 0x45c) != 0) {
    fn_824B9B90(param_1,iVar3);
    return;
  }
  if (*(int *)(iVar1 + 0x458) != 0) {
    fn_824B9C60(param_1,iVar3);
    return;
  }
  if (*(int *)(iVar1 + 0x8f4) == 0) {
    if (*(int *)(iVar1 + 0x8f8) != 0) {
      uVar2 = 0;
      uVar6 = 0;
      uVar5 = 2;
      goto LAB_824b8924;
    }
    if (*(int *)(iVar1 + 0x908) != 0) {
      uVar2 = 0;
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_824b8924;
    }
    if (*(int *)(iVar1 + 0x904) != 0) {
      uVar2 = 0;
      uVar6 = 0;
      uVar5 = 3;
      goto LAB_824b8924;
    }
    if (*(int *)(iVar1 + 0x8fc) != 0) {
      uVar2 = 0;
      uVar6 = 1;
      goto LAB_824b8920;
    }
    if (*(int *)(iVar1 + 0x900) == 0) {
      if (*(int *)(iVar1 + 0xb70) == 0) {
        if (*(int *)(iVar1 + 0xb74) != 0) {
          uVar2 = 0;
          uVar6 = 0;
          uVar5 = 2;
          goto LAB_824b8984;
        }
        if (*(int *)(iVar1 + 0xb84) != 0) {
          uVar2 = 0;
          uVar6 = 0;
          uVar5 = 1;
          goto LAB_824b8984;
        }
        if (*(int *)(iVar1 + 0xb80) != 0) {
          uVar2 = 0;
          uVar6 = 0;
          uVar5 = 3;
          goto LAB_824b8984;
        }
        if (*(int *)(iVar1 + 0xb78) != 0) {
          uVar2 = 0;
          uVar6 = 1;
          goto LAB_824b8980;
        }
        if (*(int *)(iVar1 + 0xb7c) == 0) {
          if (*(int *)(iVar1 + 0x8a0) == 0) {
            if (*(int *)(iVar1 + 0x8a4) != 0) {
              uVar2 = 0;
              uVar6 = 0;
              uVar5 = 2;
              goto LAB_824b89e4;
            }
            if (*(int *)(iVar1 + 0x8a8) != 0) {
              uVar2 = 0;
              uVar6 = 0;
              uVar5 = 3;
              goto LAB_824b89e4;
            }
            if (*(int *)(iVar1 + 0x8ac) != 0) {
              uVar2 = 0;
              uVar6 = 0;
              uVar5 = 1;
              goto LAB_824b89e4;
            }
            if (*(int *)(iVar1 + 0x8b0) != 0) {
              uVar2 = 0;
              uVar6 = 1;
              goto LAB_824b89e0;
            }
            if (*(int *)(iVar1 + 0x8b4) == 0) {
              if (*(int *)(iVar1 + 0x8dc) != 0) {
                fn_824BC388(param_1,iVar3);
                return;
              }
              goto LAB_824b8864;
            }
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
          uVar6 = 0;
LAB_824b89e0:
          uVar5 = 0;
LAB_824b89e4:
          fn_824BB8C8(param_1,iVar3,uVar5,uVar6,uVar2);
          return;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      uVar6 = 0;
LAB_824b8980:
      uVar5 = 0;
LAB_824b8984:
      fn_824BAF40(param_1,iVar3,uVar5,uVar6,uVar2);
      return;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  uVar6 = 0;
LAB_824b8920:
  uVar5 = 0;
LAB_824b8924:
  fn_824BA378(param_1,iVar3,uVar5,uVar6,uVar2);
  return;
}

