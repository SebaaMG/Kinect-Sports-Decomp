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
extern unsigned int *auStack_70;
extern int fn_8269DA30();
extern int fn_8269F500();
extern int fn_826F7940();
extern int fn_826FDB30();
extern int fn_82704298();
extern unsigned int iStack_6c;
extern unsigned int uStack_68;


void fn_82705900(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  
  uVar3 = (ulonglong)(uint)param_2[0x20];
  if (param_2[0x20] == 0) {
    uVar3 = fn_8269F500(param_2);
  }
  lVar6 = uVar3 + 0xc;
  param_1 = param_1 + 0xa28;
  iVar5 = fn_8269DA30(param_1,lVar6);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 4);
    iVar7 = 0;
    iStack_6c = 0;
    if (iVar5 != 0) {
      iVar8 = iVar5;
      do {
        auStack_70[0] = 0;
        iVar1 = param_2[0x1a];
        uVar4 = (**(code **)(*param_2 + 0x5c))(param_2);
        (**(code **)(iVar1 + 0xc))(param_2 + 0x1a,uVar4,iVar8,iVar8 + 8,auStack_70);
        iVar1 = *(int *)(iVar8 + 0x18);
        if (*(char *)(iVar8 + 0x1c) == '\0') {
          fn_826F7940(iVar8,1);
        }
        else {
          iVar2 = iVar8;
          if (iStack_6c != 0) {
            *(int *)(iVar7 + 0x18) = iVar8;
            iVar2 = iStack_6c;
          }
          iStack_6c = iVar2;
          *(undefined4 *)(iVar8 + 0x18) = 0;
          iVar7 = iVar8;
        }
        iVar8 = iVar1;
      } while (iVar1 != 0);
      if (iStack_6c != 0) {
        if (iStack_6c == iVar5) {
          return;
        }
        piStack_64 = &iStack_6c;
        uStack_68 = (undefined4)lVar6;
        fn_82704298(param_1,param_1,&uStack_68);
        return;
      }
    }
    fn_826FDB30(param_1,lVar6);
  }
  return;
}

