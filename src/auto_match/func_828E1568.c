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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_84;
extern unsigned int *auStack_8c;
extern int fn_825089A0();
extern int fn_828865A0();
extern int fn_828A0C50();
extern int fn_828AC428();
extern int fn_828AC488();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828D45F8();
extern int fn_828D47D0();
extern int fn_828E0390();
extern int fn_828E0DE0();
extern int fn_828E0FD0();
extern unsigned int uStack_8d;


void fn_828E1568(int param_1)

{
  char cVar4;
  int *piVar2;
  undefined8 uVar1;
  int iVar3;
  undefined4 uVar5;
  double dVar6;
  undefined1 uStack_8d;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [48];
  
  cVar4 = fn_828AD740(*(undefined4 *)(param_1 + 0x14));
  if (cVar4 == '\0') {
    cVar4 = fn_828ACC40(*(undefined4 *)(param_1 + 0x18));
    if ((cVar4 == '\0') && (cVar4 = fn_828865A0(param_1), cVar4 != '\0')) {
      cVar4 = fn_828ACCE8(*(undefined4 *)(param_1 + 0x18));
      if (cVar4 == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar1 = fn_828D45F8(param_1);
        iVar3 = fn_828D47D0(uVar1,3,0);
        if (iVar3 == 0) {
          fn_828E0DE0(param_1,7);
          return;
        }
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar1 = fn_828D45F8(param_1);
        iVar3 = fn_828D47D0(uVar1,4,0);
        if (iVar3 == 0) {
          fn_828AC428(auStack_60);
          uVar1 = fn_828D45F8(param_1);
          fn_828E0FD0(uVar1,auStack_40,auStack_80,auStack_70,auStack_84,&uStack_8d,auStack_60,
                        auStack_8c);
          cVar4 = fn_828A0C50((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x8c) + 0x14,
                               auStack_80);
          if (cVar4 != '\0') {
            fn_828E0DE0(param_1,7);
          }
          fn_828AC488(auStack_60);
          return;
        }
      }
      fn_828E0390(param_1,2);
      return;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    piVar2 = (int *)fn_825089A0();
    dVar6 = (double)(**(code **)(*piVar2 + 8))();
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 2) {
      return;
    }
    piVar2 = (int *)fn_825089A0();
    dVar6 = (double)(**(code **)(*piVar2 + 8))();
    uVar5 = 2;
  }
  *(float *)(param_1 + 0x10) = (float)dVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  return;
}

